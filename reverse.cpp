#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    string reversed;
    char exitVariable[1];
        for (int i = 0; i < 3; ++i) {
            try {
                cout << "Please input a string without a space: " << endl;
                cin >> input;
                for (int i = input.size() - 1; i >= 0; --i) {
                    reversed += input[i];
                }
                cout << "That string reversed is: " + reversed << endl;
                reversed = "";
            }
            catch (...){
                cout << "An error occurred. Try another string. " << endl;
            }
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
