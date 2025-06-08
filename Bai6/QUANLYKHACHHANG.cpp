#include "QUANLYKHACHHANG.h"
#include<string>
void QUANLYKHACHHANG::GhiFile(string tenfile) {
	ofstream outputFile(tenfile);
	if (!outputFile.fail()) {
		outputFile << x<<" "<< y <<" "<< z << endl;
		for (int i = 0; i < x; i++) {
			outputFile << dsLoaiA[i]->GetTen() << endl << dsLoaiA[i]->SoTienPhaiTra() << endl;
		}
		for (int i = 0; i < y; i++) {
			outputFile << dsLoaiB[i]->GetTen() << endl << dsLoaiB[i]->SoTienPhaiTra() << endl;
		}
		for (int i = 0; i < z; i++) {
			outputFile << dsLoaiC[i]->GetTen() << endl << dsLoaiC[i]->SoTienPhaiTra() << endl;
		}
		outputFile.close();
		cout << "Da ghi file thanh cong\n";
	}
	else {
		cout << "Loi ghi file\n";
	}
}
void QUANLYKHACHHANG::DocFile(string tenfile) {
	ifstream inputFile(tenfile);
	if (!inputFile.fail()) {
		inputFile >> x >> y >> z;
		
		if (x > 0 && y > 0 && z > 0) {
			dsLoaiA =new LOAIA* [x];
			dsLoaiB = new LOAIB * [y];
			dsLoaiC = new LOAIC * [z];
			string ten;
			int sl;
			double dg;
			int thanthiet;
			for (int i = 0; i < x; i++) {
				inputFile.ignore();
				getline(inputFile, ten);
				inputFile >> sl;
				inputFile >> dg;
				
				dsLoaiA[i] = new LOAIA(ten, sl, dg);
			}
			for (int i = 0; i < y; i++) {
				inputFile.ignore();
				getline(inputFile, ten);
				inputFile >> sl;
				inputFile >> dg;
				inputFile >> thanthiet;
			
				dsLoaiB[i] = new LOAIB(ten, sl, dg,thanthiet);
			}
			for (int i = 0; i < z; i++) {
				inputFile.ignore();
				getline(inputFile, ten);
				inputFile >> sl;
				inputFile >> dg;
				
				dsLoaiC[i] = new LOAIC(ten, sl, dg);
			}
			cout << "Da doc file va luu vao d/s thanh cong\n";
		}
		else {
			cout << "So luong ds cac khach hang phai > 0\n";
		}
	}
	else {
		cout << "Loi doc file\n";
	}

}
void QUANLYKHACHHANG::Xuat() {
	cout << x << " " << y << " " << z << endl;
	for (int i = 0; i < x; i++) {
		dsLoaiA[i]->Xuat();
	}
	for (int i = 0; i < y; i++) {
		dsLoaiB[i]->Xuat();
	}
	for (int i = 0; i < z; i++) {
		dsLoaiC[i]->Xuat();
	}
}
