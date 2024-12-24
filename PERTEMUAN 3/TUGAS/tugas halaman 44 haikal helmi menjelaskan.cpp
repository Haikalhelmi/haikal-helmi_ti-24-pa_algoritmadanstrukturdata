#include <iostream> 
using namespace std;

int main()
{
	int x=50;
	
	int a, b, c, d, e;
	
	a = x > 5 + 5;
	b = x > 100;
	c = a && b;
	d = a || b;
	e = ! (c);
	
	cout << "\nNilai a = x > 5 + 5= "<< a << endl; //hasilnya 1 karena 50 lebih besar dari 1
	cout << "\nNilai b = x > 100= "<< b << endl; //mengapa hasilnya 0 karena nilai 50 yang di input lebih kecil dari nilai 100
	cout << "\nNilai c = x a && b= "<< c << endl; //karena salah satu ada yang benar jadi hasilnya menjadi 0 karena nilai a itu jawaban nya benar tetapi nilai b jawaban nya salah
	cout << "\nNilai d = x a || b= "<< d << endl; //dalam code ini bila ada tanda // membuat salah satu jawaban yang benar menjadi benar walau ada jawaban dari salah satu nilai yang salah
	cout << "\nNilai e = x ! (c) = "<< e << endl; //jika nilai e lebih besar dan tanda seru itu nilai c hasilnya 1 maka nilai c dianggap benar karena nilai yang kecil di anggap benar
	
	
	getchar();
	
	
}
