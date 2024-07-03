#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{

    cout << "*******Welcome to GuessTheNumber game********"
         << endl;
    cout << "Guess the Number between 1 and 100 to win this game "<< endl;
srand(time(0));
int won=0;
    while (true) {
      
        int random = 1 + (rand() % 100);
        int guess;
        while(!won){
        cout << "\nEnter the number: ";
        cin >> guess;
        
    if (guess == random) {
    cout << "Congrats! You won, "<< guess << " is the Correct number" << endl;
    cout << "\t\t\t Thanks for playing...."<< endl;
    won=1;
  break;}
    else {
           cout << "Wrong " << endl;
                    if (guess > random) {
                     cout << "The Correct number is smaller than the number" << endl;}
                    else {
                        cout << "The Correct number is greater than the number "
                             << endl;
                    }}}}
                   
    return 0;
}