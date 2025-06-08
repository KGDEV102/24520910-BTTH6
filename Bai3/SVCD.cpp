#include "SVCD.h"
string SVCD::GetLoai() {
	return "SVCD";
}
bool SVCD::isTN() {
	if (TongTC >= 120 && DTB >= 5 && DTN >= 5) return true;
	return false;
}
