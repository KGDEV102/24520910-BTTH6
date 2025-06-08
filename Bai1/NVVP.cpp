#include "NVVP.h"
#include<string>
NVVP::~NVVP() {
	return;
}
NVVP::NVVP(string ht, string ns, double luong, int songay) :NV(ht, ns, luong), SoNgayLamViec(songay) {

}
void NVVP::Nhap() {
	NV::Nhap();
	cout << "So ngay lam viec: ";
	cin >> SoNgayLamViec;
}
void NVVP::Xuat() {
	NV::Xuat();
	cout << "\tSo ngay lam viec: " << SoNgayLamViec << endl;
}
double NVVP::GetLuong() {
	return SoNgayLamViec * 100000;
}
string NVVP::GetLoai() {
	return "NVVP";
}
