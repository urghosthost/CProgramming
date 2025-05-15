#include <iostream>
int main() {
    int count = 1;
    int count2 = 1;
    int& r = count; // reference variable. Should initalize a reference v
    //You cannot change the value of a reference variable

    count++;

    std::cout << "r is "<< r << std::endl;
    std::cout << "count is " << count << std::endl;

    r = 10;

    std::cout << "r is "<< r << std::endl;
    std::cout << "count is " << count << std::endl;

    return 0;
}