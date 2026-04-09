// Elise Soto Coding 1 Spring 2026
// Vectors, Iterators, and Algorithms

// for windows, it's 'cl /EHsc vec.cpp' and 'vec'

#include <iostream>
#include <string>   // for getline
#include <vector>   // for vectors and iterators
#include <algorithm> // for find (), sort (), and random_shuffle()

using namespace std;

int main (){
    cout << "Let's learn about variables!\n";
    
    string input;

    do{
        cout << "What would you like to do?\n";
        cout << "You can type 'quit', 'push', 'find'.\n";

        getline(cin, input); // get input from player

        if(input == "push") {
            cout << "\nLet's make our first vector of strings.\n";

            vector<string> names;

            // add some names with names.push_back()

            names.push_back("Summer");
            names.push_back("Collin");
            names.push_back("Mohamed");
            names.push_back("Hassan");
            names.push_back("Jacob");

            cout << "Here are your names!\n";
            for(int i = 0; i < names.size(); i++) {
                cout << "    " << names[i] << "\n";
            }
            
            cout << "There are " <<names.size() << " names.\n\n";

            cout << *(names.end() - 1) << " is... Let's sacrifice them.\n";

            names.pop_back(); //removes the last element from the vector

            cout << "Here are your names!\n";
            for(int i = 0; i < names.size(); i++) {
                cout << "    " << names[i] << "\n";
            }

        } // end of 'push'
        else if(input == "find") {
            cout << "Let's try to use the find algorithm.\n";
            
            
            // using a collection initializer to add favs at creation of vector
            vector<string> favs = {"Bee and Puppycat", "Adventure Time", "Saiki K."};

            // build an interator
            // it points to a 'spot' in a vector
            vector<string>::iterator iter; 

            cout << "Here are your favs!\n";
            for(int i = 0; i < favs.size(); i++) {
                cout << "    " << favs[i] << "\n";
            }

            // make iter point at the first element in the vector
            iter = favs.begin(); 

            // the asterisk is a "deference operator" so that we can get to 
                // the value that the iter is pointing at 
            cout << "Iter is pointing at " << *iter << ".\n";

            iter += 1;

            cout << "Now iter is pointing at " <<*iter << ".\n";

            cout << " What name would you like to select?\n";

            getline(cin, input);
            // use the find algoritm 
            iter = find(favs.begin(), favs.end(), input);

            if(iter != favs.end()) {
                cout << "We've found " << *iter << "!\n";
                cout << "Would you like to change this fav?\n";
                getline(cin, input);

                if(input == "yes") {
                    cout << "What would you like to change this fav to?\n";
                    getline(cin, input);

                    *iter = input; // changing the fav
                }

                 cout << "Here are your updated favs!\n";
                 for(int i = 0; i < favs.size(); i++) {
                 cout << "    " << favs[i] << "\n";
            }

            }
            else {
                cout << "We couldn't find that name.\n";
            }
        }

        else if(input == "quit") {
                cout << "Thanks for playing.\n";
                break;
        }

        else {
                cout << "I didn't recognize that command.\n";
        }
    } while(true);

    // create a new vector of stringg



    return 0;
}