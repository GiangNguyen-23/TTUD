#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i+1<<"]= ";
		cin>>a[i];
	}
}
void hienthi(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void sx(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			
		}
	}
}
void yc(int a[],int k)
{
	for(int i=0;i<k;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<(a[k-1]-a[0]);
}
int main()
{
	int k,n,kc;
	
	cout<<"n = "; cin>>n;
	int a[n];
	cout<<"k = "; cin>>k;
	if(n>1 && k<n){
	nhap(a,n);
	cout<<"day da nhap la: ";
	hienthi(a,n);
	}else{
		cout<<"nhap sai du lieu";
	}
	cout<<endl;
	sx(a,n);
	cout<<"day duoc sap xep lai la:";
	hienthi(a,n);
	cout<<endl;
	yc(a,k);
}
