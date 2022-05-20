#include "CaSyChuaNoiTieng.h"

namespace OOP_101 {
	CaSyChuaNoiTieng::CaSyChuaNoiTieng() : CaSy()
	{

	}

	CaSyChuaNoiTieng::~CaSyChuaNoiTieng()
	{

	}

	void CaSyChuaNoiTieng::Nhap()
	{
		cout << "\nNhap thong tin ca si chua noi tieng\n";
		CaSy::Nhap();
		this->update();
	}

	void CaSyChuaNoiTieng::Xuat()
	{
		cout << "\n\nLoai: Ca si chua noi tieng.";
		CaSy::Xuat();
	}

	uint32_t CaSyChuaNoiTieng::TinhLuong()
	{
		return 3000000 + 500000 * NamLamViec + 1000 * SoDia + 200000 * SoBuoi;
	}

}