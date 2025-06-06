#include <iostream>
#include <Windows.h>

struct adress
{
	std::string city;
	std::string street;
	int houseNum;
	int apartmentNum;
	int index;
};

void printAdress(adress& adr)
{
	std::cout << "Город: " << adr.city << std::endl;
	std::cout << "Улица: " << adr.street << std::endl;
	std::cout<<"Номер дома: " << adr.houseNum << std::endl;
	std::cout<< "Номер квартиры: " << adr.apartmentNum << std::endl;
	std::cout << "Индекс: " << adr.index << std::endl;
	std::cout << std::endl;
}

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	adress adr1 = { "Москва", "Арбат", 12, 54, 8 };
	adress adr2 = { "Ижевск", "Пушкина", 59, 143, 953769 };

	printAdress(adr1);
	printAdress(adr2);
}