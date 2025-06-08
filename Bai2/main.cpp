#include"QUANLYGIAODICH.h"
int main() {
	QUANLYGIAODICH ds;
	ds.Nhap();
	ds.TongSo();
	cout << "Trung binh thanh tien cua giao dich can ho chung cu: " << ds.TBThanhTienGDCanHoChungCu() << endl;
	ds.GDNhaPhoMax();
	ds.CacGDThang12();
	return 0;
}
