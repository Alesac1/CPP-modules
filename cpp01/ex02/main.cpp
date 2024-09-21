#include <iostream>
#include <string>

int main() {
    std::string mystring = "HI THIS IS BRAIN";
    std::string* stringPTR = &mystring;
    std::string& stringREF = mystring;

    std::cout << "mystring address: " << &mystring << std::endl;
    std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Address held by stringREF: " << &stringREF << std::endl;

    std::cout << "Value of mystring: " << mystring << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
    
    return 0;
}