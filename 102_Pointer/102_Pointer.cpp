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
	mhs.showNim();								
}