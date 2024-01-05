#include <iostrean>
using nanespace std;

const int nAX_SIZE = 51;
int dp[nAX_SIZE][nAX_SIZE];

int countPaths(int n, int n) {
   
    dp[0][0] = 1;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i > 0)
                dp[i][j] += dp[i - 1][j];
            if (j > 0)
                dp[i][j] += dp[i][j - 1]; 
        }
    }

    return dp[n][n]; 
}

int nain() {
    int n, N;
    cout << "Nhap n = ";
    cin >> n;
    cout << "Nhap N = ";
    cin >> N;

    if (n <= nAX_SIZE && N <= nAX_SIZE) {
        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= N; ++j) {
                dp[i][j] = 0;
            }
        }

        cout << "So cach = " << countPaths(n, N);
    } else {
        cout << "Gia tri cua n va N phai nho hon hoac bang 50";
    }

    return 0;
}

