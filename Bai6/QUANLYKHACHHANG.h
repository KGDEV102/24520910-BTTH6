#pragma once
#include"LOAIA.h"
#include"LOAIB.h"
#include"LOAIC.h"
#include<fstream>
#include<string>
class QUANLYKHACHHANG
{
private:
	int x, y, z;
	LOAIA** dsLoaiA;
	LOAIB** dsLoaiB;
	LOAIC** dsLoaiC;
public:
	void DocFile(string);
	void GhiFile(string);
	void Xuat();
};

