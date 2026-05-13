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
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

void read(string path = "names.txt") {
    string line;
    ifstream readFile("names.txt"); // create a new var, try and open a file
    if(readFile.is_open()) {
        //cout << "The file is open!\n";
        while(getline(readFile, line)){
            cout << line << endl;
        }

    }
    else{
        cout << "I could not open that file.\n";
    }

    // close file after done reading
    readFile.close();
}

void read(vector<string>& vec, string path = "names.txt") {
    string line;
    ifstream readFile("names.txt"); // create a new var, try and open a file
    if(readFile.is_open()) {
        //cout << "The file is open!\n";
        while(getline(readFile, line)){
            vec.push_back(line);
        }

    }
    else{
        cout << "I could not open that file.\n";
    }

    // close file after done reading
    readFile.close();
}

void showVec (vector<string>& vec) {
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}

class baseCritter {
public:
    string name = "";
    int health = 0;
    int damage = 0;
    int hunger = 15;
    int startingHealth;
    int startingHunger;

    // default constructor

    baseCritter() {
        cout << "A new critter has surfaced!\n";

        name = 
        health = rand() % 5 + 3;
        startingHealth = health;
        damage = rand() % 3 + 3;
        hunger = 0;
        startingHunger = hunger;
            if(hunger > 5) {
                cout << "I'm hungry...\n";
            }

            else if (hunger > 10) {
                cout << "I can't do anything, I'm starving!\n";
            }

    }

    void hello() {
        cout << "My name is " <<name << ", tiktik! I have " <<health<< " health ";
        cout << "and I do " << damage<< " damage, tik!\n";
    }

    void listen() {
        cout << "My health is " << health << " and I do " << damage << " damage. ";
        cout << "My hunger is currently at " << hunger << ".\n";
        cout << "\n";
    }

    void taunt() {
        cout << "I'm going to kill you, tiktik!\n";
    }

    void feed() {
        cout << "What should we give it?\n";
        string food;
        getline(cin, food);
        cout << "Let's give it some " <<food<< ".\n";

        hunger -= 1;
        cout << "My hunger has gone down to " << hunger<< ".\n";

    }

    void train() {
        int randomNumber = std::rand()% 6;
        damage += randomNumber;
        cout << "My damage has increased by " << randomNumber << ". I now have " << damage << ".\n";

        hunger += 1;
        cout << "My hunger has gone up by 1.\n";
    }


    void battle() {

        cout << "A new enemy approaches!\n\n";
        baseCritter pet;
        vector<string> critterNames;
        string input = "asdf";
        string path = "names.txt";
        path = input;

        vector<baseCritter> horde(1);
        for(auto& critter : horde) {
            cout << critter.name << "\n";
        }
        random_shuffle(horde.begin(), horde.end());

        read();
        read(critterNames, path);
    
        string playerAction;

        getline(cin, playerAction);
            if(playerAction == "attack") {

            }
            else if(playerAction == "heal") {
                // healing action code
                int randomNumber = std::rand()% 6;
                health += randomNumber;
                cout << "My health has gone up to " << health << ".\n";
            }
            else if(playerAction == "run away") {
                cout << "You and your critter have fled from battle.\n";
            }
            else if(health <= 0) {
                cout << "Your critter has died.\n";
                return 0;
            }
        
        hunger += 1;
        cout << "My hunger has gone up by 1 point.\n";

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

    // introduce critter
    // let player name critter

    string critterName;
    cout << "A small, impish looking entity scuttles out before you...\n";
    cout << "What do you want to name it?\n";
    getline(cin, critterName);
    cout << "Greetings, " <<critterName<< "!\n";

    baseCritter pet;
    pet.name = critterName;
    pet.hello();

    string input;

    do {
        cout << "You can 'feed', 'train', 'listen', 'battle', or 'quit'.\n";
        cout << "What would you like to do?\n";
        getline(cin, input);

        if(input == "feed") {
            cout << "Ok, let's feed " <<critterName<< ".\n";

            pet.feed();
            
        }
        
        else if(input == "train") {
            cout << "Ok, let's train " <<critterName<< ".\n";

            pet.train();

        }

        else if(input == "listen") {
            cout << "\n";
            cout << "Ok, let's shut up and see if " <<critterName<< " has anything to say.\n";
            pet.listen();
        }

        else if(input == "battle") {
            cout << "Let's look around for an opponent.\n";
            cout << "\n";
            cout << "Hark! Is that a dust cloud I spy over yonder?\n";
            cout << "RUMBLERUMBLERUMBLERUMBLRUMBLE\n";
            cout << "\n";

            pet.battle();

            //
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


