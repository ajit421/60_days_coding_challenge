#include <iostream>
using namespace std;

void showInfo(int age)
{
    cout << age << endl;
}

void showInfo(string name)
{
    cout << name << endl;
}

void showInfo(double salary)
{
    cout << salary << endl;
}

main()
{
    showInfo("Ajit");
    showInfo(18);
    showInfo(83764.44);
}