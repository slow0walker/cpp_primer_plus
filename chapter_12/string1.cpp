#include <iostream>
#include <cstring>
#include "string1.h"

int String::num_strings = 0;

// constructors and other methods
String::String(const char *s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String()
{
    len = 0;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::~String()
{
    --num_strings;
    delete[] str;
}

String::String(const String &other)
{
    num_strings++;
    len = other.len;
    str = new char[len + 1];
    std::strcpy(str, other.str);
}

int String::HowMany()
{
    return num_strings;
}

// overloaded operator methods
String &String::operator=(const String &other)
{
    if (this == &other)
        return *this;
    delete[] this->str;
    this->len = other.len;
    this->str = new char[this->len + 1];
    std::strcpy(this->str, other.str);
    return *this;
}

String &String::operator=(const char *s)
{
    delete[] this->str;
    this->len = std::strlen(s);
    this->str = new char[this->len + 1];
    std::strcpy(this->str, s);
    return *this;
}

char &String::operator[](int i)
{
    return str[i];
}

const char &String::operator[](int i) const { return str[i]; }

// overloaded  operator friends

bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream &operator<<(ostream &os, const String &st)
{
    os << st.str;
    return os;
}

istream &operator>>(istream &is, String &st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}