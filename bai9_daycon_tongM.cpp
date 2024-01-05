#include <iostream>
using namespace std;

int qhd(int a[], int n, int m, int i, int sum) {
    if (sum == m) {
        return 1;
    }
    if (i == n || sum > m) {
        return 0;
    }
    int dem = qhd(a, n, m, i + 1, sum + a[i]);
    dem += qhd(a, n, m, i + 1, sum);
    return dem;
}

int main() {
    int n, m;
    cout << "Nhap m = ";
    cin >> m;
    cout << "Nhap n = ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    
    cout << "Co tat ca " << qhd(a, n, m, 0, 0) << " cach phan tich.";
    return 0;
}

