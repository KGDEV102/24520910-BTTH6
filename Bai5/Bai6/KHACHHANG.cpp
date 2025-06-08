#include "KHACHHANG.h"
#include<string>
KHACHHANG::	~KHACHHANG() {
	return;
}
KHACHHANG::KHACHHANG(string ten, int sl, double dg) {
	ten = ten;
	SoLuong = sl;
	DonGia = dg;
	
}
void KHACHHANG::Nhap() {
	cout << "Ten: ";
	getline(cin, ten);
	cout << "So Luong: ";
	cin >> SoLuong;
	cout << "Don gia: ";
	cin >> DonGia;
}
void KHACHHANG::Xuat() {
	cout << "Khach hang: " << ten << endl << "So tien phai tra: " << SoTienPhaiTra() << endl;
}
string KHACHHANG::GetTen() {
	return ten;
}
int KHACHHANG::GetSoLuong() {
	return SoLuong;
}
double KHACHHANG::GetDonGia() {
	return DonGia;
}
