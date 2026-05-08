#include <iostream>
#include <cstring>
#include <cctype>

class String
{
private:
    char *str;
    int len;

public:
    // Constructor
    String(const char *s = "")
    {
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }

    // Destructor
    ~String()
    {
        delete[] str;
    }

    // Overload + operator to join two strings
    String operator+(const String &other)
    {
        char *new_str = new char[len + other.len + 1];
        strcpy(new_str, str);
        strcat(new_str, other.str);
        String temp(new_str);
        delete[] new_str;
        return temp;
    }

    // Convert string to lowercase
    void stringlow()
    {
        for (int i = 0; i < len; i++)
        {
            str[i] = tolower(str[i]);
        }
    }

    // Convert string to uppercase
    void stringup()
    {
        for (int i = 0; i < len; i++)
        {
            str[i] = toupper(str[i]);
        }
    }

    // Count occurrences of a character
    int has(char c) const
    {
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] == c)
            {
                count++;
            }
        }
        return count;
    }

    // Display string
    void display() const
    {
        std::cout << str << std::endl;
    }
};

// Test program
int main()
{
    String s1("Hello");
    String s2(" World!");
    String s3 = s1 + s2; // Use overloaded + operator

    s3.display();

    s3.stringlow();
    s3.display();

    s3.stringup();
    s3.display();

    std::cout << "Number of 'l' in string: " << s3.has('l') << std::endl;

    return 0;
}