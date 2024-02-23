#include <vector>
#include "ARGlasses.h"
#include "FitnessTracker.h"
#include "SmartWatch.h"
#include "WearableDevice.h"
using namespace std;

int main() 
{
    SmartWatch watch1("Apple", 399.99, 10, 1.7, true);
    FitnessTracker tracker1("Fitbit", 149.99, 15, true, 24);
    ARGlasses glasses1("MagicLeap", 2295.00, 5, 50, true);

    // Vector of pointers to the base class to demonstrate polymorphism
    vector<WearableDevice*> inventory;
    inventory.push_back(&watch1);
    inventory.push_back(&tracker1);
    inventory.push_back(&glasses1);

    // Loop through and display the details of each device using polymorphism
    for (WearableDevice* device : inventory) 
    {
        device->getInfo();
        cout << "-------------------------------" << endl;
    }

    // Simulate some transactions
    cout << "Selling 3 Apple smartwatches..." << endl;
    watch1.sell(3);
    cout << "Remaining stock for Apple smartwatch: " << watch1.getQuantity() << endl;

    cout << "Restocking 5 Fitbit trackers..." << endl;
    tracker1.restock(5);
    cout << "New stock for Fitbit tracker: " << tracker1.getQuantity()  << endl;

    return 0;
}
