#ifndef WINEC_H_
#define WINEC_H_

#include <iostream>
#include <string>
#include <valarray>

typedef std::valarray<int> ArrayInt;
typedef std::pair<ArrayInt, ArrayInt> PairArray;

class Wine
{
private:
    std::string label;
    int years;
    PairArray data;

public:
    Wine();
    Wine(const char *l, int y, const int yr[], const int bot[]);
    Wine(const char *l, int y);

    void GetBottles();
    std::string &Label();
    int sum();
    void Show();
};

#endif