#include <iostream>
#include <iomanip>

int main() {
    double number = 12.34567;

    std::cout << std::setprecision(5) << number << std::endl;;

    std::cout << std::fixed << 234564353.123 << std::endl;
   

    std::cout << std::setw(20) << std::right << std::fixed << std::setprecision(2) << 234564353.123 << std::endl;

    std::cout << std::setprecision(3) << 123545 << std::endl;

    return 0;
}