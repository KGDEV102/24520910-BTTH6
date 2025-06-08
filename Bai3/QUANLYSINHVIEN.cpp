#include "QUANLYSINHVIEN.h"
#include"SVCD.h"
#include"SVDH.h"
QUANLYSINHVIEN::~QUANLYSINHVIEN() {
	for (int i = 0; i < sl; i++) {
		delete dssv[i];
	}
	delete[] dssv;
	dssv = NULL;
	sl = 0;
}
QUANLYSINHVIEN::QUANLYSINHVIEN() {
	dssv = NULL;
	sl = 0;
}
void QUANLYSINHVIEN::Nhap() {
	cout << "Nhap so luong sinh vien: ";
	cin >> sl;
	dssv = new SINHVIEN * [sl];
	int loai;
	for (int i = 0; i < sl; i++) {
		cout << "Nhap loai (1. SVCD, 2.SVDH ): ";
		cin >> loai;
		if (loai == 1) {
			dssv[i] = new SVCD;
		}
		else {
			dssv[i] = new SVDH;
		}
		dssv[i]->Nhap();
	}
}
void QUANLYSINHVIEN::Xuat() {
	for (int i = 0; i < sl; i++) {
		dssv[i]->Xuat();
		cout << endl;
	}
}
void QUANLYSINHVIEN::SVDuDKTN() {
	cout << "Sinh vien du dieu kien tot nghiep: " << endl;
	for (int i = 0; i < sl; i++) {
		if (dssv[i]->isTN()) {
			dssv[i]->Xuat();
			cout << endl;
		}
	}
}
void QUANLYSINHVIEN::SVKhongDuDKTN() {
	cout << "Sinh vien khong du dieu kien tot nghiep: " << endl;
	for (int i = 0; i < sl; i++) {
		if (!dssv[i]->isTN()) {
			dssv[i]->Xuat();
			cout << endl;
		}
	}
}
void QUANLYSINHVIEN::SVDHMax() {
	double dtb_max = INT_MIN;
	for (int i = 0; i < sl; i++) {
		if (dssv[i]->GetLoai() == "SVDH") {
			dtb_max = max(dtb_max, dssv[i]->GetDTB());
		}
		
	}
	cout << "Sinh vien dai hoc co diem trung binh cao nhat: " << endl;
	for (int i = 0; i < sl; i++) {
		if (dssv[i]->GetLoai() == "SVDH") {
			if (dssv[i]->GetDTB() == dtb_max) {
				dssv[i]->Xuat();
				cout << endl;
			}
		}
	}
}
void QUANLYSINHVIEN::SVCDMax() {
	double dtb_max = INT_MIN;
	for (int i = 0; i < sl; i++) {
		if (dssv[i]->GetLoai() == "SVCD") {
			dtb_max = max(dtb_max, dssv[i]->GetDTB());
		}

	}
	cout << "Sinh vien cao dang co diem trung binh cao nhat: " << endl;
	for (int i = 0; i < sl; i++) {
		if (dssv[i]->GetLoai() == "SVCD") {
			if (dssv[i]->GetDTB() == dtb_max) {
				dssv[i]->Xuat();
				cout << endl;
			}
		}
	}
}
void QUANLYSINHVIEN::SLSVKhongDuDKTN() {
	int cnt1 = 0;
	int cnt2 = 0;
	for (int i = 0; i < sl; i++) {
		if (dssv[i]->GetLoai() == "SVDH") {
			if (!dssv[i]->isTN()) ++cnt1;
		}
		else {
			if (!dssv[i]->isTN()) ++cnt2;
		}
	}
	cout << "So luong sinh vien dai hoc khong du dieu kien tot nghiep la: " << cnt1 << endl;
	cout << "So luong sinh vien cao dang khong du dieu kien tot nghiep la: " << cnt2 << endl;
}
