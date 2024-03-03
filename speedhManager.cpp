#define _CRT_SECURE_NO_WARNINGS 1
#include"speechManager.h"
speechManager::speechManager() {

}
speechManager::~speechManager() {

}
void speechManager::showMenu()
{
	cout << "------ Welcome!------" << endl;
	cout << "------ 1.start ------" << endl;
	cout << "------ 2.search------" << endl;
	cout << "------ 3.delete------" << endl;
	cout << "------ 0.exit  ------" << endl;
}