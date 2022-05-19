#include "PhanSo.h"

int main() {
	PhanSo a;
	PhanSo b;
	a.Nhap();
	b.Nhap();

	a.Xuat();
	b.Xuat();

	a.giaTri();
	b.giaTri();

	PhanSo::maxPS(a, b).Xuat();
	return 0;
}