#include "test.h"
#include"NV.h"
test::~test() {
	return;
}
test::test(string ms, string ht, int tuoi, string sdt, string email, double luong, int error) :NV(ms, ht, tuoi, sdt, email, luong), error(error) {

}
void test::Nhap() {
	NV::Nhap();
	cout << "So loi phat hien duoc: ";
	cin >> error;
}
void test::Xuat() {
	NV::Xuat();
	cout << "\tSo loi phat hien duoc: " << error;
}
double test::GetLuong() {
	return luong + error * 50000;
}
string test::GetLoai() {
	return "test";
}
