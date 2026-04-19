#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double weight, distance, rate, cost;

    // --- Get and validate weight ---
    cout << "Enter the weight of the package (kg, max 20): ";
    cin >> weight;

    while (weight <= 0 || weight > 20)
    {
        cout << "Invalid weight. Must be greater than 0 and no more than 20 kg.\n";
        cout << "Enter the weight of the package (kg, max 20): ";
        cin >> weight;
    }

    // --- Get and validate distance ---
    cout << "Enter the shipping distance (miles, 10-3000): ";
    cin >> distance;

    while (distance < 10 || distance > 3000)
    {
        cout << "Invalid distance. Must be between 10 and 3000 miles.\n";
        cout << "Enter the shipping distance (miles, 10-3000): ";
        cin >> distance;
    }

    // --- Determine rate based on weight ---
    if (weight <= 2)
        rate = 1.10;
    else if (weight <= 6)
        rate = 2.20;
    else if (weight <= 10)
        rate = 3.70;
    else
        rate = 4.80;

    // --- Calculate cost ---
    // ceil(distance / 500) gives the number of 500-mile intervals
    double intervals = ceil(distance / 500.0);
    cost = rate * intervals;

    // --- Display result ---
    cout << fixed << setprecision(2);
    cout << "\n--- Shipping Summary ---\n";
    cout << "Package weight : " << weight   << " kg\n";
    cout << "Distance       : " << distance << " miles\n";
    cout << "Rate           : $" << rate    << " per 500 miles\n";
    cout << "Shipping cost  : $" << cost    << "\n";

    return 0;
}
