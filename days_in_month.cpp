#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 400 == 0)
        return true;
    else if (year % 100 == 0)
        return false;
    else if (year % 4 == 0)
        return true;
    else
        return false;
}

int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            return 31;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            return 30;
        case 2:  // February
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1; // invalid month
    }
}

int main() {
    int month, year;

    // Get month input with validation
    cout << "Enter a month (1-12): ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Error: Invalid month. Please enter a value between 1 and 12." << endl;
        return 1;
    }

    // Get year input
    cout << "Enter a year: ";
    cin >> year;

    // Calculate and display result
    int days = getDaysInMonth(month, year);

    string monthNames[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    cout << monthNames[month] << " " << year << " has " << days << " days." << endl;

    return 0;
}
