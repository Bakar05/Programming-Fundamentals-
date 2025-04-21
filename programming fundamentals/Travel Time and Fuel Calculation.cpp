#include <iostream>
using namespace std;

int main() {
    float distance, speed, fuel_efficiency, travel_time, fuel_required;

    cout << "Enter the distance between two cities (km): ";
    cin >> distance;
    cout << "Enter the vehicle's average speed (km/h): ";
    cin >> speed;
    cout << "Enter the vehicle's fuel efficiency (km/l): ";
    cin >> fuel_efficiency;

    travel_time = distance / speed;
    fuel_required = distance / fuel_efficiency;

    cout << "Estimated travel time: " << travel_time << " hours" << endl;
    cout << "Total fuel required: " << fuel_required << " liters" << endl;

    return 0;
}
