#include <iostream>

using namespace std;

int main() {
    int a, i;
    int tempArray [3];
    int var1, var2, var3;
    char exitVariable[1];
    try {
        for (i = 0; i <3; ++i) {
            cout << "Please input an integer value: " << endl;
            while (!(cin >> a)) {
                cin.clear();
                std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please Try again: " << endl;
            }
            tempArray[i] = a;
        }
        var1 = tempArray[0];
        var2 = tempArray[1];
        var3 = tempArray[2];
        int* p1 = new int(var1);
        int* p2 = new int(var2);
        int* p3 = new int(var3);

        cout << "The value of the first integer is: " << var1 << " The pointer address is: "<< p1 << endl;
        cout << "The value of the second integer is: " << var2 << " and the pointer address is: "<< p2 << endl;
        cout << "The value of the third integer is: " << var3 << " and the pointer address is: "<< p3 << endl;
        delete p1;
        delete p2;
        delete p3;
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
