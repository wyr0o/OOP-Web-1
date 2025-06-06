#include <iostream>
#include <Windows.h>

enum months
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};
int main()
{
	SetConsoleOutputCP(1251);

	while (true) {

		int num = 0;
		std::cout << "Введите номер месяца: ";
		std::cin >> num;

		if (num == 0)
		{
			break;
		}

		switch (num)
		{
		case 1:
			std::cout << "Январь"<< std::endl;
			break;
		case 2:
			std::cout << "Февраль" << std::endl;
			break;
		case 3:
			std::cout << "Март" << std::endl;
			break;
		case 4:
			std::cout << "Апрель" << std::endl;
			break;
		case 5:
			std::cout << "Май" << std::endl;
			break;
		case 6:
			std::cout << "Июнь" << std::endl;
			break;
		case 7:
			std::cout << "Июль" << std::endl;
			break;
		case 8:
			std::cout << "Август" << std::endl;
			break;
		case 9:
			std::cout << "Сентябрь" << std::endl;
			break;
		case 10:
			std::cout << "Октябрь" << std::endl;
			break;
		case 11:
			std::cout << "Ноябрь" << std::endl;
			break;
		case 12:
			std::cout << "Декабрь" << std::endl;
			break;
		default:
			std::cout << "Введите число от 1 до 12.";
		}
	}
}