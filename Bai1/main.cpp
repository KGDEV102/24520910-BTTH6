#include"QUANLYNHANVIEN.h"
int main() {
	QUANLYNHANVIEN ds;
	ds.Nhap();
	ds.Xuat();
	cout << "Tong luong cua cac nhan vien: " << ds.TongLuong() << endl;
	ds.NVSXCoLuongThapNhat();
	ds.NVVPCoTuoiCaoNhat();
	return 0;
}
