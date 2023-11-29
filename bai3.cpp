#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n)
{
	if(n>0)
	{
		for(int i=0;i<n;i++)
		{
			cout<<"a["<<i+1<<"]= ";
			cin>>a[i];
		}
	}else{
		cout<<"nhap n sai";
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
void hienthi(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void kc(int a[],int n)
{
	int  minkc = abs(a[0]-a[1]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int k =abs(a[i]-a[j]);
			if(k<minkc)
			{
			k=minkc;
			}
		}
	}
	cout<<"cac cap chenh lech la: ";
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int k =abs(a[i]-a[j]);
			if(k == minkc)
			{
				cout<<" ("<<a[i]<<", "<<a[j]<<")";
			}
		}
	}
}
int main()
{
	int n;
	cout<<"n = "; cin>>n;
	int a[n];
	nhap(a,n);
	cout<<"day da nhap la: ";
	hienthi(a,n);
	cout<<endl;
	sx(a,n);
	cout<<"day duoc sap xep la: ";
	hienthi(a,n);
	cout<<endl;
	kc(a,n);	
}

