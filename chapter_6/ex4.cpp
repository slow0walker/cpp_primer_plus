#include <iostream>
#include <string>
struct bop
{
    std::string fullname;
    std::string title;
    std::string bopname;
    int preference;
};
int main()
{
    bop arr[3] = {
        {"John Doe", "Manager", "JD", 0},
        {"Jane Smith", "Developer", "JS", 1},
        {"Alice Johnson", "Designer", "AJ", 2}};
    char ch;
    std::cout << "a. display by name     b. display by title\n";
    std::cout << "c. display by bopname d. display by preference\n";
    std::cout << "q. quit\n";

    while (std::cin >> ch && ch != 'q')
    {
        for (auto &x : arr)
        {
            switch (ch)
            {
            case 'a':
                std::cout << x.fullname << std::endl;
                break;
            case 'b':
                std::cout << x.title << std::endl;
                break;
            case 'c':
                std::cout << x.bopname << std::endl;
                break;
            case 'd':
                if (x.preference == 0)
                    std::cout << x.fullname << std::endl;
                else if (x.preference == 1)
                    std::cout << x.title << std::endl;
                else if (x.preference == 2)
                    std::cout << x.bopname << std::endl;
                break;
            default:
                std::cout << "Invalid choice, try again\n";
            }
        }
    }
    return 0;
}