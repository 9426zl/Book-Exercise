//
// Chapter13 Exercise13
//

#include <iostream>
#include <initializer_list>
#include <vector>

using std::cout; using std::endl; using std::vector;

struct X {
	X() {cout << "X()" << endl;}
	X(const X&) {cout << "X(const X&)" << endl;}
	X& operator=(const X&) {cout << "X& operator=(const X&)" << endl;}
	~X() {cout << "~X()" << endl;}
};

void func(const X &rhs, X x)
{
	vector<X> xvec;
	
	xvec.push_back(rhs);
	xvec.push_back(x);
}

int main()
{
	X *px = new X;
	X px2 = *px;

	func(*px, *px);
	func(px2, px2);

	delete px;
	return 0;
}