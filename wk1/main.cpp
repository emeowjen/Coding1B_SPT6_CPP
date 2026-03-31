// Elise Soto Coding 1 Spring 2026
// Variables and Logic

// compile with the Developer Command Prompt
// 'cl /EHsc main.cpp' is what you type to compile
// 'main' or 'main.exe' to run the program

#include <iostream>
using namespace std;

int main() {
    cout << "Let's learn about variables and logic! \n";

    // declaring and defining variables
    int playerAge = -1;
    string playerName = "Divine One"; // select an press quotation for instant punctuation
    float happinessPercentage = .78f; // 'f' is for float 
    bool keepPlaying = true;

    // just like a branch in unreal engine
    if(playerAge == -1) {
        cout << "How old are you?\n";
        cin >> playerAge;
        if (playerAge <= 12) {
            cout << "I'm sorry, this game is for grownups!\n";
            return 0; //quit game early
        }
        else {
            cout << "Wow, " <<playerAge << " years old, you're basically ashes and bones at that point...\n";
        }
    } // end of if (playerAge)

    if (playerName == "Divine One"){
        cout << "Is your name " <<playerName << "?\n";
        string input; // create a new string variable to keep track of user inpit
        cin >> input; // get user input

        // the OR operator '||' means that if any test evaluates to be true, the if statement is true
        if(input == "yes" || input == "Yes" || input == "YES" || input == "yup" || input == "Yup" || input == "YUP"){
            cout << "Well that's convenient!\n";
        }
        else {
            cout << "What is your name?\n";
            cin >> playerName;
        }

        cout << "Hello " <<playerName << ".\n";

    } // end of if (playerName)

    bool debug = false; //turn this on to debug

    // the AND operator '&&' requires that all tests are true
    if(playerAge == 21 && playerName == "Elise") {
        debug = true;
        cout << "Creator! Debug mode is ON.\n";

    } // end of if (age && name)

    if(debug == true) {
        cout << "\n\tDEBUG MODE\n\n";
        cout << "playerAge = " << playerAge << ".\n";
        cout << "playerName = " << playerName << ".\n";
        cout << "happinessPercentage = " << happinessPercentage << ".\n";
        cout << "keepPlaying = " <<keepPlaying << ".\n";
    }



    return 0;
    
} //end of main()