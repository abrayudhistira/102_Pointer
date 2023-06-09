#include <iostream>
using namespace std;

class mahasiswa{						//membuat class mahasiswa
	public:								//membuat class modifier
	int nim;
	void showNim() {							//membuat metode showNim
		cout << "No Induk = " << nim << endl;
	}
};

int main() {
	mahasiswa mhs{ 1 };							//Object mhs
	mhs.showNim();								//Member Access Operator

	mahasiswa &refMhs = mhs;					//Pointer Reference refMhs
	refMhs.nim = 2;								//Member Access Operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs;						//pointer Deference pMhs
	pMhs->nim = 3;								//Arrow Operator
	mhs.showNim();								//show nim
	return 0;
}