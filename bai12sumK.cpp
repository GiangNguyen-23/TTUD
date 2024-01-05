#include<iostream>
using namespace std;

const int MAX = 1000;
int dp[MAX][MAX];

int f(int k, int n) {
    if (n == 1)
        if (k == 1) return 1;
        else return 0;

    if (dp[k][n] != -1)
        return dp[k][n];

    int h = k - n;
    if (h == 0) return dp[k][n] = f(k, n - 1) + 1;
    else {
        if (h < n) return dp[k][n] = f(k, n - 1) + f(h, h);
        else return dp[k][n] = f(k, n - 1) + f(h, n - 1);
    }
}

int main() {
    int k;
    cout << "Nhap k = ";
    cin >> k;
    for (int i = 0; i <= k; ++i) {
        for (int j = 0; j <= k; ++j) {
            dp[i][j] = -1;
        }
    }

    cout << "Co tat ca " << f(k, k) - 1 << " cach phan tich.";

    return 0;
}

