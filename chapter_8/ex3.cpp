#include <iostream>
#include <string>
#include <cctype>

void toUpper(std::string &str);

int main()
{
    std::string input;
    std::cout << "Enter a string(q to quit): ";
    while (getline(std::cin, input) && input != "q")
    {
        toUpper(input);
        std::cout << "Uppercase: " << input << std::endl;
        std::cout << "Enter a string(q to quit): ";
    }
    return 0;
}

void toUpper(std::string &str)
{
    for (char &ch : str)
    {
        ch = toupper(ch);
    }
}