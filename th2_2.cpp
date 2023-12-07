#include <iostream>
using namespace std;

long long g(int k) {
    if (k == 1) return 1;  
    if (k == 3) return 3;  
        if (k % 2 == 0) {
        	int n=k/2;
            return g(n);
        } else if (k % 4 == 1) {
        	int n=k/4;
            return 2 * g(2 * n + 1) - g(n);
        } else if (k % 4 == 3) {
        	int n=k/4;
            return 3 * g(2 * n + 1) - 2 * g(n);
        }
}
int main() {
    int n;
	cout<<"Nhap n = ";
	cin>>n;
	cout<<"g("<<n<<") = "<<g(n);
}

