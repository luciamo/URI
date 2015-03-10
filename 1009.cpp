#include <iostream>

using namespace std;

int main() {

    int A, B;
    double C, S;
	cin >> A >> B >> C;
	S = (B * C);
	cout << "NUMBER = " << A << endl;
	cout.precision(2);
	cout << "SALARY = U$ " << fixed << S << endl;

    return 0;
}
