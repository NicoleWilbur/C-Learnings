#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m;

void countUp() {
    m.lock();
    for (int i = 0; i < 21; ++i){
        cout << i << " ";
    }
    cout << endl;
    m.unlock();
}
void countDown() {
    m.lock();
    for (int i = 20; i >= 0; --i){
        cout << i << " ";
    }
    cout << endl;
    m.unlock();
}

int main() {
    char exitVariable;
    try {
        thread thread1(countUp);
        thread thread2(countDown);
        thread1.join();
        thread2.join();
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