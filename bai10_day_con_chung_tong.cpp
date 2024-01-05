#include <iostream>
using namespace std;

int timTongConChungLonNhat(int mangA[], int m, int mangB[], int n) {
    int dp[n + 1];
    int truoc, tam;

    for (int i = 0; i <= m; i++) {
        truoc = dp[0];
        for (int j = 0; j <= n; j++) {
            tam = dp[j];

            if (i == 0 || j == 0)
                dp[j] = 0;
            else if (mangA[i - 1] == mangB[j - 1])
                dp[j] = truoc + mangA[i - 1];
            else
                dp[j] = max(dp[j], dp[j - 1]);

            truoc = tam;
        }
    }

    return dp[n];
}

int main() {
    int m, n;
    cout << "Nhap m = "; cin >> m;
    int mangA[m];
    for (int i = 0; i < m; i++) {
        cout << "a[" << i + 1 << "] = "; cin >> mangA[i];
    }

    cout << "Nhap n = "; cin >> n;
    int mangB[n];
    for (int i = 0; i < n; i++) {
        cout << "b[" << i + 1 << "] = "; cin >> mangB[i];
    }

    int tongLonNhat = timTongConChungLonNhat(mangA, m, mangB, n);
    cout << "Day con co tong lon nhat = " << tongLonNhat;

    return 0;
}

