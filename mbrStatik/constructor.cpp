#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public:
	int nim;
	string nama;

	Mahasiswa() {
		nim = 0;
		nama = "";
	};
	Mahasiswa(int iNim)
	{
		nim = iNim;
	};
	Mahasiswa(string);
	Mahasiswa(int iNim, string iNim);
	void cetak();
};
