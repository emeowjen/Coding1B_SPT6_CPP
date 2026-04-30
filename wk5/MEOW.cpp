// Elise Soto Coding 1 2026
// more classes! yay

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

// global vector, visible in all functions
vector<string> names = {"Miette", "Puss", "Whiskers", "Gnocchi", "Oslo", "Maomao"};

class baseKitty {
public:
    string name;
    int health;
    int damage;

    // default constructor
    baseKitty() {
        cout << "A new battle kitty has appeared!\n";

        name = names[rand() % names.size()] + " Kitty";
        health = rand() % 4 + 4;
        startingHealth = health; // save for eventual boss slime creation 
        damage = rand() % 3 + 3;
    }

    void hello() {
        cout << "I'm " << name << ", meow! I have " << health << " health ";
        cout << "and I do " << damage << " damage, meow!\n";
    }

    void taunt() {
        cout << "Prepare to meet your meowker!\n";
    }

    // attack another kitty
    // return true is opponent health is <= 0
    bool attack(baseKitty& opponent) {
        opponent.health -= damage;
        cout << name << " has done " << damage << " damage to ";
        cout << opponent.name << "!\n";

        if(opponent.health <= 0) return true;
        else return false;

    }

 };


class bossKitty : public baseKitty {
public:
    int damageMultiplier = 3;

    // constructor for boss
    bossKitty() {
        // should inherit health
        // should inherit cout statement
        name = "boss";
        damage = damage * damageMultiplier;

    }

     
    bool attack(baseKitty& opponent) {
        cout << "This is a boss attack!\n";
        opponent.health -= damage;
        cout << name << " has done " << damage << " damage to ";
        cout << opponent.name << "!\n";

        if(opponent.health <= 0) return true;
        else return false;
    }
    
    void taunt() {
        cout << "Your guts will make a fine ball of yarn for me, meow!\n";
    }
};

class spitKitty : public baseKitty {

};


int main () {
    srand(time(0));
    cout << "\n";
    cout << "We making more classes bitchhhh!\n";
    cout << "\n";
    cout << "KITTY BATTLES INCOMING\n";
    cout << "\n";

    //create kitty
    baseKitty minion;
    minion.name = "Mittens";
    minion.hello();
    minion.taunt();

    cout << "\n";

    bossKitty destroyer;
    destroyer.name = "Hunni";
    destroyer.hello();
    destroyer.taunt();

    cout << "\n";
    cout << "Hunni is feeling tyrannical...\n";
    if(destroyer.attack(minion)) {
        cout << "Mittens has been knocked!\n";
    }

    cout << "Mittens is really scared! Mittens self inflicts additional damage out of fear.\n";
    minion.attack(minion);

    cout << "\n";
    cout << "Hark! Is that a bundle of fur I see over yonder?\n";
    cout << "RUMBLINGRUMBLINGRUMBLINGRUMBLINGRUMBLING\n";
    cout << "\n";

    // create vector of kitties
    // pick two to fight
    vector<baseKitty> horde(6); // they are called a sludge because they are EVIL
    
    if(true) {
        bossKitty superKitty;
        horde.push_back(superKitty);
    }

    cout << "\n";
    cout << "A new horde of battle kittens approaches!\n\n";
    for(auto& kitty : horde) {
        cout << kitty.name << "\n";
    }

    cout << "\n";

    random_shuffle(horde.begin(), horde.end());

    auto& a = horde[0]; // a is equal to the first slime
    auto& b = horde[1]; // b is equal to the second slime

    while(a.health > 0 && b.health > 0) {
        if(a.attack(b)) {
            cout << b.name << " has been defeated by " << a.name << ".\n";
        }
        else {
            if(b.attack(a)) {
                cout << a.name << " has been defeated by " << b.name << ".\n";
            }
         }
    }


    return 0; // end program
}