#include <iostream>

int main() {
  double pesos; // 0.00028
  double reais; // 0.18
  double soles; // 0.3
  double dollars;
  std::cout << "Enter number of Columbian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  dollars = (0.00028 * pesos) + (0.18 * reais) + (0.3 * soles);
  std::cout << "US Dollars = $ " << dollars;
}
