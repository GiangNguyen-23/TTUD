#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A, B, C, D;
    
    cout << "Nhap gia tri A: ";
    cin >> A;
    cout << "Nhap gia tri B: ";
    cin >> B;
    cout << "Nhap gia tri C: ";
    cin >> C;
    cout << "Nhap gia tri D: ";
    cin >> D;
	double x=-1000;
	do{
		x+=0.00001;
	}while(A * x * x * x + B * x * x + C * x + D<0.0000000001);
		cout<<"x = "<<x<<endl;
		cout<<"f(x)= "<<A * x * x * x + B * x * x + C * x + D;
		


}

