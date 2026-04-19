#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    const double PI = 3.14159265358979323846;
    int choice;

    do
    {
        // Display menu
        cout << "\n===========================\n";
        cout << "    Geometry Calculator    \n";
        cout << "===========================\n";
        cout << "1. Calculate the Area of a Circle\n";
        cout << "2. Calculate the Area of a Rectangle\n";
        cout << "3. Calculate the Area of a Triangle\n";
        cout << "4. Quit\n";
        cout << "---------------------------\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Validate menu selection
        if (choice < 1 || choice > 4)
        {
            cout << "\nInvalid selection. Please enter a number between 1 and 4.\n";
            continue;
        }

        // Process menu selection
        switch (choice)
        {
            case 1: // Circle
            {
                double radius;
                cout << "\nEnter the radius of the circle: ";
                cin >> radius;

                if (radius < 0)
                {
                    cout << "Error: Radius cannot be negative.\n";
                }
                else
                {
                    double area = PI * radius * radius;
                    cout << fixed << setprecision(2);
                    cout << "Area of the circle = " << area << "\n";
                }
                break;
            }

            case 2: // Rectangle
            {
                double length, width;
                cout << "\nEnter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;

                if (length < 0 || width < 0)
                {
                    cout << "Error: Dimensions cannot be negative.\n";
                }
                else
                {
                    double area = length * width;
                    cout << fixed << setprecision(2);
                    cout << "Area of the rectangle = " << area << "\n";
                }
                break;
            }

            case 3: // Triangle
            {
                double base, height;
                cout << "\nEnter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;

                if (base < 0 || height < 0)
                {
                    cout << "Error: Dimensions cannot be negative.\n";
                }
                else
                {
                    double area = 0.5 * base * height;
                    cout << fixed << setprecision(2);
                    cout << "Area of the triangle = " << area << "\n";
                }
                break;
            }

            case 4: // Quit
                cout << "\nGoodbye!\n";
                break;
        }

    } while (choice != 4);

    return 0;
}
