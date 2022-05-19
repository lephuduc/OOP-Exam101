#pragma once

class PhanSo {
	int tu;
	int mau;
public:
	PhanSo();
	PhanSo(int tu, int mau);
	void rutGon();
	void Nhap();
	void Xuat();
	double giaTri();
	static PhanSo maxPS(PhanSo a, PhanSo b);
};