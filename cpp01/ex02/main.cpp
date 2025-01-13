#include <iostream>
#include <string>

int main()
{
    //Create the string
    std::string str = "HI THIS IS BRAIN";

    //Create a pointer and a reference to the string
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    //Print the memory adress of the string
    std::cout << "Memory address of the string: " << &str << std::endl;

    //Print the memory address held by the pointer
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;

    //Print the memory address held by stringREF
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
    std::cout << "This should be the same as the address of the string so the 1st one." << std::endl;

    //Print the values
    std::cout << "Now let's see the values:" << std::endl;
    //value of the string
    std::cout << "Value of the string: " << str << std::endl;
    //value pointed by the pointer
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    //value pointed by the stringREF
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}