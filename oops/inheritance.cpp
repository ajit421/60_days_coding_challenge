#include <iostream>
using namespace std;

class father
{
protected:
    string surname = "singh";
};

class sun1 : public father
{
public:
    void show1()
    {
        cout << "Suraj"
             << " " << surname << endl;
    }
};

class sun2 : public father
{
public:
    void show2()
    {
        cout << "Ajit"
             << " " << surname << endl;
    }
};

int main()
{
    sun1 s1;
    s1.show1();

    sun2 s2;
    s2.show2();

    return 0;
}
