#ifndef CD_H
#define CD_H

class Cd
{
private:
    char *performers;
    char *label;
    int selections;
    double playtime;

public:
    Cd(const char *s1 = "none", const char *s2 = "none",
       int n = 0, double x = 0.0);

    Cd(const Cd &d);
    virtual ~Cd();

    virtual void Report() const;

    Cd &operator=(const Cd &d);
};

#endif