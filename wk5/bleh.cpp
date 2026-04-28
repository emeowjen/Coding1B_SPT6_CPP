// Elise Soto Coding 1 2026

#include <iostream>
#include <string>
using namespace std;

// classes are custom variables
// variables
// functions

// constructors
// getters and setters (privacy)

class robot {
private:

    string name;
    int charge;
    int boredom;

public:  
    // constructor, sets up the class with input variables
    // doesn't have a return type
    // must be named same as class
    robot (string givenName, int givenCharge, int givenBoredom) {
        name = givenName;
        charge = givenCharge;
        boredom = givenBoredom;
        status();
    }

    robot() {
        name = "ROBBER";
        charge = 10;
        boredom = 12;
        status();
    }

    void status () {
        cout << "Hello, my name is " << name;
        cout << " and my charge is " << charge << ".\n";
        cout << "I am ";

        if(boredom < 5) cout << "happy";

        else if (boredom < 10) cout << "bored";
        else if (boredom < 15) cout << "frustrated";
        else cout << "ENRAGED";

        cout << ".\n";

    }

    // getters
    string getName(){
        return name;
    }

    // setters
    void setName(string givenName) {
        if(givenName.size() <= 5) {
        name = givenName;
        }
        else {
            cout << "ERROR: " << givenName << " is too long.\n";
        }

    }

    void setCharge(int givenCharge) {
        // clamp change to between 0 and 100
        if (givenCharge < 0) {
            charge = 0;
        }
         else if (givenCharge > 100) {
            charge = 0;
        }
        else {
            charge = givenCharge;
        }
    }

    void setBoredom(int givenBoredom) {
        // clamp change to between 0 and 100
        if (givenBoredom < 0) {
            charge = 0;
        }
         else if (givenBoredom > 100) {
            charge = 0;
        }
        else {
            charge = givenBoredom;
        }
    }

    void changeChargeBy(int amount) {
        setCharge(charge += amount);

    }
}; // classes have semicolon at end 

int main() {
    cout << "\n";
    cout << "We're doing classes today! Yay.\n";
    cout << "\n";

    cout << "Robot Status:\n";
    cout << "\n";

    robot artoo("R2-D2", 45, 3); // using a constructor
    // artoo.name = "R2-D2"; //dot syntax 
    // artoo.charge = 45;
    // artoo.boredom = 3;
    cout << "Artoo has " <<artoo.getName().size() << " letters in their name.\n";

    robot maomao;
    maomao.setName("Maomao"); // using setter
    maomao.setCharge(2);
    maomao.setBoredom(0);

    artoo.status();
    maomao.status();

    return 0;
}
