#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,k;
	int count=0;
	cout<<"so phan tu trong A: ";cin>>n;
	cout<<"so nguyen duong k: "; cin>>k;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cout<<"A["<<i+1<<"] = ";
		cin>>A[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(abs(A[j]-A[i])==k){
				count++;
			}
		}
	}
	cout<<"so phan tu chen lech la: "<<count;
}
