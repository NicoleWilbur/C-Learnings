#include <iostream>
#include <iomanip>

using namespace std;
double input(double a){
    while (!(cin >> a) || (a > 40 || a < 0)) {
        cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please try again: " << endl;
    }
    return a;
}

int main() {
    double OVERTIMERATE = 1.5;
    double overtimeWorked;
    char exitVariable[1];
    double a;
    try {
        cout << "Please enter hours worked in a decimal value: " << endl;
        double hoursWorked = input(a);
        double* pHoursWorked = new double(hoursWorked);

        if (hoursWorked == 40) {
            cout << "Please enter any overtime in a decimal value: " << endl;
            overtimeWorked = input(a);
        }
        else{
            overtimeWorked = 0;
        }
        double *pOvertimeWorked = new double(overtimeWorked);

        cout << "Please enter the pay rate in a decimal value: " << endl;
        while (!(cin >> a) || (a > 1000 || a < 1)) {
            cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again: " << endl;
        }
        double payRate = a;
        double* pPayRate = new double(payRate);

        double grossPay = (hoursWorked * payRate) + (overtimeWorked * OVERTIMERATE * payRate);

        cout << setprecision(2) << fixed << showpoint
             << "Pay rate: " << setw(15) << payRate
             << "  Location in memory: " << pPayRate << endl
             << "Hours worked: " << setw(11) << hoursWorked
             << "  Location in memory: " << pHoursWorked << endl
             << "Overtime worked: " << setw(8) << overtimeWorked
             <<"  Location in memory: " << pOvertimeWorked << endl
             << "Total earned: " << setw(11) << grossPay << endl;
        delete pHoursWorked;
        delete pOvertimeWorked;
        delete pPayRate;
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
