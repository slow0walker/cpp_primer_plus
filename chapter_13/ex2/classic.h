#ifndef CLASSIC_H
#define CLASSIC_H

#include "cd.h"

class Classic : public Cd
{
private:
    char *primary;

public:
    Classic(const char *p = "none",
            const char *s1 = "none",
            const char *s2 = "none",
            int n = 0,
            double x = 0.0);

    Classic(const Classic &c);
    virtual ~Classic();

    void Report() const override;

    Classic &operator=(const Classic &c);
};

#endif