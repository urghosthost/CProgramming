#include <iostream>
#include <cmath>
#include <string>


namespace first {
    void print() {
        std::cout << "first" << std::endl;
    }
}

namespace second {
    void print() {
        std::cout << "second" <<std::endl;
    }
}

int main() {
    //This is an error
    //print();

    first::print();

    second::print();

    int salary = 75500;
    int taxes = (salary > 75000) ? -(salary - ((salary*0.8)/1.1)) : -(salary - ((salary*1.7)/2));
    std::cout << taxes << std::endl;
    int netincome = salary + taxes;
    std::cout << "Total net/take home income: $"<< netincome << std::endl;
    
    std::string message = "Programming is fun";
    std::cout << message << std::endl;
    return 0;
}