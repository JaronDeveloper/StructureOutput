#include <iostream>

struct addressStorage
{
	std::string city;
	std::string Street;
	int HouseNumber,ApartmentNumber,Index; 

};

void disaplyAddressStorage(addressStorage address) {
	std::cout << "Город: " << address.city << std::endl;
	std::cout << "Улица: " << address.Street << std::endl;
	std::cout << "Номер дома: " << address.HouseNumber << std::endl;
	std::cout << "Номер квартиры: " << address.ApartmentNumber << std::endl;
	std::cout << "Индекс: " << address.Index << std::endl;
	std::cout << std::endl;
}

int main() {
	setlocale(LC_ALL, "Russian");

	disaplyAddressStorage(addressStorage{"Москва","Арбат",12,8,123456});
	disaplyAddressStorage(addressStorage{ "Ижевск","Пушкина",59,143,953769 });

	return 0;
}