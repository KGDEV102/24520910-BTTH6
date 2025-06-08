#include "QUANLYNHANVIEN.h"
#include"algorithm"

QUANLYNHANVIEN::~QUANLYNHANVIEN() {
	for (int i = 0; i < sl; i++) {
		delete dsnv[i];
	}
	delete[]dsnv;
	dsnv = NULL;
	sl = 0;
}
QUANLYNHANVIEN::QUANLYNHANVIEN() {
	dsnv = NULL;
	sl = 0;
}

void QUANLYNHANVIEN::Nhap() {
	cout << "Nhap so luong nhan vien: ";
	cin >> sl;
	dsnv =new NV* [sl];
	for (int i = 0; i < sl; i++) {
		int loai;
		do {
			cout << "Nhap loai nhan vien (1. NVSX, 2. NVVP): ";
			cin >> loai;
		} while (loai != 1 && loai != 2);
		if (loai == 1) {
			dsnv[i] = new NVSX;
		}
		else {
			dsnv[i] = new NVVP;
		}
		dsnv[i]->Nhap();
		
	}
}
void QUANLYNHANVIEN::Xuat() {
	for (int i = 0; i < sl; i++) {
		dsnv[i]->Xuat();
	}
}
double QUANLYNHANVIEN::TongLuong() {
	double Tong = 0;
	for (int i = 0; i < sl; i++) {
		Tong += dsnv[i]->GetLuong();
	}
	return Tong;
}
void QUANLYNHANVIEN::NVSXCoLuongThapNhat() {
	double LuongMin = INT_MAX;
	for (int i = 0; i < sl; i++) {
		if (dsnv[i]->GetLoai() == "NVSX") {
			LuongMin = min(LuongMin, dsnv[i]->GetLuong());
		}
		
	}
	cout << "Nhan vien san xuat co luong thap nhat: ";
	for (int i = 0; i < sl; i++) {
		if (dsnv[i]->GetLoai() == "NVSX") {
			if (dsnv[i]->GetLuong() == LuongMin) {
				dsnv[i]->Xuat();
			}
		}
	}
}
void QUANLYNHANVIEN::NVVPCoTuoiCaoNhat() {
	int TuoiMax = 0;
	for (int i = 0; i < sl; i++) {
		if (dsnv[i]->GetLoai() == "NVVP") {
			TuoiMax = max(TuoiMax, dsnv[i]->GetTuoi());
		}
	}
	cout << "Nhan vien van phong co tuoi cao nhat: ";
	for (int i = 0; i < sl; i++) {
		if (dsnv[i]->GetLoai() == "NVVP") {
			if (dsnv[i]->GetTuoi() == TuoiMax) {
				dsnv[i]->Xuat();
			}
		}
	}
}
