#include <iostream>
#include <Windows.h>

struct bank
{
	int AccNum{};
	std::string FirstName{};
	float balance{};
};

void BankNewBalance(bank& account, float& NewBalance)
{
	account.balance = NewBalance;
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	bank account;
	float NewBalance{};

	std::cout << "Введите номер счёта: ";
	std::cin >> account.AccNum;
	std::cout << "Введите ваше имя: ";
	std::cin >> account.FirstName;
	std::cout << "Введите баланс: ";
	std::cin >> account.balance;
	std::cout << "Введите новый Баланс: ";
	std::cin >> NewBalance;

	BankNewBalance(account, NewBalance);
	std::cout << "Ваш счёт: " << account.FirstName << ", " << account.AccNum << ", " << account.balance;
}