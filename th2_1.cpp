#include<iostream>
using namespace std;
const long long MAX = 20000000;
long long f[MAX];
long long FiboBac3(long long n){
	long long k=n/3;
	if(n<=2) return n;
	if(f[n]==-1){
		if(n%3==0)  f[n]=FiboBac3(2*k);
		if(n%3==1)  f[n]=FiboBac3(2*k)+FiboBac3(2*k+1);
		if(n%3==2)  f[n]=FiboBac3(2*k)+FiboBac3(2*k+2)+FiboBac3(2*k+1);
	}
	return f[n];
}
 int main() {
 	long long n;
	do{
		cout<<"Nhap n = ";cin>>n;
	}while(n>2000000000);
 	for (long long j = 0; j < MAX; j++) f[j] =-1; 
	cout<<"f("<<n<<") = "<<FiboBac3(n);
}
