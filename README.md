![circuit](https://github.com/user-attachments/assets/844142e5-2ab8-4922-8ee2-e3c9d7a93b40)

It calculates the unknown node voltage V2, and the currents through three resistors when you provide two voltage sources V1 and V3, and three resistors R1, R2, and R3. 

```cpp

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

```
