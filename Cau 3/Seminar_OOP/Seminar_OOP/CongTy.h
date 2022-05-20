#pragma once
#include "CaSy.h"
#include "CaSyChuaNoiTieng.h"
#include "CaSyNoiTieng.h"
#include <vector>

namespace OOP_101 {

	class CongTy
	{
		// vector quản lí danh sách các ca sĩ trong công ty
		vector<CaSy*> CacCaSi;
	public:
		// parameterless constructor
		CongTy();
		// destructor
		~CongTy();
		// Nhập thông tin các ca sĩ có trong công ty
		void Nhap();
		// Xuất thông tin các ca sĩ có trong công ty
		void Xuat();
		// Tìm ca sĩ lương cao nhất
		void TCSLCN();
	};

}