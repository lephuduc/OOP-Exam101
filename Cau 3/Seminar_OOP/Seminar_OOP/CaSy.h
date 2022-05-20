#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace OOP_101 {

	class CaSy
	{
		static vector<int> Luong;
		friend class CongTy;
	protected:
		// họ tên ca sĩ
		string Ten;
		// số năm làm việc cho công ty
		uint32_t NamLamViec;
		// số đĩa đã bán được
		uint32_t SoDia;
		// số buổi trình diễn đã tham gia
		uint16_t SoBuoi;
		void update();
	public:
		// Parameterless constructor
		CaSy();
		// Destructor
		virtual ~CaSy();
		// Nhập thông tin ca sĩ
		virtual void Nhap();
		// Xuất thông tin ca sĩ
		virtual void Xuat();
		// Tính lương ca sĩ, kế thừa là chủ yếu
		virtual uint32_t TinhLuong() = 0;

	};

}