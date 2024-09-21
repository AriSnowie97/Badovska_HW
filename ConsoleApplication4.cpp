#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

int main()
{
    float Z1, Z2, a;
    cout << "Enter number a: ";
    cin >> a;

    Z1 = cos(a) + sin(a) + 3 * cos(a) + 3 * sin(a);
    Z2 = 2 * sqrt(2) * cos(a) * sin(PI / 4 + 2 * a);

    cout << "Z1: " << Z1 << "\n";
    cout << "Z2: " << Z2 << endl;

    return 0;
}
