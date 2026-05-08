#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Report
{
private:
    string str;

public:
    Report(const string &s) : str(s)
    {
        cout << "Object created!" << endl;
    }
    ~Report()
    {
        cout << "Object deleted!" << endl;
    }
    void comment() const
    {
        cout << str << endl;
    }
};
int main()
{
    {
        unique_ptr<Report> ps(new Report("using unique_ptr"));
        ps->comment();
    }
    {
        shared_ptr<Report> ps(new Report("using shared_ptr"));
        ps->comment();
    }
    return 0;
}