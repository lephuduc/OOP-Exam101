#include "PhanSo.h"
#include <iostream>
#include <numeric>

using namespace std;

int gcd(int a, int b) {
	return (b == 0) ? a : gcd(b, a % b);
}
PhanSo::PhanSo()
{
	tu = 1;
	mau = 1;
}

PhanSo::PhanSo(int tu, int mau)
{
	this->tu = tu;
	this->mau = mau;
}

void PhanSo::rutGon()
{
	int k = gcd(tu, mau);
	tu /= k;
	mau /= k;
	if (mau < 0) {
		tu = -tu;
		mau = -mau;
	}
}

void PhanSo::Nhap()
{
	cout << "Nhap tu: "; cin >> tu;
	cout << "Nhap mau: "; cin >> mau;
	if (mau == 0) {
		cout << "Vui long nhap mau khac 0";
		exit(0);
	}
}

void PhanSo::Xuat()
{
	rutGon();
	if (mau == 1) cout << tu << endl;
	else cout << tu << "/" << mau << endl;
}

double PhanSo::giaTri()
{
	return (double)tu/mau;
}

PhanSo PhanSo::maxPS(PhanSo a, PhanSo b)
{
	if (a.giaTri() > b.giaTri()) return a;
	return b;
}
