#include <iostream>

//Initializing x as global variable
int x = 10;

//Initializing foo and staticVariable function
void foo();
int staticVariable(int n);

int main() {
    std::cout << x<< " is printed because x is a global variable." << std::endl; //prints x, a global variable

    int x = 100;

    std::cout << x << " is printed because x was redefined as a local variable in the main function." << std::endl;

    for(int x = 0; x < 10; x++) { //header of for loop which redefines x as a local variable within the for loop, and then allows for intrementization of the value to 9 
        std::cout << x << " " << std:: endl; // the incremental local value within the loop is printed
    }

    //Using foo function
    foo();

    //Static Variables
    std::cout << "Test static function:\n";

    for(int i = 0; i < 10; i++){
        std::cout << staticVariable(i) << std::endl;
    }
    

    return 0;
}


//Reinitializing foo function
void foo() {
    std::cout << x << ' ' << std::endl;
    
}

//Reinitializing staticVariable function
int staticVariable(int n) {
    static int result = 1;
    result += n;
    return result;
}


