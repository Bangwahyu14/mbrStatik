#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int);//constructor
	~angka();//destruction
	void cetakData();
	void isiData();
};
//definisi member funcot
angka::angka(int i) {//constructor
	panjang = i;
	arr = new int[i];
	isiData();
}

angka::~angka() {//DEstructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = " << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << " = "; cin >> arr[i];
	}
}

int main() {
	angka belajarcpp(3); //constructor di panggil
	angka* ptrBelajarcpp = new angka(5);//constructor dipanggil
	delete ptrBelajarcpp; //Destructor dipanggil

	return 0;
}//destructor dipanggil