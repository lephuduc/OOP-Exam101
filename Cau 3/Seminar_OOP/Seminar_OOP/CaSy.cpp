#include "CaSy.h"

namespace OOP_101 {
	vector<int> CaSy::Luong = vector<int>();
	void CaSy::update()
	{
		Luong.push_back(this->TinhLuong());
	}
	CaSy::CaSy()
	{
		this->Ten = "";
		this->NamLamViec = 0;
		this->SoDia = 0;
		this->SoBuoi = 0;
	}

	CaSy::~CaSy()
	{

	}

	void CaSy::Nhap()
	{
		cout << "Nhap ho va ten: ";
		cin.ignore();
		getline(cin, this->Ten);
		cout << "Nhap so nam lam viec: ";
		cin >> this->NamLamViec;
		cout << "Nhap so dia da ban duoc: ";
		cin >> this->SoDia;
		cout << "Nhap so buoi da dien: ";
		cin >> this->SoBuoi;
	}

	void CaSy::Xuat()
	{
		cout << "\nTen: " << this->Ten << endl;
		cout << "So nam lam viec: " << this->NamLamViec << endl;
		cout << "So dia da ban: " << this->SoDia << endl;
		cout << "So buoi da dien: " << this->SoBuoi;
	}

}