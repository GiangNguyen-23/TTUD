#include <iostream>
using namespace std;


long long csc(long long a[], int n) {
    int count = 0;
    for (int i = 0; i < n - 4; ++i) {
        for (int j = i + 1; j < n - 3; ++j) {
            long long diff = a[j] - a[i];
            long long t1 = a[j] + diff;
            long long t2 = t1 + diff;
            long long t3 = t2 + diff;
            
            int f1 = 0;
            int f2 = 0;
            int f3 = 0;

            for (int k = j + 1; k < n; ++k) {
                if (a[k] == t1) {
                    f1 = 1;
                }
                if (a[k] == t2) {
                    f2 = 1;
                }
                if (a[k] == t3) {
                    f3 = 1;
                } 
				  
            }
            if (f1 && f2 && f3 ) {
                count++;
            }
        }
    }
    return count;
}
void sapxep(long long a[], int n)
{
	for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (a[j] > a[j + 1]) {
                    long long t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }
}
int main() {
    int n;
    cin >> n;

    if (n < 200) {
        long long a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sapxep(a,n);
        int number = csc(a, n);
        cout << number;
    }
    return 0;
}

