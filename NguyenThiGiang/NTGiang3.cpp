#include <iostream>

using namespace std;

int findX(int n) {
    int X0 = 1, Y0 = 0, Xn, Yn;

    if (n == 0) {
        return X0;
    }

    for (int i = 1; i <= n; ++i) {
        Xn = X0 + Y0;
        Yn = 3 * X0 + 2 * Y0;

        X0 = Xn;
        Y0 = Yn;
    }

    return Xn;
}

int findY(int n) {
    int X0 = 1, Y0 = 0, Xn, Yn;

    if (n == 0) {
        return Y0;
    }

    for (int i = 1; i <= n; ++i) {
        Xn = X0 + Y0;
        Yn = 3 * X0 + 2 * Y0;

        X0 = Xn;
        Y0 = Yn;
    }

    return Yn;
}

int main() {
    int n;
    cout << "Nhap gia tri n: ";
    cin >> n;

    int Xn = findX(n);
    int Yn = findY(n);

    cout << "So hang thu " << n << " cua X la: " << Xn << endl;
    cout << "So hang thu " << n << " cua Y la: " << Yn << endl;

    return 0;
}

