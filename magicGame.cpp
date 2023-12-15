#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(time(0));

    int player1Health = 100;
int player2Health = 100;
int strongDMG = rand() % 21 + 6;
int weakDMG = rand() % 5 + 1;

cout << "Magic Game" << endl;
cout << endl;

string player1Name, player2Name;
cout << "___________" << endl;
cout << "Player 1's Name: " << endl;
cin >> player1Name;
cout << "Player 2's Name: " << endl;
cin >> player2Name;
cout << "___________" << endl;
cout << endl;
cout << endl;
cout << endl;

while (player1Health > 0 && player2Health > 0) {
    int player1Choice, player2Choice;

    string safeSpaces = "     ";
    int repeatSpaces = 500;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << player1Name << ", it's your turn:" << endl;
    cout << "___________" << endl;
    cout << "1. WATER" << endl;
    cout << "2. FIRE" << endl;
    cout << "3. EARTH" << endl;
    cout << "___________" << endl;
    cout << "Enter your choice: ";
    cin >> player1Choice;

    if (player1Choice < 0 || player1Choice > 3) {
        cout << "Invalid Choice of Magic." << endl;
        continue;
    }

    for (int i = 0; i < repeatSpaces; i++) {
        cout << safeSpaces << endl;
    }
    cout << player2Name << ", it's your turn!" << endl;
    cout << "___________" << endl;
    cout << "1. WATER" << endl;
    cout << "2. FIRE" << endl;
    cout << "3. EARTH" << endl;
    cout << "___________" << endl;
    cout << "Enter your choice: ";
    cin >> player2Choice;
    for (int i = 0; i < repeatSpaces; i++) {
        cout << safeSpaces << endl;
    }

    if (player2Choice < 1 || player2Choice > 3) {
        cout << "Invalid Choice of Magic." << endl;
        continue;
    }

    cout << "___________" << endl;
    cout << player1Name << " used ";
    switch (player1Choice) {
        case 1: cout << "WATER"; break;
        case 2: cout << "FIRE"; break;
        case 3: cout << "EARTH"; break;
    }
    cout << " magic!" << endl;

    cout << player2Name << " used ";
    switch (player2Choice) {
        case 1: cout << "WATER"; break;
        case 2: cout << "FIRE"; break;
        case 3: cout << "EARTH"; break;
    }
    cout << " magic!" << endl;

    if (player1Choice == player2Choice) {
        cout << "It's a tie!" << endl;
        player1Health -= 5;
        player2Health -= 5;
    } else if ((player1Choice == 1 && player2Choice == 2) ||
               (player1Choice == 2 && player2Choice == 3) ||
               (player1Choice == 3 && player2Choice == 1)) {
        cout << player1Name << " wins this round!" << endl;
        player1Health -= weakDMG;
        player2Health -= strongDMG;
    } else {
        cout << player2Name << " wins this round!" << endl;
        player1Health -= strongDMG;
        player2Health -= weakDMG;
    }
    cout << "___________" << endl;

    cout << player1Name << " Health Points: " << player1Health << endl;
    cout << player2Name << " Health Points: " << player2Health << endl;
    cout << "___________" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    }

    cout << "___________" << endl;
    if (player1Health <= 0 && player2Health <= 0) {
        cout << "GAME OVER! NO ONE WINS!" << endl;
    } else if (player1Health <= 0) {
        cout << "PLAYER 2 WINS THE GAME!" << endl;
    } else {
        cout << "PLAYER 1 WINS THE GAME!" << endl;
    }
    cout << "___________" << endl;

  return 0;
}