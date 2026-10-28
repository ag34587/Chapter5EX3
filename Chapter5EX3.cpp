
#include <iostream>

using namespace std;

int main() {
    double speed;
    int hours;

    
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    cout << "How many hours has it traveled? ";
    cin >> hours;

   
    cout << "\nHour\tMiles Traveled\n";
    cout << "---------------------\n";

    
    for (int i = 1; i <= hours; i++) {
        cout << i << "\t" << (speed * i) << "\n";
    }

    return 0;
}
