#include <iostream>

const int MAX_TIEN_XU = 1000;
const int MAX_SO_TIEN = 100000;

int soLuongTien[MAX_SO_TIEN + 1];
int menhGiaTien[MAX_TIEN_XU];

using namespace std;

int main() {
    int soLoaiTien, soTienCanDoi;
    cout << "Nhap so loai tien xu: ";
    cin >> soLoaiTien;
    cout << "Nhap menh gia cua " << soLoaiTien << " loai tien xu: " << endl;
    for (int i = 0; i < soLoaiTien; ++i) {
        cout <<"Loai "<< i + 1 << ": ";
        cin >> menhGiaTien[i];
    }
    cout << "Nhap so tien can doi: ";
    cin >> soTienCanDoi;

    for (int i = 1; i <= soTienCanDoi; ++i) {
        soLuongTien[i] = MAX_SO_TIEN + 1;
    }

    soLuongTien[0] = 0;
    for (int i = 1; i <= soTienCanDoi; ++i) {
        for (int j = 0; j < soLoaiTien; ++j) {
            if (menhGiaTien[j] <= i && soLuongTien[i - menhGiaTien[j]] + 1 < soLuongTien[i]) {
                soLuongTien[i] = soLuongTien[i - menhGiaTien[j]] + 1;
            }
        }
    }
    cout << "Phuong an doi tien la:\n";
    int soTien = soTienCanDoi;
    for (int i = 0; i < soLoaiTien; ++i) {
        while (soTien >= menhGiaTien[i] && soLuongTien[soTien - menhGiaTien[i]] + 1 == soLuongTien[soTien]) {
            cout << menhGiaTien[i] << " dong" << endl;
            soTien -= menhGiaTien[i];
        }
    }

    cout << "Tong so dong tien doi duoc: " << soLuongTien[soTienCanDoi] << endl;

    return 0;
}

