#include <iostream>
#include <cstring>

class Cow
{
private:
    char name[20]; // name of the cow
    char *hobby;   // cow's hobby
    double weight; // weight of the cow

public:
    // Default constructor
    Cow()
    {
        name[0] = '\0';  // Initialize name as empty
        hobby = nullptr; // No hobby assigned yet
        weight = 0.0;    // Default weight is 0
    }

    // Constructor with parameters
    Cow(const char *nm, const char *ho, double wt)
    {
        strncpy(name, nm, 19);            // Copy name, limit to 19 characters
        name[19] = '\0';                  // Ensure string is null-terminated
        hobby = new char[strlen(ho) + 1]; // Allocate memory for hobby
        strcpy(hobby, ho);                // Copy hobby string
        weight = wt;
    }

    // Copy constructor
    Cow(const Cow &c)
    {
        strcpy(name, c.name);                  // Copy name
        weight = c.weight;                     // Copy weight
        hobby = new char[strlen(c.hobby) + 1]; // Allocate memory for hobby
        strcpy(hobby, c.hobby);                // Copy hobby string
    }

    // Destructor
    ~Cow()
    {
        delete[] hobby; // Free dynamically allocated memory
    }

    // Assignment operator
    Cow &operator=(const Cow &c)
    {
        if (this == &c)
            return *this; // Handle self-assignment

        strcpy(name, c.name);                  // Copy name
        weight = c.weight;                     // Copy weight
        delete[] hobby;                        // Free existing hobby memory
        hobby = new char[strlen(c.hobby) + 1]; // Allocate new memory
        strcpy(hobby, c.hobby);                // Copy hobby string

        return *this;
    }

    // Show cow data
    void ShowCow() const
    {
        std::cout << "Name: " << name << ", Hobby: " << hobby << ", Weight: " << weight << std::endl;
    }
};

// Short program to test the class
int main()
{
    Cow cow1("Bessie", "Grazing", 150.5);
    Cow cow2;
    cow2 = cow1; // Use the assignment operator

    cow1.ShowCow();
    cow2.ShowCow();

    return 0;
}