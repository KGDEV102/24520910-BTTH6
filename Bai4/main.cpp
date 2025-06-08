#include"DSNV.h"
#include"NV.h"
#include"dev.h"
#include"test.h"
int main() {
	DSNV ds;
	ds.Nhap();
	ds.Xuat();
	ds.NVCoLuongThapHonTB();
	ds.NVCoLuongCaoNhat();
	ds.NVCoLuongThapNhat();
	ds.DevCoLuongCaoNhat();
	ds.TestCoLuongThapNhat();
	return 0;
}
