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

//Themfile de lam ne ae kkk

int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int result=hieu(10,5);
	int result=tich(10,5);
	cout<<"Hieu cua a va b la:"<<result;
	cout<<:tich cua a va b la:"<<result;
	system("pause");
	return 0;
}
