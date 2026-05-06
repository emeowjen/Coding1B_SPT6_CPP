// Elise Soto Coding 1 Spring 2026
// due may 14th
// look to blackboard for requirements

// ask for user's name cuz that's cool
    // get name input
// greet
// call critter
// introduce usable prompts
    // 'feed', 'train', 'listen', 'battle', 'bond', 'quit'
        // feed - give critter food
        // train - chance to increase health or damage
        // listen - display health, damage, hunger
        // battle - look for opponents
            // adds 1 to hunger bar 
            // if hunger is greater than 10, cannot train or battle
            // if hunger greater than 5, won't stop talking about how hungry they are 
        // quit - end program 
// request user input
// 'feed' command
    // overfeed leads to weight gain 
// 'train' command
// 'listen' command
    // double check if that's what they really wanna do
// 'bond' command
// 'battle' command
// 'quit' command
// return 0 (end program)

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

class baseCritter {
public:
    string name;
    int health;
    int damage;
    int hunger;

    // default constructor


    baseCritter() {
        cout << "A new critter has surfaced!\n";
    }

    void hello() {
        cout << "My name is " <<name << ", tiktik! I have " <<health<< "health ";
        cout << "and I do " << damage<< "damage, tik!\n";
    }

    void taunt() {
        cout << "I'm going to kill you, tiktik!\n";
    }


};

int main() {
    srand(time(0));
    string playerName;
    cout << "What's your name?\n";

    getline(cin, playerName);
    cout << "Hello Team Leader " <<playerName<< "!\n";
    cout << "Let's meet your critter!\n";
    cout << "\n";

    string critterName;
    cout << "A small, impish looking entity scuttles out before you...\n";
    cout << "What do you want to name it?\n";
    getline(cin, critterName);
    cout << "Greetings, " <<critterName<< "!\n";

    // baseCritter pet;
    // pet.name = <<critterName<<;
    // pet.hello();

    
    // introduce critter
    // let player name critter

    string input;

    do {
        cout << "You can 'feed', 'train', 'listen', 'battle', 'bond', or 'quit'.\n";
        cout << "What would you like to do?\n";
        getline(cin, input);

        if(input == "feed") {
            cout << "Ok, let's feed " <<critterName<< ".\n";
        }
        
        else if(input == "train") {
            cout << "Ok, let's train " <<critterName<< ".\n";
        }

        else if(input == "listen") {
            cout << "Ok, let's shut up and see if " <<critterName<< "has anything to say.\n";
        }

        else if(input == "battle") {
            cout << "Let's look around for an opponent.\n";
        }

        else if(input == "bond") {
            cout << "Let's spend some time with " <<critterName<< ".\n";
        }

        else if(input == "quit") {
            cout << "Smell ya later!\n";
            return 0;
        }

        else {
            cout << "I don't recognize that command.\n";
        }

    } while(true);
    


    return 0; // end program
}


