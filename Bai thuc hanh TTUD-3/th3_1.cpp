#include <iostream>
using namespace std;
const int MAX= 100;
int a[MAX], n, m,p=0;
int sum;
void print()
{	
	sum = 0;
	for(int i = 1;i<=n;i++){
		sum+=a[i];
	}
	if(sum == n){
		cout << n << " = "<<a[1];
		for(int i =2; i <= m; i++) {
			cout << "+"<<a[i];
		}
			cout << endl;
	
	}
}
	void gen(int k)
{
		
	if (k> m){ print(); return;}
	for(int i = 1; i <= n-p-m+k; i++)
	{
		a[k]= i; 
		p=p+a[k];
		gen(k+1);
		p=p-a[k];
	}
}
int main(){
	cout << "Nhap n = "; cin >> n;
	cout << "Nhap m = "; cin >> m;
	gen(1); 
}

