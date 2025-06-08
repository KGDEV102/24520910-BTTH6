#include "NVSX.h"
#include<ctime>
#include"string.h"
#include <string>

NVSX::~NVSX() {
	return;
}
NVSX::NVSX(string ht, string ns, double luong, int sosp) :NV(ht, ns, luong), SoSP(sosp) {

}
void NVSX::Nhap() {
	NV::Nhap();
	cout << "So san pham: ";
	cin >> SoSP;
}
void NVSX::Xuat() {
	NV::Xuat();
	cout << "\tSo san pham: " << SoSP << endl;
}
double NVSX::GetLuong() {
	return luong + SoSP * 5000;
}
string NVSX::GetLoai() {
	return "NVSX";
}
