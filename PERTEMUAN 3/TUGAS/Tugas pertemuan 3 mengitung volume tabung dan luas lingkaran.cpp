#include <iostream>
#define phi 3.14
using namespace std;

int main()
{
	cout << "TUGAS PERTEMUAN 3" << endl;
	cout << "Haikal Helmi" << endl;
	cout << "NPM 242310031" << endl;
	cout << "TI-24-PA-2"<<endl;
	cout << "TEKNOLOGI INFORMASI"<<endl;
	cout << "----------------------------------------------------------------------------------------------"<<endl<<endl;
	
	
	cout << "Volume tabung"<<endl;
	
	float x, y, z;
	
	
	cout <<"\nDIKETAHUI"<<endl;
	cout <<"phi               : " << phi <<endl;
	cout <<"jari-jari lingkaran (alas tabung): ";
	cin >>x;
	cout <<"tinggi tabung                    : ";
	cin >>y;
	cout <<endl;
	
	
	cout <<"pengerjaan"<<endl;
	cout <<"volume tabung = alas tabung x tinggi tabung atau phi x jari-jari x jari-jari x tinggi tabung" <<endl;
	cout <<"volume tabung "<<phi << "x" << x << "x" << x << "x" << y <<endl;
    z = phi*x*x*y;
	cout << "volume tabung = " <<z<<endl;
	cout << "-----------------------------------------------------------------------------------------------------"<<endl<<endl;
	
	
	
	cout << "LUAS LINGKARAN" << endl;
	
	float x2, y2;
	cout <<"\nDIKETAHUI"<<endl;
	cout <<"phi : "<< phi <<endl;
	cout <<"jari-jari : ";
	cin >>x2;
	
	y2 = phi * x2 * x2;
	
	cout <<"luas lingkaran = phi x jari-jari x jari-jari"<<endl;
	cout <<"luas lingkaran = "<< phi << " x " << x2 << " x " << x2 <<endl;
	cout <<"luas lingkaran = "<< y2;
	cout << "\n-------------------------------------------------------------------------------------------------------";
	return 0;

}
