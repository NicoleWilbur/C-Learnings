#include <iostream>
#include<fstream>
#include <vector>

using namespace std;

vector<char> input(vector<char> txtIn){
    string tweet;
    fstream file;
    try {
        cout << "what's your tweet? " << endl;
        getline(cin, tweet);
        while (tweet.size() > 280 || tweet.empty()) {
            cin.clear();
            cout << "invalid tweet length. try again" << endl;
            getline(cin, tweet);
        }
        file.open("CSC450_CT5_mod5.txt", fstream::in | fstream::app);
        if(file.is_open()){
            file << tweet << endl;
            file.seekg(0, std::ios::beg);
            while (!file.eof()){
                txtIn.push_back(file.get());
            }
            file.close();
        }
        else{
            cout << "File error. Try again." << endl;
        }
    }
    catch (...){
        cout << "An error occurred. Try again. " << endl;
    }
    return txtIn;
}

void output (vector<char>(txtIn)){
    fstream file2;
    try {
        file2.open("CSC450-mod5-reverse.txt", fstream::app);
        if (file2.is_open()) {
            for (int i = txtIn.size() - 2; i >= 0; --i) {
                file2 << txtIn[i];
            }
            file2.close();
        } else {
            cout << "ruh roh" << endl;
        }
    }
    catch (...){
        cout << "An error occurred. Try again." << endl;
    }
}

int main() {
    char exitVariable[1];
    string();
    string reversed;
    vector<char> txtIn;
    try {
        txtIn = input(txtIn);
        output(txtIn);
           }
    catch (...){
        cout << "An error occurred. Try again. " << endl;
    }

    cout << "Goodbye!\n\nEnter any character to close the screen: " << endl;
    try {
        cin >> exitVariable;
    }
    catch (...){
        return 0;
    }
    return 0;
}
