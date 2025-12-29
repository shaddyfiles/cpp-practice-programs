#include <iostream>
#include <iomanip> 
#include <ctime> 
using namespace std; 

int main() {
    char human;
    int tries = 0; 
    srand(time(0)); 

    do {
        cout << "\n*****************************************" << endl;
        cout << "********* ROCK-PAPER-SCISSORS *********" << endl;

        cout << "Enter (r)ock, (p)aper, or (s)cissors: ";
        cin >> human;

    
        if (human == 'r' || human == 'p' || human == 's') {
            int computer = (rand() % 3) + 1; 
            tries++;

           
            cout << "Computer chose: ";
            if (computer == 1)      cout << "ROCK" << endl;
            else if (computer == 2) cout << "PAPER" << endl;
            else                    cout << "SCISSORS" << endl;

            if (((human == 'r') && (computer == 3)) || 
                ((human == 'p') && (computer == 1)) ||
                ((human == 's') && (computer == 2))) 
            {
                cout << ">>>>>>> YOU WON! <<<<<<<" << endl;
                cout << "Winning Move #: " << tries << endl;
                cout << "*****************************************" << endl;
            }
            else if (((human == 'r') && (computer == 2)) || 
                     ((human == 'p') && (computer == 3)) || 
                     ((human == 's') && (computer == 1))) 
            {
                cout << "------- YOU LOSE -------" << endl;
            }
            else if (((human == 'r') && (computer == 1)) || 
                     ((human == 'p') && (computer == 2)) || 
                     ((human == 's') && (computer == 3))) 
            {
                cout << "------- DRAW -------" << endl;
            }
        } 
        else {
            cout << "Invalid input detected." << endl;
        }

    } while ((human == 'r') || (human == 'p') || (human == 's'));

    cout << "\n********* Thanks for playing! Total tries: " << tries << " *********" << endl;

    return 0;
}
