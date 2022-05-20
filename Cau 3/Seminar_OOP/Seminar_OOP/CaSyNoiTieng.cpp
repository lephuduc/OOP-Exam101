#include "CaSyNoiTieng.h"

namespace OOP_101 {
	CaSyNoiTieng::CaSyNoiTieng()
	{
		this->SoGameshow = 0;
	}

	CaSyNoiTieng::~CaSyNoiTieng()
	{

	}

	void CaSyNoiTieng::Nhap()
	{
		cout << "\nNhap thong tin ca si noi tieng\n";
		CaSy::Nhap();
		cout << "Nhap so gameshow: ";
		cin >> this->SoGameshow;
		this->update();
	}

	void CaSyNoiTieng::Xuat()
	{
		cout << "\n\nLoai: Ca si noi tieng.";
		CaSy::Xuat();
		cout << "\nSo gameshow: " << this->SoGameshow;
	}

	uint32_t CaSyNoiTieng::TinhLuong()
	{
		return 5000000 + 500000 * NamLamViec + 1200 * SoDia + 500000 * SoBuoi + 500000 * SoGameshow;
	}

}