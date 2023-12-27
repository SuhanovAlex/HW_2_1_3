#include <iostream>

struct address
{
  std::string city;
  std::string street;
  int building;
  int apartment;
  int index;
};

// функция для вывода структуры на консоль
void printStructureAddress (address addr) {
  std::cout << "Город: " << addr.city << std::endl;
  std::cout << "Улица: " << addr.street << std::endl;
  std::cout << "Номер дома: " << addr.building << std::endl;
  std::cout << "Номер квартиры: " << addr.apartment << std::endl;
  std::cout << "Индекс: " << addr.index << std::endl;
}

int main() {
  address address1 = {"Москва","Арбат",12,8,123456};
  address address2 = {"Ижевск","Пушкина",59,143,953769};
  printStructureAddress (address1);
  std::cout << std::endl;
  printStructureAddress (address2);
  return 0;
}