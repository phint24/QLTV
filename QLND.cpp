#include "QLND.h"
using namespace std;
//Quan li nguoi dung
struct NguoiDung
{
	int CapNgDung;
	string Ten, MatKhau, MaNgDung;
};
//tao vecto de chua thong tin
vector<NguoiDung>Users;

void nhap2(int& input) //dua ra lua chon cong viec
{
	system("cls");
	cout << "Quan ly nguoi dung." << endl;
	cout << "1.Them nguoi dung." << endl;
	cout << "2.Sua thong tin nguoi dung." << endl;
	cout << "3.Xoa nguoi dung ." << endl;
	cout << "4.Hien thi nguoi dung." << endl;
	cout << "5.Quay lai." << endl;
	cout << "( vui long nhap so de lua chon cong viec ): " << endl;
	cout << "Nhap lua chon cua ban:"; cin >> input;
	cout << endl;
	system("cls");
}
//Ham them nguoi dung
void ThemNgDung()
{
	NguoiDung u;
	cout << "Nhap ma nguoi dung: ";
	cin.ignore();
	getline(cin, u.MaNgDung);
	cout << "Nhap ten truy cap: ";
	cin >> u.Ten;
	cout << "Nhap mat khau: ";
	cin >> u.MatKhau;
	u.CapNgDung = 1;
	Users.push_back(u);
	cout << "Da them thanh cong!\n\n";
	system("cls");
}
//Ham xoa nguoi dung
void XoaNgDung()
{
	string UserID;
	cout << "Nhap ma nguoi dung can xoa: "; 
	cin.ignore();
	getline(cin, UserID);
	bool check = false;//bien check ma nguoi dung
	for (int i = 0; i < Users.size(); i++)
	{
		if (Users[i].MaNgDung == UserID)
		{
			Users.erase(Users.begin() + i);
			check = true;
		}
	}
	if (check)
	{
		cout << "Da xoa thanh cong!\n\n";//neu da xoa xong
		system("pause");
	}
	else
	{
		cout << "Khong tim thay nguoi dung nay!\n\n";// khong co ma nguoi dung trong du lieu
		system("pause");
	}
	system("cls");
}
//Ham sua thong tin nguoi dung
void SuaTTNgDung()
{
	string UserID;
	cout << "Nhap ma nguoi dung can sua:"; 
	cin.ignore();
	getline(cin, UserID);
	bool check = false;//bien check ma nguoi dung co ton tai khong
	for (int i = 0; i < Users.size(); i++)
	{
		if (Users[i].MaNgDung == UserID)// check xong neu user co ton tai thi goi ham SuaTTNgDung
		{
			cout << "Ten nguoi dung moi:";
			getline(cin, Users[i].Ten);
			Users[i].CapNgDung = 1;
			cout << "Mat khau moi:"; cin >> Users[i].MatKhau;
			check = true;
		}
	}
	if (check)
	{
		cout << "Chinh sua thong tin thanh cong!\n\n";// sau khi chinh sua thanh cong
		system("pause");
	}
	else
	{
		cout << "Khong tim thay nguoi dung nay!\n\n";// khong co ma nguoi dung trong du lieu
		system("pause");
	}
	system("cls");
}
//Ham hien thi danh sach nguoi dung
void HienThiNgDung()
{
	cout << "Danh sach nhung nguoi dung thu vien:\n\n";
	cout << "Userid\t\tUsername\tUserlevel\tPassword\n";//liet ke cac thong tin cua nguoi dung
	for (int i = 0; i < Users.size(); i++)
	{
		cout << Users[i].MaNgDung << "\t\t" << Users[i].Ten << "\t\t" << Users[i].CapNgDung << "\t\t" << Users[i].MatKhau << endl;//cac thong tin tuong ung
	}
	cout << endl;
	system("pause");
}

void QLNgDung()
{
	int input, choice;
	do
	{
		nhap2(input);
		system("cls");
		switch (input)
		{
		case 1:
			ThemNgDung();
			do //co the tiep tuc them nguoi dung hoac quay lai chon cong viec khac
			{
				TiepTuc(choice);
				switch (choice)
				{
				case 1:
					ThemNgDung();
					break;
				case 2:
					break;
				default:
					cout << "Vui long chon 1 hoac 2!";
					break;
				}
			} while (choice != 2);
			break;
		case 2:
			SuaTTNgDung();
			do //co the tiep tuc them nguoi dung hoac quay lai chon cong viec khac
			{
				TiepTuc(choice);
				switch (choice)
				{
				case 1:
					SuaTTNgDung();
					break;
				case 2:
					break;
				default:
					cout << "Vui long chon 1 hoac 2!";
					break;
				}
			} while (choice != 2);
			break;
		case 3:
			XoaNgDung();
			do //co the tiep tuc them nguoi dung hoac quay lai chon cong viec khac
			{
				TiepTuc(choice);
				switch (choice)
				{
				case 1:
					XoaNgDung();
					break;
				case 2:
					break;
				default:
					cout << "Vui long chon 1 hoac 2!";
					break;
				}
			} while (choice != 2);
			break;
		case 4:
			HienThiNgDung();
			break;
		case 5:
			cout << "Da dong quan li nguoi dung" << endl;
			break;
		default:
			cout << "Vui long nhap cac so truoc cac lua chon tren!" << endl;
		}
	} while (input != 5);
}