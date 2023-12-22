#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// Function prototypes
void displayIntro();
void choosePath();
void fightEnemy();

int main()
{
    srand(time(NULL)); // seed random number generator
    
    displayIntro();
    choosePath();
    fightEnemy();
    
    return 0;
}

// Introduction
void displayIntro()
{
    cout << "You find yourself in a dark and mysterious forest.\n";
    cout << "Your only option is to find a way out.\n";
    cout << "Do you go left or right?\n";
}

// Choose a path
void choosePath()
{
    string choice;
    cout << "Enter left or right: ";
    cin >> choice;
    
    if (choice == "left")
    {
        cout << "You find yourself in a clearing.\n";
        cout << "You can see a castle in the distance.\n";
        cout << "Do you approach the castle or turn back?\n";
    }
    else if (choice == "right")
    {
        cout << "You find yourself in a cave.\n";
        cout << "You can hear strange noises coming from the darkness.\n";
        cout << "Do you explore the cave or turn back?\n";
    }
    else
    {
        cout << "You stumble around in the darkness until you find a path.\n";
        cout << "Do you go left or right?\n";
    }
}

// Combat system
void fightEnemy()
{
    int enemyHealth = 10;
    int playerHealth = 10;
    string choice;
    
    cout << "You encounter an enemy!\n";
    cout << "Do you fight or run?\n";
    cin >> choice;
    
    if (choice == "fight")
    {
        while (enemyHealth > 0 && playerHealth > 0)
        {
            int attack = rand() % 3; // 0, 1, or 2
            int damage = rand() % 4; // 0, 1, 2, or 3
            
            if (attack == 0)
            {
                cout << "You attack the enemy and deal " << damage << " damage!\n";
                enemyHealth -= damage;
            }
            else
            {
                cout << "The enemy attacks you and deals " << damage << " damage!\n";
                playerHealth -= damage;
            }
        }
        
        if (enemyHealth <= 0)
        {
            cout << "You have defeated the enemy!\n";
            cout << "You find a key and use it to escape the forest.\n";
            cout << "You have won the game!\n";
        }
        else
        {
            cout << "You have been defeated!\n";
            cout << "Game Over.\n";
        }
    }
    else
    {
        cout << "You run away from the enemy.\n";
        cout << "You find a hidden path and escape the forest.\n";
        cout << "You have won the game!\n";
    }
}