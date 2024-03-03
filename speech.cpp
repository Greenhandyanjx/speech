#define _CRT_SECURE_NO_WARNINGS 1
#include"speechManager.h"
int main()
{
	speechManager s;
	int choice=1;
	while (true)
	{
		s.showMenu();
		cout << "your choice: " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 0:
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}