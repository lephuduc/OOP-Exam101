#include "CongTy.h"

namespace OOP_101 {

	CongTy::CongTy()
	{

	}

	CongTy::~CongTy()
	{
		CacCaSi.clear();
		CacCaSi.shrink_to_fit();
	}

	void CongTy::Nhap()
	{
		int n;
		cout << "So luong ca si: ";
		cin >> n;
		cout << "Ky hieu\n";
		cout << "Ca si chua noi tieng (0) || Ca si noi tieng (1|?)\n";
		bool NT;
		for (int i = 0; i < n; i++) {
			printf("Ca si %d\n", i + 1);
			cout << "Loai: ";
			cin >> NT;
			if (NT) {
				CacCaSi.push_back(new CaSyNoiTieng());
				CacCaSi[CacCaSi.size() - 1]->Nhap();
			}
			else {
				CacCaSi.push_back(new CaSyChuaNoiTieng());
				CacCaSi[CacCaSi.size() - 1]->Nhap();
			}
			
		}
	}

	void CongTy::Xuat()
	{
		size_t size = CacCaSi.size();
		for (size_t i = 0; i < size; i++) {
			CacCaSi[i]->Xuat();
		}
	}

	void CongTy::TCSLCN()
	{
		int32_t maxL = INT32_MIN;
		CaSy* cs = NULL;
		size_t size = CaSy::Luong.size();
		for (size_t i = 0; i < size; i++) {
			if (CaSy::Luong[i] > maxL) {
				maxL = CaSy::Luong[i];
				cs = CacCaSi[i];
			}
		}
		cout << "\n\nCa si co luong cao nhat: ";
		cs->Xuat();
	}

}