#ifndef DMA_H
#define DMA_H

#include "abc.h"
#include <iostream>

class baseDMA : public ABC
{
private:
    char *label;
    int rating;

public:
    baseDMA(const char *l = "null", int r = 0);
    baseDMA(const baseDMA &rs);
    virtual ~baseDMA();

    baseDMA &operator=(const baseDMA &rs);

    virtual void View() const;
};

class lacksDMA : public baseDMA
{
private:
    char color[40];

public:
    lacksDMA(const char *c = "blank",
             const char *l = "null",
             int r = 0);

    void View() const override;
};

class hasDMA : public baseDMA
{
private:
    char *style;

public:
    hasDMA(const char *s = "none",
           const char *l = "null",
           int r = 0);

    hasDMA(const hasDMA &hs);
    ~hasDMA();

    hasDMA &operator=(const hasDMA &hs);

    void View() const override;
};

#endif