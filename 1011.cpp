#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int R;
	double P;
	P = 3.14159;
	cin >> R;
	cout.precision(3);
	cout << "VOLUME = " << fixed << P*R*R*R*4/3 << endl;

    return 0;
}

