#include<iostream>
using namespace std;
int main() {
	typedef int *Vec ;//vec is to pointer to an int 
	typedef Vec* MATRIX;//matrix is pointer to an vec which is pointer to an int

	int a = 5;
	
	Vec v = &a;
	MATRIX m = &v;

	cout << "a : " << a << endl;
	cout << "v : " << *v << endl;
	cout << "m : " << **m << endl;

}