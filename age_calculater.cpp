#include <iostream>
using namespace std;

int main()
{
  int day1, year1, day2, year2, month1, month2;
  
    cout << "AGE CALCULATOR" << endl;
    cout << "............................." << endl;
    cout << " " << endl;
    cout << "Current month (1-12)(mm): " << endl;
    cin >> month1;
    cout << "Current day (1-31)(dd): " << endl;
    cin >> day1;
    cout << "Current year (yy):" << endl;
    cin >> year1;
    cout << " " << endl;
    cout << "The current date is: " << month1 << "/" << day1 << "/" << year1 << endl;
    cout << " " << endl;
    cout << "_____________________________" << endl;
    cout << " " << endl;
    cout << "Birth month (1-12)(mm): " << endl;
    cin >> month2;
    cout << "Day of your Birth (1-31)(dd): " << endl;
    cin >> day2;
    cout << "Birth year (yy):" << endl;
    cin >> year2;
    cout << " " << endl;
    cout << "Your Birthdate is: " << month2 << "/" << day2 << "/" << year2 << endl;
    cout << " " << endl;
    cout << "_____________________________" << endl;
    cout << " " << endl;
    
    if(month1 > month2)
    {
      cout << "Your age is: " << year1 - year2;
    }
    else if(month1 < month2)
    {
      cout << "Your age is: " << year1 - year2 - 1;
    }
    else if((month1 == month2) && (day1 < day2))
    {
      cout << "Your age is: " << year1 - year2 -1;
    }
    else if((month1 == month2) && (day1 > day2))
    {
      cout << "Your age is: " << year1 - year2;
    }
    else if((month1 == month2) && (day1 == day2))
    {
      cout << "Your age is: " << year1 - year2;
    }
    
    cout << " " << endl;
}