#include <iostream>

struct addressStorage
{
	std::string city;
	std::string Street;
	int HouseNumber,ApartmentNumber,Index; 

};

void disaplyAddressStorage(addressStorage address) {
	std::cout << "�����: " << address.city << std::endl;
	std::cout << "�����: " << address.Street << std::endl;
	std::cout << "����� ����: " << address.HouseNumber << std::endl;
	std::cout << "����� ��������: " << address.ApartmentNumber << std::endl;
	std::cout << "������: " << address.Index << std::endl;
	std::cout << std::endl;
}

int main() {
	setlocale(LC_ALL, "Russian");

	disaplyAddressStorage(addressStorage{"������","�����",12,8,123456});
	disaplyAddressStorage(addressStorage{ "������","�������",59,143,953769 });

	return 0;
}