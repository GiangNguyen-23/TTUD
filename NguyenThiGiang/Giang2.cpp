#include <iostream>
#include <map>
using namespace std;

using namespace std;
map<int, long long> F;

long long f(long long n) {
    if (n <= 3)
        return F[n];

    int k = n / 4;

    if (n % 4 == 0) {
        F[n] = F[3 * k] > 0 ? F[3 * k] : f(3 * k);
    } else if (n % 4 == 1) {
        F[n] = (F[3 * k] > 0 ? F[3 * k] : f(3 * k)) + (F[3 * k + 1] > 0 ? F[3 * k + 1] : f(3 * k + 1));
    } else if (n % 4 == 2) {
        F[n] = (F[3 * k] > 0 ? F[3 * k] : f(3 * k)) + (F[3 * k + 2] > 0 ? F[3 * k + 2] : f(3 * k + 2));
    } else {
        F[n] = (F[3 * k] > 0 ? F[3 * k] : f(3 * k)) + (F[3 * k + 3] > 0 ? F[3 * k + 3] : f(3 * k + 3));
    }

    return F[n];
}

int main() {
    F[0] = 0;
    F[1] = 1;
    F[2] = 2;
    F[3] = 3;

    long long n;
    cout << "Nhap n = ";
    cin >> n;

    cout << "g(" << n << ") = " << f(n);

    return 0;
}

