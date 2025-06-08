#include "NV.h"
#include<string>
NV::~NV() {
	return;
}
NV::NV(string ms, string ht, int tuoi, string sdt, string email, double luong) {
	ms = ms;
	HoTen = ht;
	tuoi = tuoi;
	sdt = sdt;
	email = email;
	luong = luong;
}
void NV::Nhap() {
	cout << "Ma so: ";
	cin.ignore();
	getline(cin, ms);
	cout << "Ho ten: ";
	getline(cin, HoTen);
	cout << "Tuoi: ";
	cin >> tuoi;
	cin.ignore();
	cout << "SDT: ";
	cin >> sdt;
	cin.ignore();
	cout << "Email: ";
	cin >> email;
	cout << "Luong: ";
	cin >> luong;
}
void NV::Xuat() {
	cout << "MS: " << ms << "\tHo ten: " << HoTen << "\tTuoi: " << tuoi << "\tSDT: " << sdt << "\tEmail: " << email << "\tLuong: " << GetLuong();
}
