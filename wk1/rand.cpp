// Elise Soto Coding 1 Spring 2026
// Random Numbers and Switch Statements and While Loops

// compile with the Developer Command Prompt
    // cd C:/
    // C:\Users\skzki\GitHub\Coding1B_SPT6_CPP\Coding1B_SPT6_CPP\wk1
    // 'cl /EHsc rand.cpp' is what you type to compile
    // 'rand' or 'rand.exe' to run the program
// Fill out the rest of the code so it displays "Random Numbers" to the console
// Then run it

#include <iostream>
#include <cstdlib> // for srand and rand
#include <ctime> // for time

using namespace std;

int main() { 
    // only once at the beginning of the program
    // seed the random number generator
    srand(time(0));

    cout << "Let's run random numbers! \n";

    cout << "This is our first random number: " <<rand() << ".\n";

    int counter = 0;
    while(counter++ < 10 ) {
        int number = rand();
        int min = 1;
        int max = 10;
        int range = max - min;        // 50 
        int ClampedNumber = (number % range) + min;
        
        cout << ClampedNumber << endl;
    }

    // set variables
        // the random  number
        int randomRange = (rand() % 11) + 10; // this gives us a number between 10 and 20 (inclusive)
        int number = (rand () % randomRange) + 1;
            // between = exclusive = 1(2, 3, 4...9)10
            // inclusive (1(2, 3...9)10)
        
            // the guess/input
        int guess = -1;

        int totalGuesses = 0;
    // start loop
    while (true) {
    //ask for player guess/input between 1 and 10 (inclusive)
    cout << "I'm thinking of a number between 1 and " << randomRange << ", wanna guess what it is?\n>>";
    // get the player guess/input
    cin >> guess;
    // evaluate the player's guess for
        // too high
        if(guess > number) {
            cout << "Too high!\n";
        }
        // too low
        else if(guess < number) {
            cout << "Too low!\n";
        }
        // correct!
        if (guess == number) {
            cout << "You got it!\n";
            cout << "It only took you " << totalGuesses << " guesses!\n";
            // break out of loop
            break;
        }
    // if incorrect guess, keep looping
    }




   
    return 0;

}