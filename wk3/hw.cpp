// Elise Soto Coding 1 Spring 2026
// Trying to do "things"
// Maybe Rock Paper Scissors?
// create a .cpp program that will allow the user to add a game, edit, remove, and show all (sorted), quit

#include <iostream>
#include <string>
#include <cstdlib> // for rand () and srand()
#include <ctime>    // for time()

using namespace std;

int main() {
    cout << "Let's do some stuff today!\n";

    string playerName;
    cout << "What's your name?\n";
    cin >> playerName; // get user input
    cout << "Hello " <<playerName << "!\n";

    string input;

    do {
     cout << "Wanna play rock, paper, scissors?\n";

     getline (cin, input);

        if(input == "Yes"){
          cout << "OK!\n";
        }

        if(input == "No"){
            cout << "Ok, see ya!\n";
            break;
        }

    }

} // end of program