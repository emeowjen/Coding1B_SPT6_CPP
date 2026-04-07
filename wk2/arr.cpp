// Elise Soto Coding 1 Spring 2026
// Arrays, For Loops, Enums, and Switch Statements

// compile with the Developer Command Prompt
    // cd C:/
    // C:\Users\skzki\GitHub\Coding1B_SPT6_CPP\Coding1B_SPT6_CPP\wk1
    // 'cl /EHsc rand.cpp' is what you type to compile
    // 'rand' or 'rand.exe' to run the program
// Fill out the rest of the code so it displays "Rock Paper Scissors" to the console
// Then run it

#include <iostream>
#include <string>
#include <cstdlib> // for rand () and srand()
#include <ctime>    // for time()
using namespace std;

int main () {
    srand(time(0));
    cout << "Let's make some arrays!\n";
    
    // arrays cannot change their size
    // arrays don't know where the "last index" is
    // arrays are a list of similar variable types
    // arrays are ordered 
    
    // computers LOVE arrays

    int scores [5]; // this is creating an integer array with a size of 5

    scores [0] = 6767;
    scores [1] = 13;
    scores [2] = 9001;
    scores [3] = 0;
    scores [4] = 80085;
    // scores [5] = 99999; // can't go past the size of the arrays

    cout << "The first score is " << scores [0] << ".\n";

    cout << "Here are all the scores:\n";

    int index = 0;
    while (index < 5) {
        cout << scores[index] << ".\n";
        index++;
    }
    
    cout << "Using a 'for loop':\n";
    // for loop gas tge "iterator" built in.
    // for (setup; test; action)
    for(int i = 0; i < 5; i++) {
        cout << scores[i] << "\n";
    }

    // let's build a string array for names
    string names [10];
    string input;
    index = 0; // reset index 

    // we want the user to add names to the array
    while (index < 10) {
        // we want the user to add names to the array
        cout << "add name or type 'done': ";
        cin >> input;

        //until they type done
        if (input == "done") {
            cout << "Done adding names.\n";
            break; // stop looping
        }
        
        // add the name to the array
        // then add 1 to index with increment operator
        names [index++] = input;
    }
        
    
    // until they type 'done' 
    // or until the list is full
    // show the list of names
    for(int i = 0; i < 10; i++) {
        if(names[i] == ""){
            continue; //start the loop over early
        }

        cout << names[i] << "\n";
    }

    // create a new string array 
    // initializing array with values
    string newNames[] = {"Mario", "Luigi", "Rosalina", "Peach", 
                        "Bowser", "Yoshi", "Bowser Jr.", "Fox"
                        };
        cout << "Here are the new names:\n";
        for(int i = 0; i < 8; i++) {
            cout << i + 1 << "." << newNames[i] << "\n";
        }

        // pick a random name from our newNames array
        int randIndex = rand() % 8;
        string character = newNames[randIndex];

        cout << character << ", let's talk about them!\n";

        // an enumerator is a custom variable type
        // with only the values that we specify
        // they correspond to numbers, starting with 0 by default

        enum favor {LOVE, LIKE, DISLIKE, LOATHE};
        
        switch(rand() % 4) {
            case LOVE:
                cout << "I love " << character << ".\n";
                break;
            case LIKE:
                cout << "I like " << character << ".\n";
                break;
            case DISLIKE:
                cout << "I dislike " << character << ".\n";
             break;
            case LOATHE:
                cout << "I loathe " << character << ".\n";
                break;
        }

    return 0;
;}
