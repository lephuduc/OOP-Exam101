#pragma once
#include "CaSy.h"

namespace OOP_101 {

	class CaSyNoiTieng : public CaSy
	{
		// số Gameshow
		uint16_t SoGameshow;
	public:
		// Parameterless constructor
		CaSyNoiTieng();
		// Destructor
		~CaSyNoiTieng();
		// Nhập thông tin ca sĩ nổi tiếng
		void Nhap();
		// Xuất thông tin ca sĩ nổi tiếng
		void Xuat();
		// Tính lương của ca sĩ nổi tiếng
		uint32_t TinhLuong();
	};

}