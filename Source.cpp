#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
<<<<<<< HEAD
int tich(int a, int b){
	tich=a*b;
	return tich;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int result = tich(a,b);
=======
int hieu(int a, int b){
	int hieu=0;
	hieu=a-b;
	return hieu;
}

//Themfile

int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int result=hieu(10,5);
	cout<<"Hieu cua a va b la:"<<result;
>>>>>>> 43dc60096d3b21315b59f1f814174f7f471670e8
	system("pause");
	return 0;
}