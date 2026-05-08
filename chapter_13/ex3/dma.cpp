#include <cstring>
#include "dma.h"

using namespace std;

// ===== baseDMA =====

baseDMA::baseDMA(const char *l, int r)
{
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}

baseDMA::baseDMA(const baseDMA &rs)
{
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
}

baseDMA::~baseDMA()
{
    delete[] label;
}

baseDMA &baseDMA::operator=(const baseDMA &rs)
{
    if (this == &rs)
        return *this;

    delete[] label;
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);

    rating = rs.rating;
    return *this;
}

void baseDMA::View() const
{
    cout << "[baseDMA]\n";
    cout << "Label: " << label << endl;
    cout << "Rating: " << rating << endl;
}

// ===== lacksDMA =====

lacksDMA::lacksDMA(const char *c,
                   const char *l,
                   int r)
    : baseDMA(l, r)
{
    strcpy(color, c);
}

void lacksDMA::View() const
{
    baseDMA::View();
    cout << "Color: " << color << endl;
}

// ===== hasDMA =====

hasDMA::hasDMA(const char *s,
               const char *l,
               int r)
    : baseDMA(l, r)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &hs)
    : baseDMA(hs)
{
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete[] style;
}

hasDMA &hasDMA::operator=(const hasDMA &hs)
{
    if (this == &hs)
        return *this;

    baseDMA::operator=(hs);

    delete[] style;
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);

    return *this;
}

void hasDMA::View() const
{
    baseDMA::View();
    cout << "Style: " << style << endl;
}