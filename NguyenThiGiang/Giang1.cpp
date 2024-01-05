#include <iostream>
using namespace std;

int tim(int a[], int n){
    int s[10000];
    for(int i = 0; i < n; i++){
        s[i] = 1;
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[i] >= a[j] && s[i] < s[j] + 1){
                s[i] = s[j] + 1;
            }
        }
    }
    int max = 0;
    for(int i = 0; i < n; i++){
        if(s[i] > max){
            max = s[i];
        }
    }
    return max;
}

int main(){
    int n;
    cout << "Nhap so phan tu n= ";
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a[i];
    }
    cout << "Do dai day con khong giam dai nhat: " << tim(a, n);
    return 0;
}

