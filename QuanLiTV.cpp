
#include "QLTV.h"
//Quan li thu vien
struct Sach
{
	string MaSach, TenSach, TenTG, TheLoai;
	int XuatBan, SoTrang, SL;
};

vector<Sach> DSSach;

void nhap(int& input) // dua ra lua chon cong viec
{
	system("cls");
	cout << "Chuong trinh quan ly thu vien." << endl;
	cout << "1. Them sach." << endl;
	cout << "2. Sua sach." << endl;
	cout << "3. Xoa sach." << endl;
	cout << "4. Hien thi tat ca sach trong thu vien." << endl;
	cout << "5. Thoat." << endl;
	cout << "( vui long nhap so de lua chon cong viec )" << endl;
	cout << "Nhap lua chon cua ban: "; cin >> input;
	cout << endl;
	system("cls");
}
void TiepTuc(int& n)
{
	cout << "Ban co muon tiep tuc ?" << endl;
	cout << "1.Dong y." << endl;
	cout << "2.Quay lai." << endl;
	cout << "( Vui long chon 1 hoac 2 de tiep tuc. )" << endl;
	cout << "Nhap lua chon cua ban: "; cin >> n;
	cout << endl;
	system("cls");
}
void ThemSach() // them sach vao thu vien
{
	// struct co the xem nhu datatype, khai bao bien s co kieu la struct sach
	Sach s;
	cout << "Moi nhap ma sach: ";
	cin >> s.MaSach;
	cout << "Nhap ten sach: ";
	cin.ignore();
	getline(cin, s.TenSach);
	cout << "Nhap ten tac gia: ";
	getline(cin, s.TenTG);
	cout << "Nhap the loai sach: ";
	getline(cin, s.TheLoai);
	cout << "Nhap nam xuat ban: "; cin >> s.XuatBan;
	cout << "Nhap so trang: "; cin >> s.SoTrang;
	cout << "Nhap so luong sach: "; cin >> s.SL;
	DSSach.push_back(s);
	cout << "Ban da them thanh cong!\n\n";
	system("cls");
}
void SuaTTSach() // chinh sua thong tin sach
{
	string MaSach;
	cout << "Nhap ma sach can sua: "; cin >> MaSach;
	bool check = false;//bien check ma sach co ton tai khong
	for (int i = 0; i < DSSach.size(); i++)
	{
		if (DSSach[i].MaSach == MaSach)//check xong neu sach co ton tai thi hien muc sach de sua
		{
			cout << "Ten sach moi: ";
			cin.ignore();
			getline(cin, DSSach[i].TenSach);
			cout << "Ten tac gia moi: ";
			getline(cin, DSSach[i].TenTG);
			cout << "The loai sach: ";
			getline(cin, DSSach[i].TheLoai);
			cout << "Nam xuat ban: "; cin >> DSSach[i].XuatBan;
			cout << "Nhap so trang: "; cin >> DSSach[i].SoTrang;
			cout << "Nhap so luong: "; cin >> DSSach[i].SL;
			check = true;
		}
	}
	if (check)
		cout << "Ban da sua thanh cong!\n\n";// sau khi chinh sua thanh cong
	else
		cout << "Khong tim thay ma sach vua nhap!\n\n";//khong co ma sach trong du lieu
	system("cls");
}
void XoaSach() // xoa sach ra khoi thu vien
{
	string MaSach;
	cout << "Nhap ma sach muon xoa: "; cin >> MaSach;
	bool check = false;// bien check ma sach
	for (int i = 0; i < DSSach.size(); i++)
	{
		if (DSSach[i].MaSach == MaSach)
		{
			DSSach.erase(DSSach.begin() + i);
			check = true;
		}
	}
	if (check)
		cout << "Ban da xoa thanh cong!\n\n"; //neu da xoa xong sach
	else
		cout << "Khong tim thay ma sach vua nhap!\n\n"; //khong co ma sach trong du lieu
	system("cls");
}
void HienThi()
{
	cout << "Danh sach nhung sach co trong thu vien:\n\n";
	cout << "Ma so sach \tTen sach \tThe loai \tTac gia \t\tNam xuat ban \tSo trang \tSo luong sach\n";// liet ke cac thong tin cua sach
	for (int i = 0; i < DSSach.size(); i++)
	{
		cout << DSSach[i].MaSach << "\t\t" << DSSach[i].TenSach << "\t\t" << DSSach[i].TheLoai << "\t\t"
			<< DSSach[i].TenTG << "\t\t\t" << DSSach[i].XuatBan << "\t\t" << DSSach[i].SoTrang << "\t\t" << DSSach[i].SL << endl; //cac thong tin tuong ung
	}
	cout << endl;
	system("pause");
}
void QuanLiTV()
{
	int input, luachon;
	do
	{
		nhap(input);
		system("cls");
		switch (input)
		{
		case 1:
			ThemSach();
			do // co the tiep tuc them sach hoac quay lai chon cong viec khac
			{
				TiepTuc(luachon);
				switch (luachon)
				{
				case 1:
					ThemSach();
					break;
				case 2:
					break;
				default:
					cout << "Vui long chon 1 hoac 2!";
					break;
				}
			} while (luachon != 2);
			break;
		case 2:
			SuaTTSach();
			do // co the tiep tuc chinh sua hoac quay lai chon cong viec khac
			{
				TiepTuc(luachon);
				switch (luachon)
				{
				case 1:
					SuaTTSach();
					break;
				case 2:
					break;
				default:
					cout << "Vui long chon 1 hoac 2!";
					break;
				}
			} while (luachon != 2);
			break;
		case 3:
			XoaSach();
			do // co the tiep tuc xoa sach hoac quay lai chon cong viec khac
			{
				TiepTuc(luachon);
				switch (luachon)
				{
				case 1:
					XoaSach();
					break;
				case 2:
					break;
				default:
					cout << "Vui long chon 1 hoac 2!";
					break;
				}
			} while (luachon != 2);
			break;
		case 4:
			HienThi();
			break;
		case 5:
			cout << "Da dong quan li thu vien!" << endl;
			break;
		default:
			cout << "Vui long nhap cac so truoc cac lua chon tren!" << endl;
			break;
		}
	} while (input != 5);
}
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
