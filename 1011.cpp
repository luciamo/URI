#include <iostream>

using namespace std;

int main() {
	int R;
	float P, E;
	P = 3.14159;
	cin >> R;
	E = 4.0/3*P*R*R*R;
	cout.precision(3);
	cout << "VOLUME = " << fixed << E << endl;

    return 0;
}

