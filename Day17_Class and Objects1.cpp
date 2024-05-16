#include <iostream>
using namespace std;

class complex{
	private:
		int real, img;
		
	public:
		complex();
		complex(int r, int i);
		void addcomplex(complex c1, complex c2);
		void show();
};

complex::complex():real(0),img(0){};
complex::complex(int real, int img):real(r),img(i){};




int main(){
	return 0;
}
