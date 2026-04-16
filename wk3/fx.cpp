// Elise Soto Coding 1 2026
// functions

/*block comment*/

/* 
    yo what does this do 
    im just talking here 
    hey guys

    functions
        return type, function name (input parameters) {code}
    passing by value
    passing by reference
    sending and recieving variables to and from a function
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

// declaring and defining a new function
// the return type is void, which means it returns nothing
// the name of the function is "sayHello"
// the input paramaters go in the (), this function doesn't have any
// code goes between the curly brackets
// call this function in main by typing 'sayHello();'

void sayHello() {
    cout << "Hello!\n";
}

void doAddition(int firstNum, int secondNum){
    cout << "Our first number is " <<firstNum << ".\n";
    cout << "Our first number is " <<secondNum << ".\n";
    cout << "Together, they make " << firstNum + secondNum << ".\n";
}

int dieRoll(int sides){
    return rand() % sides + 1;
}

// don't forget to include <cstdlib> and <stime>

// create a function
// return type is bool
// name is askYesNo
// no input parameters for now

bool askYesNo(string question = "Do you want to keep playing?"){
    while(true) {
        cout << question << " ('yes'/'no')\n";
        string input;
        getline(cin, input);

        if(input == "yes") {
            return true;
        }

        else if(input == "no"){
            return false;
        }

        else {
            cout << "I do not understand this command, please type 'yes' or 'no'.\n";
        }
    }
}

// variable scope
// global variables
// passing by reference 
// #include <vector>

// create a reference with a & next to the variable type
// int& number; or string& name;
void showVec(vector<string>& vec) {
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}

void addStringToVec (vector<string>& vec) {
    cout << "What name would you like to add?\n";
    string input;
    getline(cin, input);

    vec.push_back(input);

    showVec(vec); // added name exists here
}

int main(){
    srand(time(0));
    vector<string> names= {"Yah", "Blerb", "Gleebo", "Steven"};

    cout << "Finally, functions!\n";

    showVec(names);
    addStringToVec();
    sayHello();

    cout << "Let's roll a dice. Our first number is " << dieRoll(6) << ".\n";
    doAddition(dieRoll(67), dieRoll(20));

    if (askYesNo()){
        cout << "Let's start the next level!\n";
    }
    else {
        cout << "Thanks for playing...:(\n";
        return 0;
    }

    if (askYesNo("Do you wanna chat?")){
        cout << "Leave me alone, weirdo."
    }
    else {
        cout << "Ya smells.\n";
    }

    return 0;
} // end program