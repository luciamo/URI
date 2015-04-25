#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14159;
    double c;
    cin >> c;
    cout << "A=" << fixed << setprecision(4) << pi*c*c << endl;
    }
