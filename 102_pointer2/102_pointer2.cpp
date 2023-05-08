#include <iostream>
using namespace std;

class mahasiswa {									//class mahasiswa
	public:											// class modifier public
	int nim;
	void showNim() {								//metode showNim
		cout << "No Induk = " << nim << endl;
	}
};
int main() {										// main program
	mahasiswa* mhs = new mahasiswa{ 1 };
	mhs->nim = 2;
	mhs->showNim();
	delete mhs;
	return 0;
}