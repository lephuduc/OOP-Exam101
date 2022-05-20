#pragma once
#include "CaSy.h"

namespace OOP_101 {

    class CaSyChuaNoiTieng :
        public CaSy
    {
    public:
        // Parameterless constructor
        CaSyChuaNoiTieng();
        // Destructor
        ~CaSyChuaNoiTieng();
        // Nhập thông tin ca sĩ "chưa" nổi tiếng
        void Nhap();
        // Xuất thông tin ca sĩ "chưa" nổi tiếng
        void Xuat();
        // Tính lương ca sĩ "chưa" nổi tiếng
        uint32_t TinhLuong();
    };

}