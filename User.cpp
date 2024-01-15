#include "User.h"
vector<Sach> DSSach;
//User
void nhap3(int& input)
{
	system("cls");
	cout << " Chao mung den voi thu vien" << endl;
	cout << "============================" << endl;
	cout << "1.Tim kiem." << endl;
	cout << "2.Hien thi tat ca sach trong thu vien." << endl;
	cout << "3.Quay lai." << endl;
	cout << "(Vui long chon 1 hoac 2)" << endl;
	cout << "Nhap lua chon cua ban: "; cin >> input;
	system("cls");
}
void Timkiem_tensach()
{
	string Tensach;
	cout << "Nhap ten sach can tim: ";
	cin >> Tensach;
	bool check = true;
	for (int i = 0; i < DSSach.size(); i++)
	{
		if (DSSach[i].TenSach == Tensach)
		{
			cout << "Ma so sach \tTen sach \tThe loai \tTac gia \t\tNam xuat ban \tSo trang \tSo luong sach\n";
			cout << DSSach[i].MaSach << "\t\t" << DSSach[i].TenSach << "\t\t" << DSSach[i].TheLoai << "\t\t"
				<< DSSach[i].TenTG << "\t\t\t" << DSSach[i].XuatBan << "\t\t" << DSSach[i].SoTrang << "\t\t" << DSSach[i].SL << endl;
			check = false;
		}
	}
	if (check)
		cout << "Khong tim thay ten sach vua nhap!\n\n";
	system("pause");
}
void Timkiem_chude()
{
	string Tenchude;
	cout << "Nhap ten chu de sach: ";
	cin >> Tenchude;
	bool check = true;
	for (int i = 0; i < DSSach.size(); i++)
	{
		if (DSSach[i].TheLoai == Tenchude)
		{
			cout << "Ma so sach \tTen sach \tThe loai \tTac gia \tNam xuat ban \tSo trang \tSo luong sach\n";
			cout << DSSach[i].MaSach << "\t\t" << DSSach[i].TenSach << "\t\t" << DSSach[i].TheLoai << "\t\t"
				<< DSSach[i].TenTG << "\t\t" << DSSach[i].XuatBan << "\t\t" << DSSach[i].SoTrang << "\t\t" << DSSach[i].SL << endl;
			check = false;
		}
	}
	if (check)
		cout << "Khong tim thay chu de sach vua nhap.Vui long nhap lai !\n\n";
	system("pause");
}
void Timkiem_masach()
{
	string masach;
	cout << "Nhap ma sach can tim: ";
	cin >> masach;
	bool check = true;
	for (int i = 0; i < DSSach.size(); i++)
	{
		if (DSSach[i].MaSach == masach)
		{
			cout << "Ma so sach \tTen sach \tThe loai \tTac gia \tNam xuat ban \tSo trang \tSo luong sach\n";
			cout << DSSach[i].MaSach << "\t\t" << DSSach[i].TenSach << "\t\t" << DSSach[i].TheLoai << "\t\t"
				<< DSSach[i].TenTG << "\t\t" << DSSach[i].XuatBan << "\t\t" << DSSach[i].SoTrang << "\t\t" << DSSach[i].SL << endl;
			check = false;
		}
	}
	if (check)
		cout << "Khong tim thay ma sach vua nhap.Vui long nhap lai !\n\n";
	system("pause");
}
void Timkiem_tacgia()
{
	string tentg;
	cout << "Nhap ten tac gia cua sach: ";
	cin >> tentg;
	bool check = true;
	for (int i = 0; i < DSSach.size(); i++)
	{
		if (DSSach[i].TenTG == tentg)
		{
			cout << "Ma so sach \tTen sach \tThe loai \tTac gia \tNam xuat ban \tSo trang \tSo luong sach\n";
			cout << DSSach[i].MaSach << "\t\t" << DSSach[i].TenSach << "\t\t" << DSSach[i].TheLoai << "\t\t"
				<< DSSach[i].TenTG << "\t\t" << DSSach[i].XuatBan << "\t\t" << DSSach[i].SoTrang << "\t\t" << DSSach[i].SL << endl;
			check = false;
		}
	}
	if (check)
		cout << "Khong tim thay ten tac gia vua nhap.Vui long nhap lai !\n\n";
	system("pause");
}
void timkiem()
{
	int luachon;
	do
	{

		cout << "Ban muon tim sach theo ?" << endl;
		cout << "1.Ten sach." << endl;
		cout << "2.Chu de." << endl;
		cout << "3.Tac gia." << endl;
		cout << "4.Ma sach." << endl;
		cout << "5.Quay lai." << endl;
		cout << "( Vui long chon de tiep tuc. )" << endl;
		cout << "Nhap lua chon cua ban: "; cin >> luachon;
		system("cls");
		switch (luachon)
		{
		case 1:
			Timkiem_tensach();
			break;
		case 2:
			Timkiem_chude();
			break;
		case 3:
			Timkiem_tacgia();
			break;
		case 4:
			Timkiem_masach();
			break;
		case 5:
			break;
		default:
			cout << "Vui long chon cac so tu 1 den 5!";
			break;
		}
	} while (luachon != 5);
}
void User()
{
	int input;
	do
	{
		nhap3(input);
		switch (input)
		{
		case 1:
			timkiem();
			break;
		case 2:
			HienThi();
			break;
		case 3:
			break;
		default:
			cout << "Vui long chon cac so tu 1 den 3!" << endl;
			break;
		}
	} while (input != 3);
}
