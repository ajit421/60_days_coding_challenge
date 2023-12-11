#include<iostream>
using namespace std;

int main(){
    int math, phy, che, eng, hin;
    float marks;

    cout << "Enter marks for math: ";
    cin >> math;
    cout << "Enter marks for physics: ";
    cin >> phy;
    cout << "Enter marks for chemistry: ";
    cin >> che;
    cout << "Enter marks for english: ";
    cin >> eng;
    cout << "Enter marks for hindi: ";
    cin >> hin;

    marks = math + phy + che + eng + hin;

    cout << "Your total marks: " << marks << endl;
    cout << "Percentage: " << (marks * 100) / 500 << "%" << endl;

    if (marks > 450) {
        cout << "Grade: A+" << endl;
    } else if (marks > 350) {
        cout << "Grade: A" << endl;
    } else if (marks > 250) {
        cout << "Grade: B" << endl;
    } else {
        cout << "You have failed" << endl;
    }

    return 0;
}
