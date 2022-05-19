# Cách làm câu 2
  
  Câu 2 chỉ đơn giản là đề yêu cầu tạo 1 class đơn là PhanSo, sau đó có các phương thức mà đề yêu cầu
  
  ```cpp
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
``` 
Đây chỉ là header, chỉ mới có các khai báo thuộc tính và phương thức của đề yêu cầu, ta bắt đầu định nghĩa các hàm 
riêng hàm `maxPS()` mình để static để có thể dùng nó ở mọi nơi cho 2 tham số truyền vào là 2 phân số bất kì, không phụ thuộc vào đối tượng.

Mình định nghĩa hàm rút gọn trước vì nó sẽ dùng ở các hàm sau đó:
```cpp
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
```
Rút gọn phân số cơ bản thật ra chỉ chia tử và mẫu cho ước chung lớn nhất, và khử dấu trừ ở dưới mẫu

```cpp
void PhanSo::Nhap()
{
	cout << "Nhap tu: "; cin >> tu;
	cout << "Nhap mau: "; cin >> mau;
	if (mau == 0) {
		cout << "Vui long nhap mau khac 0";
		exit(0);
	}
}
```
Tại Hàm nhập mình sẽ kiểm tra mẫu nhập vào có bắng 0 hay không, nếu có thì báo lỗi và thoát chương trình

```cpp
void PhanSo::Xuat()
{
	rutGon();
	if (mau == 1) cout << tu << endl;
	else cout << tu << "/" << mau << endl;
}
```
Hàm xuất thì chỉ xuất tử nếu mẫu bằng 1

```cpp
double PhanSo::giaTri()
{
	return (double)tu/mau;
}

PhanSo PhanSo::maxPS(PhanSo a, PhanSo b)
{
	if (a.giaTri() > b.giaTri()) return a;
	return b;
}
```
Hàm `giaTri()` khá đơn giản, còn về hàm `maxPS()` sẽ trả về phân số lớn hơn nếu có giá trị lớn hơn và hàm này có thể dùng ở nhiều nơi.

```c

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
```

Còn đây là hàm main để test, `maxPS()` là hàm static nên cần thêm toán tử phân giải phạm vi `::` để truy xuất từ chính lớp `PhanSo` (lớp định nghĩa nó)

Kết quả:

![image](https://user-images.githubusercontent.com/88520787/169348611-2ecd5736-0426-435a-ac61-0ccd1b1345c3.png)


