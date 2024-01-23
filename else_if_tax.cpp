#include<iostream>
using namespace std;

int main(){
    int amt, tax;

    cout << "Enter your monthly amount: ";
    cin >> amt;

    if (amt <= 100) {
        cout << "You don't need to pay any tax.\n";
    }
    else if (amt < 500) {
        tax = amt * 10 / 100;
        cout << "You pay 10% tax = " << tax;
        cout << "\nYour monthly income: " << amt - tax;
    }
    else if (amt >= 500 && amt < 1000) {
        tax = amt * 18 / 100;
        cout << "You pay 18% tax = " << tax;
        cout << "\nYour monthly income: " << amt - tax;
    }
    else if (amt >= 1000 && amt < 5000) {
        tax = amt * 30 / 100;
        cout << "You pay 30% tax = " << tax;
        cout << "\nYour monthly income: " << amt - tax;
    }
    else {
        tax = amt * 40 / 100;
        cout << "You pay 40% tax = " << tax;
        cout << "\nYour monthly income: " << amt - tax;
    }

    return 0;
}
