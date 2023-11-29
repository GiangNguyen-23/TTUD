#include <iostream>
#include <cmath>
#include <string>
#include<algorithm>
//find tim gia tri trong doan 

using namespace std;

int interpolation_search(int a[], int l, int r, int x) {
	while (l <= r) {
		int m = l + (x - a[l]) * ((r - l) / (a[r] - a[l]));
		if (a[m] == x) 
			return m;
		if (a[m] < x) 
			l = m + 1;
		else r = m - 1;
	}
	return -1;
}
int main()
{
	int n,k;
	int arr[n];
	cout<<"Nhap so phan tu cua arr n = "; cin>>n;
	cout<<"Phan tu thu k = "; cin>>k;
	
	for(int i=0;i<n;i++)
	{
		cout<<"arr["<<i+1<<"] = ";
		cin>>arr[i];
	}
	cout<<"Phan thu "<<k<<" cua day la: "<<interpolation_search(arr,0,n,k);
}

