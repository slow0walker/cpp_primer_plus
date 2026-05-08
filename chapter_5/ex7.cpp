#include <iostream>
#include <string>
struct Car
{
    std::string make;
    int year;
};
int main()
{
    int num_cars;
    std::cout << "How many cars do you wish to catalog? ";
    std::cin >> num_cars;
    Car *cars = new Car[num_cars];
    for (int i = 0; i < num_cars; i++)
    {
        std::cout << "Car #" << i + 1 << ": " << std::endl;
        std::cout << "Please enter the make: ";
        std::cin >> cars[i].make;
        std::cout << "Please enter the year: ";
        std::cin >> cars[i].year;
    }
    std::cout << "Here is your collection: " << std::endl;
    for (int i = 0; i < num_cars; i++)
    {
        std::cout << cars[i].year << " " << cars[i].make << std::endl;
    }
    delete[] cars;
    return 0;
}