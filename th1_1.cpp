#include <iostream>
using namespace std;
long long fibo(long long K) {
    if (K <= 0) {
        return 0;  
    }
    long long a = 0;
    long long b = 1;
    while (b <= K) {
        long long c = b;
        b = a + b;
        a = c;
    }
    return b;
}
int main() {
    long long K;
    cin >> K;
    long long n = fibo(K);
    cout <<n;
    return 0;
}
