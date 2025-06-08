#include"NONGTRAI.h"
int main() {
	NONGTRAI ds;
	ds.Nhap();
	ds.Xuat();
	cout << "Tong luong sua: " << ds.TongLuongSua() << endl;
	cout << "Tong con sinh ra: " << ds.TongConSinhRa() << endl;
	return 0;
}
