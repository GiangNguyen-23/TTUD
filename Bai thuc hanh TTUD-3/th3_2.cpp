#include <iostream>
using namespace std;

const int MAX = 100;
int a[MAX], n;

void print(int k) {
    cout << n << " = ";
    for (int i = 1; i <= k; i++) {
        if (i != 1) cout << "+";
        cout << a[i];
    }
    cout << endl;
}

void gen(int k, int sum) {
    if (sum == n) {
        print(k - 1);
        return;
    }

    for (int i = min(a[k - 1], n - sum); i >= 1; i--) {
        a[k] = i;
        gen(k + 1, sum + i);
    }
}

int main() {
    cout << "Nhap n = ";
    cin >> n;

    a[0] = n + 1;
    gen(1, 0);

    return 0;
}

