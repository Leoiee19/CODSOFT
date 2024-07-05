#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    cout << "*******Welcome to GuessTheNumber game********" << endl;
     int won = 0;
    srand(time(0));
    int random = 1 + (rand() % 100);
    int guess;
    cout << "Guess the number to win" << endl;
    do {
        cout << "\nEnter the number: ";
        cin >> guess;
        if (guess == random) {
            cout << "ggs,You won " << endl;
            won = 1;
        } else {
            cout << "Wrong " << endl;
            if (guess > random) {
                cout << "The number is smaller than the guess" << endl;
            } else {
                cout << "The number is greater than the guess" << endl;
            }
        }
    } while (!won);

    return 0;
}
