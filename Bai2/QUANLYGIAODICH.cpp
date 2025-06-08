#include "QUANLYGIAODICH.h"
QUANLYGIAODICH::~QUANLYGIAODICH() {
	for (int i = 0; i < sl; i++) {
		delete dsgd[i];
	}
	delete[] dsgd;
	dsgd = NULL;
	sl = 0;
}
QUANLYGIAODICH::QUANLYGIAODICH() {
	sl = 0;
	dsgd = NULL;
}
void QUANLYGIAODICH::Nhap() {
	cout << "Nhap so luong giao dich: ";
	cin >> sl;
	dsgd = new GiaoDich* [sl];
	for (int i = 0; i < sl; i++) {
		int loai;
		do {
			cout << "Nhap loai giao dich (1. gd dat, 2. gd Nha pho, 3. gd Can ho chung cu): ";
			cin >> loai;
		} while (loai < 1 && loai>3);
		if (loai == 1) {
			dsgd[i] = new GiaoDichDat;
		}
		else if (loai == 2) {
			dsgd[i] = new GiaoDichNhaPho;
		}
		else {
			dsgd[i] = new GiaoDichCanHoChungCu;
		}
		dsgd[i]->Nhap();
	}
}
void QUANLYGIAODICH::TongSo() {
	int cnt1 = 0;
	int cnt2 = 0;
	int cnt3 = 0;
	for (int i = 0; i < sl; i++) {
		if (dsgd[i]->GetLoai() == "Dat") {
			++cnt1;
		}
		else if (dsgd[i]->GetLoai() == "NhaPho") {
			++cnt2;
		}
		else {
			++cnt3;
		}
	}
	cout << "Co " << cnt1 << " giao dich dat " << endl;
	cout << "Co " << cnt2 << " giao dich nha pho " << endl;
	cout << "Co " << cnt3 << " giao dich can ho chung cu " << endl;
}
double QUANLYGIAODICH::TBThanhTienGDCanHoChungCu() {
	double tong = 0;
	for (int i = 0; i < sl; i++) {
		if (dsgd[i]->GetLoai() == "CanHoChungCu") {
			tong += dsgd[i]->ThanhTien();
		}
		
	}
	return tong / sl;
}
void QUANLYGIAODICH::GDNhaPhoMax() {
	double ThanhTienMax = 0;
	for (int i = 0; i < sl; i++) {
		if (dsgd[i]->GetLoai() == "NhaPho") {
			ThanhTienMax = max(ThanhTienMax, dsgd[i]->ThanhTien());
		}
	}
	cout << "Giao dich Nha pho co thanh tien cao nhat: ";
	for (int i = 0; i < sl; i++) {
		if (dsgd[i]->GetLoai() == "NhaPho") {
			if (dsgd[i]->ThanhTien() == ThanhTienMax) {
				dsgd[i]->Xuat();
				cout << endl;
			}
		}
	}
}
void QUANLYGIAODICH::CacGDThang12() {
	bool check = false;
	
	for (int i = 0; i < sl; i++) {
		if (dsgd[i]->GetNgay().substr(3) == "12/2024") {
			cout << "Cac giao dich cua thang 12 nam 2024: " << endl;
			check = true;
			dsgd[i]->Xuat();
			cout << endl;
		}
	}
	if (!check) {
		cout << "Khong co giao dich nao cua thang 12 nam 2024 \n";
	}
}
