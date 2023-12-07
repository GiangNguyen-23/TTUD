#include<iostream>
#include <unordered_map>
using namespace std;
unordered_map<int, long long> F;
long long f(long long n) {
	if (n <= 2)
		return F[n];
	int k = n / 3;
	if (n % 3 == 0) {
		F[n] = F[2 * k] > 0 ? F[2 * k] : f(2 * k);
	}
	if (n % 3 == 1) {
		F[n] = (F[2 * k] > 0 ? F[2 * k] : f(2 * k)) + (F[2 * k + 1] > 0 ? F[2 * k + 1] : f(2 * k + 1));
	}
	if (n % 3 == 2) {
		F[n] = (F[2 * k] > 0 ? F[2 * k] : f(2 * k)) + (F[2 * k + 1] > 0 ? F[2 * k + 1] : f(2 * k + 1)) + (F[2 * k + 2] > 0 ? F[2 * k + 2] : f(2 * k + 2));
	}
	return F[n];

}
int main() {
	F[0] = 0;
	F[1] = 1;
	F[2] = 2;
	long long n;
	cout << "Nhap n = ";
	cin >> n;

	cout << "f(" << n << ") = " << f(n);

	return 0;
}