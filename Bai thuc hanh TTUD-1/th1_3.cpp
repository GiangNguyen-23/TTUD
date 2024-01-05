#include<iostream>
using namespace std;
void Nhap(int a[],int n){
	for(int i=0;i<n;i++){
		do{
				cin>>a[i];
		}while(a[i]<0);
	}
}
void Xuat(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void SxTangDan(int a[],int n){
	for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
		if(a[i]<a[j]){
			int t=a[j];
			a[j]=a[i];
			a[i]=t;
		}
	}
	}
}
int HeightMax(int a[],int n){
	int d=0;
	SxTangDan(a,n);
	for(int i=0;i<n;i++){
		int s=0;
		for(int j=i+1;j<n;j++){
		s=s+1;
	}
	if(s<=a[i]) d++;
	else{
		d=a[i]+1;
		break;
	}
	}
    return d;
}
int main(){
	int n;
	do{
	cin>>n;
	}while(n>=10000);
	int a[n];
	Nhap(a,n);
	cout<<HeightMax(a,n);
}
