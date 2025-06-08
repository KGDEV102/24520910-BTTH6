#include "SINHVIEN.h"
#include<string>
SINHVIEN::~SINHVIEN() {
	return;
}
SINHVIEN::SINHVIEN(string mssv, string ten, string dc, int tong, double dtb, double dtn) {
	mssv = mssv;
	HoTen = ten;
	DiaChi = dc;
	TongTC = tong;
	DTB = dtb;
	DTN = dtn;
}
void SINHVIEN::Nhap() {
	cout << "MSSV: ";
	cin >> mssv;
	cout << "Ho ten: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Dia chi: ";
	getline(cin, DiaChi);
	cout << "Tong tin chi: ";
	cin >> TongTC;
	cout << "Diem trung binh: ";
	cin >> DTB;
	cout << "Diem tot nghiep: ";
	cin >> DTN;
}
void SINHVIEN::Xuat(){
	cout << "MSSV: " << mssv << "\t Ho ten: " << HoTen << "\t Dia chi: " << DiaChi << "\tTong tin chi: " << TongTC << "\tDTB: " << DTB << "\tDTN" << DTN;
}
double SINHVIEN::GetDTB() {
	return DTB;
}
double SINHVIEN::GetDTN() {
	return DTN;
}
