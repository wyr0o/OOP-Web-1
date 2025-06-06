#include <iostream>
#include <Windows.h>

struct bank
{
	int AccNum=0;
	std::string FirstName;
	float balance=0;
	float NewBalance=0;
};

void BankAccInfo(bank& account)
{
	std::cout << "Введите номер счёта: ";
	std::cin >> account.AccNum;
	std::cout << "Введите ваше имя: ";
	std::cin >> account.FirstName;
	std::cout << "Введите баланс: ";
	std::cin >> account.balance;
	std::cout << "Введите новый баланс: ";
	std::cin >> account.NewBalance;
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	bank acc;
	BankAccInfo(acc);
	std::cout << "Ваш счёт:" << acc.FirstName << ", " << acc.AccNum << ", " << acc.NewBalance;
}