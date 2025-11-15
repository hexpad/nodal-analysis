#include <iostream>
using namespace std;

int main() {
    double V1, V3, R1, R2, R3;

    cout << "Enter the value of V1: ";
    cin >> V1;
    cout << "Enter the value of V3: ";
    cin >> V3;
    cout << "Enter the value of R1: ";
    cin >> R1;
    cout << "Enter the value of R2: ";
    cin >> R2;
    cout << "Enter the value of R3: ";
    cin >> R3;
    cout << "\n";

    // V2 Calculation
    double V2 = (V1/R1 + V3/R3) / (1/R1 + 1/R2 + 1/R3);

    // Currents
    double I1 = (V1 - V2) / R1;
    double I2 = (V3 - V2) / R3;
    double I3 = V2 / R2;

    cout << "V2: " << V2 << "\n"

         << "I1: " << I1 << "\n"
         << "I2: " << I2 << "\n"
         << "I3: " << I3 << "\n";

    return 0;
}
