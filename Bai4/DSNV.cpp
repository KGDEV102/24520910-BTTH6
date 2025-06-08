#include "DSNV.h"
#include"dev.h"
#include"test.h"
#include<algorithm>
DSNV::~DSNV() {
	for (int i = 0; i < sl; i++) {
		delete dsnv[i];
	}
	delete[]dsnv;
	dsnv = NULL;
	sl = 0;
}
DSNV::DSNV(){
	sl = 0;
	dsnv = NULL;
}
void DSNV::Nhap() {
	cout << "Nhap so luong nhan vien: ";
	cin >> sl;
	dsnv =new NV* [sl];
	int loai;
	for (int i = 0; i < sl; i++) {
		
		do {
			cout << "Nhap loai nhan vien (1. dev, 2. test): ";
			cin >> loai;
		} while (loai != 1 && loai != 2);
		if (loai == 1) {
			dsnv[i] = new dev;
		}
		else {
			dsnv[i] = new test;
		}
		dsnv[i]->Nhap();
	}
	
}
void DSNV::Xuat() {
	for (int i = 0; i < sl; i++) {
		dsnv[i]->Xuat();
		cout << endl;
	}
}
void DSNV::NVCoLuongThapHonTB() {
	bool check = false;
	double LuongTB = 0;
	for (int i = 0; i < sl; i++) {
		LuongTB += dsnv[i]->GetLuong();
	}
	LuongTB = LuongTB / sl;
	
	cout << "Nhan vien co luong thap hon TB: " << endl;
	for (int i = 0; i < sl; i++) {
		
		if (dsnv[i]->GetLuong() < LuongTB) {
			
			check = true;
			dsnv[i]->Xuat();
			cout << endl;
			
		}
	}
	if (!check) {
		cout << "Khong co nhan vien nao co luong thap hon TB\n";
	}
}
void DSNV::NVCoLuongCaoNhat() {
	double LuongMax = 0;
	for (int i = 0; i < sl; i++) {
		LuongMax = max(LuongMax, dsnv[i]->GetLuong());
	}
	cout << endl;
	cout << "Nhan vien co luong cao nhat: " << endl;
	for (int i = 0; i < sl; i++) {
		if (dsnv[i]->GetLuong() == LuongMax) {
			dsnv[i]->Xuat();
		}
	}
}
void DSNV::NVCoLuongThapNhat() {
	double LuongMin = INT_MAX;
	for (int i = 0; i < sl; i++) {
		LuongMin = min(LuongMin, dsnv[i]->GetLuong());
	}
	cout << endl;
	cout << "Nhan vien co luong thap nhat: " << endl;
	for (int i = 0; i < sl; i++) {
		if (dsnv[i]->GetLuong() == LuongMin) {
			dsnv[i]->Xuat();
		}
	}
}
void DSNV::DevCoLuongCaoNhat() {
	double LuongMax = 0;
	for (int i = 0; i < sl; i++) {
		if (dsnv[i]->GetLoai() == "dev") {
			LuongMax = max(LuongMax, dsnv[i]->GetLuong());
		}
		
	}
	cout << endl;
	cout << "Lap trinh vien co luong cao nhat: " << endl;
	for (int i = 0; i < sl; i++) {
		if (dsnv[i]->GetLoai() == "dev") {
			if (dsnv[i]->GetLuong() == LuongMax) {
				dsnv[i]->Xuat();
			}
		}
		
	}
}
void DSNV::TestCoLuongThapNhat() {
	double LuongMin = INT_MAX;
	for (int i = 0; i < sl; i++) {
		if (dsnv[i]->GetLoai() == "test") {
			LuongMin = min(LuongMin, dsnv[i]->GetLuong());
		}

	}
	cout << endl;
	cout << "Kiem chung vien co luong thap nhat: " << endl;
	for (int i = 0; i < sl; i++) {
		if (dsnv[i]->GetLoai() == "test") {
			if (dsnv[i]->GetLuong() == LuongMin) {
				dsnv[i]->Xuat();
			}
		}

	}
}
