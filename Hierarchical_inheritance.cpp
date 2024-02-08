#include <iostream>
using namespace std;

class base
{
protected:
    int a, b;

public:
    void input()
    {
        cout << "Enter value for Base class ";
        cin >> a >> b;
    }
};

class derive1 : public base
{
private:
    int n1;

public:
    void input1()
    {
        cout << "Enter value for Base class ";
        cin >> n1;
    }
    void show1()
    {
        cout << "n1=" << n1 << endl
             << "SUM= " << a + b << endl;
    }
};

class derive2 : public base
{
private:
    int n2;

public:
    void input2()
    {
        cout << "Enter value for Base2 class";
        cin >> n2;
    }
    void show2()
    {
        cout << "n2=" << n2 << endl;
    }
};

int main()
{
    derive1 obj1;
    derive2 obj2;

    obj1.input();
    obj1.input1();
    obj1.show1();

    obj2.input();
    obj2.input2();
    obj2.show2();
}