
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void read(string path = "save.txt") {
    string line;
    ifstream readFile("save.txt"); // create a new var, try and open a file
    if(readFile.is_open()) {
        // cout << "The file is open!\n";
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

void read(vector<string>& vec, string path = "save.txt") {
    string line;
    ifstream readFile("save.txt"); // create a new var, try and open a file
    if(readFile.is_open()) {
        // cout << "The file is open!\n";
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

void write(vector<string>& vec, string path = "save.txt") {
        // cout << "Starting write() function.\n";
        ofstream writeFile(path);

       if(writeFile.is_open()) {
        // cout << "The write file is open.\n";
        for(int i = 0; i < vec.size(); i++) {
            writeFile << vec[i] << endl;
        }
       }
    writeFile.close();
    // cout << "End of write function.\n";
}

int main() {
    cout << "Let's learn to write a file!\n";
    vector<string> favs;
    string input = "asdf";
    // open or "load" the file (read)
    // make some changes
    // save the file
    // close the file

    string path = "save.txt";

    cout << "What file would you like to open? Type 'no' to use default.\n";
    getline(cin, input);
    if(input !="no"){
        path = input; // let's us open different files
    }


    read(); // show current names
    read(favs, path); // add names to vector'
    
    cout << "Would you like to clear this file's history?\n";
    getline(cin, input);
    if(input == "yes") {
        favs.clear();
    }
    else {
        cout << "Ok.\n";
    }
   
    cout << "What would you like to add?\n";
    cout << "Enter an empty line to stop.\n";


    // create a file to write to and open it 
    while(input != "") {
        cout << "> ";
        getline(cin, input);
        if(input == "") {
            break;
        }
        // send to file
        favs.push_back(input);
    }

    // now call write function and send it our favs vector
    write(favs);
    // writeFile.close();

    return 0;
}