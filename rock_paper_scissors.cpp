#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    srand (time(NULL));
  
    int computer = rand() % 3 + 1;

    int user = 0;
  // Live long and prosper
    cout << "====================\n";
    cout << "rock paper scissors!\n";
    cout << "====================\n";

    cout << "1) ✊\n";
    cout << "2) ✋\n";
    cout << "3) ✌️\n";

    cout << "shoot! ";
    cin >> user;

    if (user == 1 && computer == 1) {
        cout << "Computer chose rock!\n";
        cout << "It's a tie!\n";
    } else if (user == 1 && computer == 2) {
        cout << "Computer chose paper!\n";
        cout << "You lost!\n";
    } else if (user == 1 && computer == 3) {
        cout << "Computer chose scissors!\n";
        cout << "You won!\n";
    } else if (user == 2 && computer == 1) {
        cout << "Computer chose rock!\n";
        cout << "You won!\n";
    } else if (user == 2 && computer == 2) {
        cout << "Computer chose paper!\n";
        cout << "It's a tie!\n";
    } else if (user == 2 && computer == 3) {
        cout << "Computer chose scissors!\n";
        cout << "You lost!\n";
    } else if (user == 3 && computer == 1) {
        cout << "Computer chose rock!\n";
        cout << "You lost!\n";
    } else if (user == 3 && computer == 2) {
        cout << "Computer chose paper!\n";
        cout << "You won!\n";
    } else if (user == 3 && computer == 3) {
        cout << "Computer chose scissors!\n";
        cout << "It's a tie!\n";
    } else {
        cout << "Invalid input!\n";
    }
}
