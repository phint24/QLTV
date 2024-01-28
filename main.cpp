#include "Header.h"
#include "QLTV.h"
#include "QLND.h"

void luachon()
{
	int choice, choice2;
	do
	{
		cout << " Chao mung den voi thu vien" << endl;
		cout << "============================" << endl;
		cout << "Chon vai tro cua ban: " << endl;
		cout << "1. Quan li." << endl;
		cout << "2. Nguoi dung." << endl;
		cout << "3. Thoat." << endl;
		cout << "( Vui long chon 1, 2 hoac 3 )" << endl; cin >> choice;
		system("cls");
		switch (choice) //chon vai tro
		{
		case 1:
			do
			{
				cout << "1.Quan li sach trong thu vien." << endl;
				cout << "2.Quan li nguoi dung." << endl;
				cout << "3.Quay lai." << endl;
				cout << "Vui long chon." << endl; cin >> choice2;
				system("cls");
				switch (choice2)
				{
				case 1:
					QuanLiTV();
					break;
				case 2:
					QLNgDung();
					break;
				case 3:
					break;
				default:
					cout << "Chon 1 hoac 2 hoac 3!" << endl;
					break;
				}
			} while (choice2 != 3);
			break;
		case 2:
			User();
			break;
		case 3:
			cout << "Cam on da su dung chuong trinh!" << endl;
			break;
		default:
			cout << "Vui long chon 1 hoac 2!" << endl;
			break;
		}
	} while (choice != 3);
}
int main()
{
	luachon();
}