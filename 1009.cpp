#include <iostream>

using namespace std;

int main() {
	string A;
    double B, C, D, S;
	cin >> A >> B >> C;
	D = C*15/100;
	S = (B + D);
	cout.precision(2);
	cout << "TOTAL = R$ " << fixed << S << endl;

    return 0;
}
