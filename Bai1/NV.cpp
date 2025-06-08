#include "NV.h"
#include<string>	
NV::~NV() {
	return;
}
NV::NV(string ht, string ns, double luong) {
	HoTen = ht;
	NgaySinh = ns;
	luong = luong;
}
void NV::Nhap() {
	cin.ignore();
	cout << "Ho ten: ";
	getline(cin, HoTen);
	cout << "Ngay sinh (dd//mm/yyyy):  ";
	cin >> NgaySinh;
	cout << "Luong can ban: ";
	cin >> luong;
}
void NV::Xuat() {
	cout << "Ho ten: " << HoTen << "\tNgay sinh: " << NgaySinh << "\tLuong: " << GetLuong();
}
int NV::GetTuoi() {
	time_t now = time(0);     // Lấy thời gian hiện tại (số giây từ 1970)
	struct tm ltm;            // Tạo biến tm để chứa thời gian đã phân tích

	localtime_s(&ltm, &now);   // Dùng localtime_s thay vì localtime

	int year = 1900 + ltm.tm_year;  // Lấy năm hiện tại
	int NamSinh = stoi(NgaySinh.substr(NgaySinh.length() - 4));
	return year - NamSinh;
}
