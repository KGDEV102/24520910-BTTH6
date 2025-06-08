#include "dev.h"
#include"NV.h"
dev::~dev() {
	return;
}
dev::dev(string ms, string ht, int tuoi, string sdt, string email, double luong, int ovrt):NV(ms,ht,tuoi,sdt,email,luong),overtime(ovrt) {

}
void dev::Nhap() {
	NV::Nhap();
	cout << "So gio overtime: ";
	cin >> overtime;
}
void dev::Xuat() {
	NV::Xuat();
	cout << "\tSo gio overtime: " << overtime;
}
double dev::GetLuong() {
	return luong + overtime * 200000;
}
string dev::GetLoai() {
	return "dev";
}
