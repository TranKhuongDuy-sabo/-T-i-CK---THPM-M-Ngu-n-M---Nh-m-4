#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);

int tich(int a, int b){
	tich=a*b;
	return tich;
}
int hieu(int a, int b){
	int hieu=0;
	hieu=a-b;
	return hieu;
}

int tong(int a, int b){
	int tong = 0;
	tong = a + b;
	return tong;
}

//Themfile de lam ne ae kkk

int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int resultHieu = hieu(10,5);
	int resultTich = tich(10,5);
	int resultTong = tong (10,5);
	cout<<"Hieu cua a va b la:"<<resultHieu;
	cout<<" Tich cua a va b la : "<<resultTich;
	cout << "Tong cua a va b la : " << resultTong;
	system("pause");
	return 0;
}
