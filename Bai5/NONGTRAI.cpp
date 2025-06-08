#include<iostream>
#include<algorithm>
#include<set>
#include"Thu.h"
#include"Bo.h"
#include"Cuu.h"
#include"De.h"
#include<iomanip>
#include "NONGTRAI.h"
NONGTRAI::~NONGTRAI() {
	for (int i = 0; i < sl; i++) {
		delete dst[i];
	}
	delete[] dst;
	dst = NULL;
	sl = 0;
}
NONGTRAI::NONGTRAI() {
	sl = 0;
	dst = NULL;
}
void NONGTRAI::Nhap() {
	cout << "Nhap so luong thu: ";
	cin >> sl;
	dst =new Thu* [sl];
	int loai;
	for (int i = 0; i < sl; i++) {
		cout << "Nhap thu thu " << i + 1 << ": \n";
		do {
			cout << "Nhap loai (1. Bo, 2. De, 3. Cuu): ";
			cin >> loai;
		} while (loai != 1 && loai != 2 && loai != 3);
		if (loai == 1) {
			dst[i] = new Bo;
		}
		else if (loai == 2) {
			dst[i] = new De;
		}
		else {
			dst[i] = new Cuu;
		}
	}
}
void NONGTRAI::Xuat() {
	set<string>TiengKeu;
	cout << "Tieng keu cua cac con thu trong nong trai lan luot la: " << endl;
	for (int i = 0; i < sl; i++) {
		TiengKeu.insert(dst[i]->Keu());
	}
	for (string x : TiengKeu) {
		cout << x << ", ";
	}
	cout << endl;
}
int NONGTRAI::TongConSinhRa() {
	int tong = 0;
	for (int i = 0; i < sl; i++) {
		tong += dst[i]->SinhCon();
	}
	return tong;
}
int NONGTRAI::TongLuongSua() {
	int tong = 0;
	for (int i = 0; i < sl; i++) {
		tong += dst[i]->ChoSua();
	}
	return tong;
}
 
