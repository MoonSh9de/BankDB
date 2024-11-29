#pragma once

#include "Clients.h";
#include "Accounts.h"
#include "Cards.h"
#include "Transactions.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;
using namespace System::Text::RegularExpressions;

ref class Functions
{
public:


	SqlConnection^ conn;
	SqlConnectionStringBuilder^ connStrinfBuilder;
	void ConnectToDB()
	{
		//Data Source=DESKTOP-FB2DS1E;Initial Catalog=bank;Integrated Security=True;Encrypt=False
		connStrinfBuilder = gcnew SqlConnectionStringBuilder();
		connStrinfBuilder->DataSource = "DESKTOP-FB2DS1E";
		connStrinfBuilder->InitialCatalog = "bank";
		connStrinfBuilder->IntegratedSecurity = true;

		conn = gcnew SqlConnection(Convert::ToString(connStrinfBuilder));
	}

	//Фунцкионал
	//insert
public:
	bool IsPhoneNumberUnique(String^ phoneNumber)
	{
		try
		{
			// Подключение к БД
			ConnectToDB();

			String^ cmdText = "SELECT COUNT(*) FROM dbo.clients WHERE phone_number = @phone_number";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			cmd->Parameters->AddWithValue("@phone_number", phoneNumber);

			// Открываем соединение
			conn->Open();

			// Выполняем запрос и получаем результат
			int count = Convert::ToInt32(cmd->ExecuteScalar());

			// Закрываем соединение
			conn->Close();

			// Если count > 0, значит номер телефона уже существует в базе данных
			return count;
		}
		
		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}
		}
	}
public:
	void InsertClients(Clients^ n)
	{
		try
		{
			// Подключение к БД
			ConnectToDB();

			// Проверка уникальности номера телефона
			if (IsPhoneNumberUnique(n->phoneNumber))
			{
				MessageBox::Show("Номер телефона уже существует в базе данных!");
			}
			else {
				String^ cmdText = "INSERT INTO dbo.clients (first_name, last_name, birth_date, phone_number) VALUES (@first_name, @last_name, @birth_date, @phone_number)";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

				// Устанавливаем параметры, которые принимаем из формы
				cmd->Parameters->AddWithValue("@first_name", n->firstName);
				cmd->Parameters->AddWithValue("@last_name", n->lastName);
				cmd->Parameters->AddWithValue("@birth_date", n->birthDate); // Убедитесь, что birth_date в правильном формате
				cmd->Parameters->AddWithValue("@phone_number", n->phoneNumber);

				// Открываем соединение
				conn->Open();

				// Выполняем запрос
				cmd->ExecuteNonQuery();

				// Закрываем соединение
				conn->Close();
				MessageBox::Show("Клиент добавлен в базу данных!");
			}
		}

		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}
		}
	}

	//SELECT
public: ListBox::ObjectCollection^ SelectClients() {
	try
	{
		//Подключение к БД
		ConnectToDB();

		ListBox^ ListWithClients = gcnew ListBox();

		Clients^ n = gcnew Clients();

		String^ cmdText = "SELECT * FROM dbo.clients";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

		// Открываем соединение
		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();
		//Цикл по строкам таблицы, который забирает все значения
		while (reader->Read()) {
			n->clientID = Convert::ToInt32(reader["client_id"]->ToString());
			n->firstName = (reader["first_name"]->ToString());
			n->lastName = (reader["last_name"]->ToString());
			n->birthDate = (reader["birth_date"]->ToString());

			n->phoneNumber = (reader["phone_number"]->ToString());
			//Заполняем список
			ListWithClients->Items->Add(String::Format("{0}. {1} {2}; {3}; Тел: {4}", n->clientID, n->firstName, n->lastName, Convert::ToDateTime(n->birthDate).ToString("dd.MM.yyyy"), n->phoneNumber));
		}
		return ListWithClients->Items;
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
	}
}

	  //DELETE
public: void DeleteCLient(Clients^ n) {
	try
	{
		//Подключение к БД
		ConnectToDB();

		String^ cmdText = "DELETE FROM dbo.clients WHERE client_id = @client_id";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		cmd->Parameters->AddWithValue("@client_id", n->clientID);
		// Открываем соединение
		conn->Open();
		// Выполняем запрос
		cmd->ExecuteNonQuery();

	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
	}
}


	  //UPDATE
public:
	void UpdateClients(Clients^ nOld, Clients^ nNew) {
		try {
			//Подключение к БД
			ConnectToDB();

			String^ cmdText = "UPDATE dbo.clients SET first_name = @new_first_name, last_name = @new_last_name, birth_date = @new_birth_date, phone_number = @new_phone_number WHERE client_id = @old_client_id";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			// Устанавливаем параметры для новых значений
			cmd->Parameters->AddWithValue("@new_first_name", nNew->firstName);
			cmd->Parameters->AddWithValue("@new_last_name", nNew->lastName);
			cmd->Parameters->AddWithValue("@new_birth_date", nNew->birthDate);
			cmd->Parameters->AddWithValue("@new_phone_number", nNew->phoneNumber);

			// Устанавливаем параметр для старого ID клиента
			cmd->Parameters->AddWithValue("@old_client_id", nOld->clientID);

			// Открываем соединение
			conn->Open();

			// Выполняем запрос
			cmd->ExecuteNonQuery();
		}
		finally {
			if (conn != nullptr) {
				// Закрываем соединение
				conn->Close();
			}
		}
	}

	//Accounts
	//Insert
	bool IsClientExists(String^ client_id)
	{
		try
		{
			// Подключение к БД
			ConnectToDB();

			String^ cmdText = "SELECT COUNT(*) FROM dbo.clients WHERE client_id = @client_id";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			cmd->Parameters->AddWithValue("@client_id", client_id);

			// Открываем соединение
			conn->Open();

			// Выполняем запрос и получаем результат
			int count = Convert::ToInt32(cmd->ExecuteScalar());

			// Закрываем соединение
			conn->Close();

		
			return count;
		}

		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}
		}
	}

	void InsertAccounts(Accounts^ acc) {
		try
		{

			//Подключение к БД
			ConnectToDB();
			// Проверка уникальности номера телефона
			if (!IsClientExists(acc->clientID))
			{
				MessageBox::Show("Пользователь не существует!");
			}
			else {
				String^ cmdText = "INSERT INTO dbo.accounts (client_id, account_type, balance) VALUES (@client_id, @account_type, @balance)";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

				// Устанавливаем параметры, которые принимаем из формы
				cmd->Parameters->AddWithValue("@client_id", acc->clientID);
				cmd->Parameters->AddWithValue("@account_type", acc->accountType);
				cmd->Parameters->AddWithValue("@balance", acc->Balance); 
				// Открываем соединение
				conn->Open();

				// Выполняем запрос
				cmd->ExecuteNonQuery();

				// Закрываем соединение
				conn->Close();
				MessageBox::Show("Счёт добавлен в базу данных!");
			}
		}
		finally {
			if (conn != nullptr) {
				conn->Close();
			}

		}
	}

	//SELECT
public: ListBox::ObjectCollection^ SelectAccounts() {
	try
	{
		//Подключение к БД
		ConnectToDB();

		ListBox^ ListWithClients = gcnew ListBox();

		Accounts^ acc = gcnew Accounts();

		String^ cmdText = "SELECT * FROM dbo.accounts";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

		// Открываем соединение
		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();
		//Цикл по строкам таблицы, который забирает все значения
		while (reader->Read()) {
			acc->ID = Convert::ToInt32(reader["id"]->ToString());
			acc->clientID = (reader["client_id"]->ToString());
			acc->accountType = (reader["account_type"]->ToString());
			acc->Balance = (reader["Balance"]->ToString());
			acc->createdAt = (reader["created_at"]->ToString());
			//Заполняем список
			ListWithClients->Items->Add(String::Format("{0} - ID счёта. Клиент №{1}; {2}; {3} Руб; Рег: {4}", acc->ID, acc->clientID, acc->accountType, acc->Balance, acc->createdAt));
		}
		return ListWithClients->Items;
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
	}
}
	  //DELETE
public: void DeleteAccount(Accounts^ acc) {
	try
	{
		//Подключение к БД
		ConnectToDB();

		String^ cmdText = "DELETE FROM dbo.accounts WHERE id = @id";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		cmd->Parameters->AddWithValue("id", acc->ID);
		// Открываем соединение
		conn->Open();
		// Выполняем запрос
		cmd->ExecuteNonQuery();

	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
	}
}

	  //UPDATE
public:
	void UpdateAccounts(Accounts^ accOld, Accounts^ accNew) {
		try {
			// Подключение к БД
			ConnectToDB();

			// SQL-запрос с условием WHERE для обновления конкретной записи
			String^ cmdText = "UPDATE dbo.accounts SET client_id = @new_client_id, account_type = @new_account_type, balance = @new_balance WHERE id = @id";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			// Устанавливаем параметры для новых значений
			cmd->Parameters->AddWithValue("@new_client_id", accNew->clientID);
			cmd->Parameters->AddWithValue("@new_account_type", accNew->accountType);
			cmd->Parameters->AddWithValue("@new_balance", Convert::ToDecimal(accNew->Balance));

			// Устанавливаем параметр для старого ID клиента
			cmd->Parameters->AddWithValue("@id", accOld->ID);

			// Открываем соединение
			conn->Open();

			// Выполняем запрос
			cmd->ExecuteNonQuery();

		}
		finally {
			if (conn != nullptr) {
				// Закрываем соединение
				conn->Close();
			}
		}
	}
	//Cards
	//insert
	bool IsAccountExists(String^ id)
	{
		try
		{
			// Подключение к БД
			ConnectToDB();

			String^ cmdText = "SELECT COUNT(*) FROM dbo.accounts WHERE id = @id";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			cmd->Parameters->AddWithValue("@id", id);

			// Открываем соединение
			conn->Open();

			// Выполняем запрос и получаем результат
			int count = Convert::ToInt32(cmd->ExecuteScalar());

			// Закрываем соединение
			conn->Close();


			return count;
		}

		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}
		}
	}
	bool IsCardExists(String^ card_number, int currentCardID)
	{
		try
		{
			// Подключение к БД
			ConnectToDB();

			String^ cmdText = "SELECT COUNT(*) FROM dbo.cards WHERE card_number = @card_number AND ID <> @currentCardID";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			cmd->Parameters->AddWithValue("@card_number", card_number);
			cmd->Parameters->AddWithValue("@currentCardID", currentCardID);

			// Открываем соединение
			conn->Open();

			// Выполняем запрос и получаем результат
			int count = Convert::ToInt32(cmd->ExecuteScalar());

			// Закрываем соединение
			conn->Close();

			return count > 0; // Возвращаем true, если есть хотя бы одна карта с таким номером, кроме текущей
		}
		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}
		}
	}
	bool IsCardExistsBD(String^ card_number)
	{
		try
		{
			// Подключение к БД
			ConnectToDB();

			String^ cmdText = "SELECT COUNT(*) FROM dbo.cards WHERE card_number = @card_number";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			cmd->Parameters->AddWithValue("@card_number", card_number);

			// Открываем соединение
			conn->Open();

			// Выполняем запрос и получаем результат
			int count = Convert::ToInt32(cmd->ExecuteScalar());

			// Закрываем соединение
			conn->Close();


			return count;
		}

		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}
		}
	}

	bool IsCvvExists(String^ cvv) {
		try {
			// Проверяем, что CVV состоит только из трех цифр
			Regex^ regex = gcnew Regex("^[0-9]{3}$");
			if (!regex->IsMatch(cvv)) {
				// Если CVV не соответствует шаблону, возвращаем false
				MessageBox::Show("Неправильно введён CVV-код!");
			}
			else {
			// Подключение к БД
			ConnectToDB();

			String^ cmdText = "SELECT COUNT(*) FROM dbo.cards WHERE cvv = @cvv";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			cmd->Parameters->AddWithValue("@cvv", cvv);

			// Открываем соединение
			conn->Open();

			// Выполняем запрос и получаем результат
			int count = Convert::ToInt32(cmd->ExecuteScalar());

			// Закрываем соединение
			conn->Close();

			return count > 0; // Возвращаем true, если CVV существует в БД
			}
		}
		finally {
			if (conn != nullptr) {
				conn->Close();
			}
		}
	}


public:
	void InsertCards(Cards^ c) {
		try
		{
			// Подключение к БД
			ConnectToDB();

			// Проверка существования счета
			if (!IsAccountExists(c->accountID))
			{
				MessageBox::Show("Счёт не существует!");
				return; // Прерываем выполнение функции
			}

			// Проверка уникальности карты и CVV
			if (IsCardExistsBD(c->cardNumber))
			{
				MessageBox::Show("Карта уже существует!");
				return; // Прерываем выполнение функции
			}
			if (IsCvvExists(c->Cvv))
			{
				MessageBox::Show("CVV уже существует!");
				return; // Прерываем выполнение функции
			}

			// Если все проверки пройдены, вставляем данные о карте
			String^ cmdText = "INSERT INTO dbo.cards (account_id, card_number, expiration_date, cvv) VALUES (@account_id, @card_number, @expiration_date, @cvv)";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			// Устанавливаем параметры
			cmd->Parameters->AddWithValue("@account_id", c->accountID);
			cmd->Parameters->AddWithValue("@card_number", c->cardNumber);
			cmd->Parameters->AddWithValue("@expiration_date", c->expirationDate);
			cmd->Parameters->AddWithValue("@cvv", c->Cvv);

			// Открываем соединение
			conn->Open();

			// Выполняем запрос
			cmd->ExecuteNonQuery();
			MessageBox::Show("Карта добавлен в базу данных!");
			// Закрываем соединение
			conn->Close();
		}
		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}
		}
	}

	//SELECT
public: ListBox::ObjectCollection^ SelectCards() {
	try
	{
		//Подключение к БД
		ConnectToDB();

		ListBox^ ListWithCards = gcnew ListBox();

		Cards^ c = gcnew Cards();

		String^ cmdText = "SELECT * FROM dbo.cards";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

		// Открываем соединение
		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();
		//Цикл по строкам таблицы, который забирает все значения
		while (reader->Read()) {
			c->ID = Convert::ToInt32(reader["id"]->ToString());
			c->accountID = (reader["account_id"]->ToString());
			c->cardNumber = (reader["card_number"]->ToString());
			c->expirationDate = (reader["expiration_date"]->ToString());
			//Заполняем список
			ListWithCards->Items->Add(String::Format("{0}. ID счёта: {1}; {2}; Действует до: {3}", c->ID, c->accountID, c->cardNumber, c->expirationDate));
		}
		return ListWithCards->Items;
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
	}
	}
	 //DELETE
public: void DeleteCard(Cards^ c) {
	try
	{
		//Подключение к БД
		ConnectToDB();

		String^ cmdText = "DELETE FROM dbo.cards WHERE id = @id";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		cmd->Parameters->AddWithValue("id", c->ID);
		// Открываем соединение
		conn->Open();
		// Выполняем запрос
		cmd->ExecuteNonQuery();

	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
	}
}
	  //UPDATE
public:
	void UpdateCards(Cards^ cOld, Cards^ cNew) {
		try {

			// Подключение к БД
			ConnectToDB();
			// Проверка существования счета
			if (!IsAccountExists(cNew->accountID))
			{
				MessageBox::Show("Счёт не существует!");
				return; // Прерываем выполнение функции
			}

			// Проверка уникальности карты, исключая текущую карту
			if (IsCardExists(cNew->cardNumber, cOld->ID))
			{
				MessageBox::Show("Карта с таким номером уже существует!");
				return; // Прерываем выполнение функции
			}
			else {
				String^ cmdText = "UPDATE dbo.cards SET account_id = @new_account_id, card_number = @new_card_number WHERE ID = @old_id";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

				// Устанавливаем параметры для новых значений
				cmd->Parameters->AddWithValue("@new_account_id", cNew->accountID);
				cmd->Parameters->AddWithValue("@new_card_number", cNew->cardNumber);

				// Устанавливаем параметр для старого ID
				cmd->Parameters->AddWithValue("@old_id", cOld->ID);

				// Открываем соединение
				conn->Open();

				// Выполняем запрос
				cmd->ExecuteNonQuery();
				MessageBox::Show("Данные карты обновлены!");
			}
		}
		finally {
			if (conn != nullptr) {
				// Закрываем соединение
				conn->Close();
			}
		}
	}
public:
	double GetAccountBalance(int id) {
		double balance = 0.0;

		try {
			// Connect to DB
			ConnectToDB();

			// Query to get account balance
			String^ cmdText = "SELECT balance FROM accounts WHERE id = @id";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			cmd->Parameters->AddWithValue("@id", id);

			// Open connection
			conn->Open();

			// Execute the query
			SqlDataReader^ reader = cmd->ExecuteReader();

			// Read the balance value
			if (reader->Read()) {
				balance = Convert::ToDouble(reader["balance"]);
			}

			// Close the reader
			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			if (conn != nullptr) {
				conn->Close();
			}
		}
		return balance;
	}
public:
	void UpdateAccountBalance(int id, double newBalance) {
		try {
			// Connect to DB
			ConnectToDB();

			// Query to update account balance
			String^ cmdText = "UPDATE accounts SET balance = @new_balance WHERE id = @id";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			cmd->Parameters->AddWithValue("@new_balance", newBalance);
			cmd->Parameters->AddWithValue("@id", id);

			// Open connection
			conn->Open();

			// Execute the query
			cmd->ExecuteNonQuery();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			if (conn != nullptr) {
				conn->Close();
			}
		}
	}
	//Transactions
	//insert
public:
	void InsertTransactions(Transactions^ tr) {
		try {
			// Connect to DB
			ConnectToDB();

			// Check if account exists
			if (!IsAccountExists(tr->accountID)) {
				MessageBox::Show("Счёт не существует!");
				return; // Exit the function if the account doesn't exist
			}
			else {
				// Get current account balance
				double currentBalance = GetAccountBalance(Convert::ToInt32(tr->accountID));

				double newBalance;
				if (tr->transactionType == "Вывод") {
					double withdrawalAmount = Convert::ToDouble(tr->Amount);

					// Check if the withdrawal amount is greater than the account balance
					if (withdrawalAmount > currentBalance) {
						MessageBox::Show("Сумма транзакции превышает баланс счета!");
						return;
					}

					newBalance = currentBalance - withdrawalAmount;
				}
				else if (tr->transactionType == "Зачисление") {
					newBalance = currentBalance + Convert::ToDouble(tr->Amount);
				}
				else {
					MessageBox::Show("Некорректный тип транзакции!");
					return;
				}

				String^ cmdText = "INSERT INTO dbo.transactions (account_id, transaction_type, amount) VALUES (@account_id, @transaction_type, @amount)";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

				// Set parameters
				cmd->Parameters->AddWithValue("@account_id", tr->accountID);
				cmd->Parameters->AddWithValue("@transaction_type", tr->transactionType);
				cmd->Parameters->AddWithValue("@amount", tr->Amount);

				// Open connection
				conn->Open();

				// Execute the query
				cmd->ExecuteNonQuery();

				// Update account balance
				UpdateAccountBalance(Convert::ToInt32(tr->accountID), newBalance);

				MessageBox::Show("Транзакция добавлена в базу данных!");
			}
		}
		finally {
			if (conn != nullptr) {
				conn->Close();
			}
		}
	}


	//SELECT
public: ListBox::ObjectCollection^ SelectTransactions() {
	try
	{
		//Подключение к БД
		ConnectToDB();

		ListBox^ ListWithTransactions = gcnew ListBox();

		Transactions^ tr = gcnew Transactions();

		String^ cmdText = "SELECT * FROM dbo.transactions";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

		// Открываем соединение
		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();
		//Цикл по строкам таблицы, который забирает все значения
		while (reader->Read()) {
			tr->ID = Convert::ToInt32(reader["id"]->ToString());
			tr->accountID = (reader["account_id"]->ToString());
			tr->transactionType = (reader["transaction_type"]->ToString());
			tr->Amount = (reader["amount"]->ToString());
			tr->createdAt = (reader["created_at"]->ToString());
			//Заполняем список
			ListWithTransactions->Items->Add(String::Format("{0}. ID счёта: {1}; Тип: {2}; Сумма: {3}; Дата: {4}", tr->ID, tr->accountID, tr->transactionType, tr->Amount, tr->createdAt));
		}
		return ListWithTransactions->Items;
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
	}
}
	  //DELETE
	  public: void DeleteTransaction(Transactions^ tr) {
		  try {
			  // Подключение к БД
			  ConnectToDB();

			  String^ cmdText = "DELETE FROM dbo.transactions WHERE id = @id";
			  SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			  cmd->Parameters->AddWithValue("id", tr->ID);

			  // Открываем соединение
			  conn->Open();

			  // Выполняем запрос на удаление транзакции
			  cmd->ExecuteNonQuery();

			  // Преобразуем строковое значение Amount в число
			  double amount;
			  if (!Double::TryParse(tr->Amount, amount)) {
				  MessageBox::Show("Не удалось преобразовать сумму транзакции в число!");
				  return;
			  }

			  // Обновляем баланс счета в зависимости от типа транзакции
			  if (tr->transactionType == "Зачисление") {
				  String^ updateCmdText = "UPDATE accounts SET balance = balance - @amount WHERE id = @account_id";
				  SqlCommand^ updateCmd = gcnew SqlCommand(updateCmdText, conn);
				  updateCmd->Parameters->AddWithValue("amount", amount);
				  updateCmd->Parameters->AddWithValue("account_id", tr->accountID);
				  updateCmd->ExecuteNonQuery();
			  }
			  else if (tr->transactionType == "Вывод") {
				  String^ updateCmdText = "UPDATE accounts SET balance = balance + @amount WHERE id = @account_id";
				  SqlCommand^ updateCmd = gcnew SqlCommand(updateCmdText, conn);
				  updateCmd->Parameters->AddWithValue("amount", amount);
				  updateCmd->Parameters->AddWithValue("account_id", tr->accountID);
				  updateCmd->ExecuteNonQuery();
			  }
		  }
		  finally {
			  if (conn != nullptr) {
				  conn->Close();
			  }
		  }
	  }

	public:
	//Admin login
	bool adminLogin(String^ name, String^ Password) {
		try {
			//Подключение к БД
			ConnectToDB();
			bool isValid = false;
			String^ cmdText = "SELECT COUNT(*) FROM sys.sql_logins WHERE [name] = @name AND PWDCOMPARE(@password, password_hash) = 1";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
				cmd->Parameters->AddWithValue("@name", name);
				cmd->Parameters->AddWithValue("@password", Password);

				conn->Open();
				int count = (int)cmd->ExecuteScalar();

				isValid = (count > 0);

			return isValid;
		}
		finally {
			if (conn != nullptr) {
				// Закрываем соединение
				conn->Close();
			}
		}
	}
	//Admin user
		public:
			bool userLogin(String^ last_name, String^ phone_number) {
				try {
					//Подключение к БД
					ConnectToDB();
					bool isValid = false;
					String^ cmdText = "SELECT COUNT(*) FROM dbo.clients WHERE [last_name] = @last_name AND [phone_number] = @phone_number";
					SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
					cmd->Parameters->AddWithValue("@last_name", last_name);
					cmd->Parameters->AddWithValue("@phone_number", phone_number);
					conn->Open();
					int count = (int)cmd->ExecuteScalar();

					isValid = (count > 0);

					return isValid;
				}
				finally {
					if (conn != nullptr) {
						// Закрываем соединение
						conn->Close();
					}
				}
			}
			//Admin user
		public:
			Clients^ getCLient(String^ last_name, String^ phone_number) {
				Clients^ n = gcnew Clients();
				try {
					// Подключение к БД
					ConnectToDB();
					String^ cmdText = "SELECT client_id, first_name, last_name FROM dbo.clients WHERE [last_name] = @last_name AND [phone_number] = @phone_number";
					SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
					cmd->Parameters->AddWithValue("@last_name", last_name);
					cmd->Parameters->AddWithValue("@phone_number", phone_number);

					conn->Open();
					SqlDataReader^ reader = cmd->ExecuteReader();
					if (reader->Read()) {
						n->clientID = Convert::ToInt32(reader["client_id"]->ToString());
						n->firstName = (reader["first_name"]->ToString());
						n->lastName = (reader["last_name"]->ToString());
					}
					reader->Close();
				}
				catch (Exception^ e) {
					// Обработка ошибок
					Console::WriteLine("Ошибка при поиске клиента: " + e->Message);
				}
				finally {
					if (conn != nullptr) {
						// Закрываем соединение
						conn->Close();
					}
				}
				return n;
			}
			//SELECT
public: ListBox::ObjectCollection^ userAccounts(int client_id) {
	try
	{
		//Подключение к БД
		ConnectToDB();

		ListBox^ ListWithAccounts = gcnew ListBox();

		Accounts^ acc = gcnew Accounts();

		String^ cmdText = "SELECT * FROM dbo.Accounts WHERE [client_id] = @client_id";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		cmd->Parameters->AddWithValue("@client_id", client_id);
		// Открываем соединение
		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();
		//Цикл по строкам таблицы, который забирает все значения
		while (reader->Read()) {
			acc->ID = Convert::ToInt32(reader["id"]->ToString());
			acc->accountType = (reader["account_type"]->ToString());
			acc->Balance = (reader["Balance"]->ToString());
			//Заполняем список
			ListWithAccounts->Items->Add(String::Format("{0} - ID счёта; Тип: {1}; {2} Руб.", acc->ID, acc->accountType, acc->Balance));
		}
		return ListWithAccounts->Items;
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
	}
}
	  //SELECT
public: ListBox::ObjectCollection^ userCards(int client_id) {
	try
	{
		// Подключение к БД
		ConnectToDB();

		ListBox^ ListWithCards = gcnew ListBox();

		Cards^ c = gcnew Cards();

		// Modified SQL query to find cards associated with accounts of the client
		String^ cmdText = "SELECT c.* FROM cards c " +
			"JOIN accounts a ON c.account_id = a.id " +
			"WHERE a.client_id = @client_id;";

		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		cmd->Parameters->AddWithValue("@client_id", client_id);

		// Открываем соединение
		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();

		// Цикл по строкам таблицы, который забирает все значения
		while (reader->Read()) {
			c->ID = Convert::ToInt32(reader["id"]->ToString());
			c->accountID = (reader["account_id"]->ToString());
			c->cardNumber = (reader["card_number"]->ToString());
			c->expirationDate = (reader["expiration_date"]->ToString());

			// Заполняем список
			ListWithCards->Items->Add(String::Format("{0} - ID карты; ID Счёта: {1}; № {2}; Срок действия: {3}", c->ID, c->accountID, c->cardNumber, c->expirationDate));
		}

		return ListWithCards->Items;
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
	}
}
	  //SELECT
public: ListBox::ObjectCollection^ userTransactions(int client_id) {
	try
	{
		//Подключение к БД
		ConnectToDB();

		ListBox^ ListWithTranasctions = gcnew ListBox();

		Transactions^ tr = gcnew Transactions();

		String^ cmdText = "SELECT c.* FROM transactions c " +
			"JOIN accounts a ON c.account_id = a.id " +
			"WHERE a.client_id = @client_id;";
		SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
		cmd->Parameters->AddWithValue("@client_id", client_id);
		// Открываем соединение
		conn->Open();

		SqlDataReader^ reader = cmd->ExecuteReader();
		//Цикл по строкам таблицы, который забирает все значения
		while (reader->Read()) {
			tr->ID = Convert::ToInt32(reader["id"]->ToString());
			tr->accountID = (reader["account_id"]->ToString());
			tr->transactionType = (reader["transaction_type"]->ToString());
			tr->Amount = (reader["amount"]->ToString());
			tr->createdAt = (reader["created_at"]->ToString());
			//Заполняем список
			ListWithTranasctions->Items->Add(String::Format("{0}. ID счёта: {1}; Тип: {2}; Сумма: {3}; Дата: {4}", tr->ID, tr->accountID, tr->transactionType, tr->Amount, tr->createdAt));
		}
		return ListWithTranasctions->Items;
	}
	finally {
		if (conn != nullptr) {
			conn->Close();
		}
	}
}
	  void userTransaction(Transactions^ tr) {
		  try {
			  // Connect to DB
			  ConnectToDB();

				  // Get current account balance
				  double currentBalance = GetAccountBalance(Convert::ToInt32(tr->accountID));

				  double newBalance;
				  if (tr->transactionType == "Вывод") {
					  double withdrawalAmount = Convert::ToDouble(tr->Amount);

					  // Check if the withdrawal amount is greater than the account balance
					  if (withdrawalAmount > currentBalance) {
						  MessageBox::Show("Сумма транзакции превышает баланс счета!");
						  return;
					  }

					  newBalance = currentBalance - withdrawalAmount;
				  }
				  else if (tr->transactionType == "Зачисление") {
					  newBalance = currentBalance + Convert::ToDouble(tr->Amount);
				  }
				  else {
					  MessageBox::Show("Некорректный тип транзакции!");
					  return;
				  }

				  String^ cmdText = "INSERT INTO dbo.transactions (account_id, transaction_type, amount) VALUES (@account_id, @transaction_type, @amount)";
				  SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

				  // Set parameters
				  cmd->Parameters->AddWithValue("@account_id", tr->accountID);
				  cmd->Parameters->AddWithValue("@transaction_type", tr->transactionType);
				  cmd->Parameters->AddWithValue("@amount", tr->Amount);

				  // Open connection
				  conn->Open();

				  // Execute the query
				  cmd->ExecuteNonQuery();

				  // Update account balance
				  UpdateAccountBalance(Convert::ToInt32(tr->accountID), newBalance);

				  MessageBox::Show("Успешно!");
			  }
		  finally {
			  if (conn != nullptr) {
				  conn->Close();
			  }
		  }
	  }

};

