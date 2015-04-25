#include <iostream>

using namespace std;

int main() {
	int A, B, C, D;
    double E, F, G, H, I;
	cin >> A >> B >> E >> C >> D >> F;
	G = B*E;
	H = D*F;
	I = G+H;
	cout.precision(2);
	cout << "VALOR A PAGAR: R$ " << fixed << I << endl;

    return 0;
}
