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

void showVec (vector<string>& vec) {
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}

int main() {
    srand(time(0));
    cout << "Let's do some stuff today!\n";
    string playerName;
    cout << "What's your name?\n";
    // get user input
    getline(cin, playerName); 
    // you CANNOT mix cin >> playerName and getline(cin, input)
    cout << "Hello " <<playerName << "!\n";

    vector<string> favGames;

    if(playerName == "Elise") {
        favGames= {"Minecraft", "Roblox", "Project Zomboid"};
        cout << "\nLet's look at your favorite games.\n";
    
        showVec(favGames);
        cout << "\n";
    }

    else{
        cout << "I don't have a list for you to look at.\n";
        cout << "Sorry! Come back when I'm better at coding :P\n";
        return 0;

    }
    string input;
    
    do{

        cout << "You can 'show all', 'add', 'edit', 'remove', or 'quit'.\n";
        cout << "What would you like to do?\n";
        getline(cin, input);

        if(input == "show all") {
            cout << "Ok, let's look at a list of our favorite games again!\n";
            cout << "Here's that list.\n\n";
            showVec(favGames);
            cout << "\n";

        }

        else if(input == "add") {
            cout << "What game would you like to add?\n";
            getline(cin, input);

            cout << "Game being added...\n";
            cout << "Here's that updated list!\n\n";
            
            favGames.push_back(input);
            showVec(favGames);
            

            cout << "\nIf you'd like to add more games, please run the 'add' command again.\n\n";

        }

        else if(input == "edit") {
            vector<string>::iterator iter;
            cout << "What name would you like to select?\n";
            getline(cin, input);

            iter = find(favGames.begin(), favGames.end(), input);

            if(iter != favGames.end()) {
                cout << "" <<*iter << " located!\n";
                cout << "Would you like to change this game? (yes/no)\n";
                getline(cin, input);

                if(input == "yes") {
                    cout << "What would you like to change this fav to?\n";
                    getline(cin, input);

                    *iter = input;
                    cout << "Here is your updated list!\n\n";
                    showVec(favGames);
                    cout << "\nIf you'd like to edit more games, please run the 'edit' command again.\n\n";
                }
            }
        }

        else if(input == "remove") {
            cout << "\n";
            showVec(favGames);
            cout << "\nWhat game would you like to remove from this list?\n";
            getline(cin, input);

            auto iter = find(favGames.begin(), favGames.end(), input);

            if(iter !=favGames.end()){
                cout << "Game located, removing now.\n";
                cout << "Let's take a look at the updated list.\n";
                favGames.erase(iter);
                cout << "\n";
                showVec(favGames);

                cout << "\nIf you'd like to remove more games, please run the 'remove' command again.\n\n";
            }

        }

        else if(input == "quit") {
            cout << "Smell ya later!\n";
            return 0;
        }

        else {
            cout << "I don't recognize that command.\n";
        }

    } while(true);


    return 0;
} //end program