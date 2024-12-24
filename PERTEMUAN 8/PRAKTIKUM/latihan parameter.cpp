#include <iostream>
using namespace std;

void siswa ()
{
	string nama = "kkaall";
	string jk = "laki - laki";
	cout << nama << " adalah seorang " << jk << endl;
}

string siswi ()
{
	string nama = "kkeennyy";
	string jk = "perempuan";
	return (nama + " adalah seorang " + jk);
}

int main ()
{
	siswa(); //fungsi void tidak memerlukan 'cout'
	cout<< siswi() << endl; //fungsi non-void mengembalikan nilai, maka butuh 'cout"
}
