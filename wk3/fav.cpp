// Elise Soto Fav Games Assignment
// create a .cpp program that will allow the user to 
    // add a game
    // edit
    // remove
    // show all (sorted)
    // quit
// use vectors, iterators, and algorith,s to do so
// use pseduo code to organize thoughts
// show the avaliable commands to the user at the top of each loop
// the games do not need to save between launches of the program
// the user should type the command they want to use as a word

// due Monday, April 20th
    // turn in .cpp file to blackboard
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// ask for user's name cuz that's cool
    // get name input
// introduce usable prompts
// get prompt input
// create fav games list



int main() {
    cout << "Let's do some stuff today!\n";
    string playerName;
    cout << "What's your name?\n";
    // get user input
    getline(cin, playerName); 
    // you CANNOT mix cin >> playerName and getline(cin, input)
    cout << "Hello " <<playerName << "!\n";

    vector<string> favGames;

    if(playerName == "Elise") {
        favGames.push_back("Project Zomboid");
        favGames.push_back("Minecraft");
        favGames.push_back("The Sims 4");
        favGames.push_back("Roblox");
        favGames.push_back("Outer Worlds");

    }

    else{
        cout << "I don't have a list for you to look at.\n";
        cout << "Sorry! Come back when I'm better at coding :P\n";
        return 0;

    }
    string input;
    
    do{

        cout << "You can 'add', 'edit', 'remove', 'show all', or 'quit'.\n";
        cout << "What would you like to do?\n";

        getline(cin, input);

        if(input == "add") {
            cout << "Let's compile a list of our favorite games! What would you like to add?\n";
            

            if (input == "yes") {

            }

            else if (input == "no") {
                
            }

        }

        else if(input == "edit") {
        }

        else if(input == "remove") {
        }

        else if(input == "show all") {
        }

        else if(input == "quit") {
            cout << "Thanks for playing!\n";
            break;
        }

        else {
            cout << "I don't recognize that command.\n";
        }

    } while(true);


    return 0;
} //end program