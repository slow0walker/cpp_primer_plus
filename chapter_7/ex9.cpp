#include <iostream>
using namespace std;

const int SLEN = 30;

struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n)
{
    int i = 0;
    for (; i < n; i++)
    {
        cout << "Name: ";
        cin.getline(pa[i].fullname, SLEN);
        if (pa[i].fullname[0] == '\0')
            break;

        cout << "Hobby: ";
        cin.getline(pa[i].hobby, SLEN);

        cout << "Level: ";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    return i;
}

void display1(student st)
{
    cout << st.fullname << " " << st.hobby << " " << st.ooplevel << endl;
}

void display2(const student *ps)
{
    cout << ps->fullname << " " << ps->hobby << " " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
        cout << pa[i].fullname << " "
             << pa[i].hobby << " "
             << pa[i].ooplevel << endl;
}

int main()
{
    int class_size;
    cin >> class_size;
    cin.get();

    student *ptr = new student[class_size];

    int entered = getinfo(ptr, class_size);

    for (int i = 0; i < entered; i++)
    {
        display1(ptr[i]);
        display2(&ptr[i]);
    }

    display3(ptr, entered);

    delete[] ptr;
}