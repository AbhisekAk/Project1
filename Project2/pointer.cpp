#include<iostream>
using namespace std;

int main() {
	double x;
	double y;
	cout << " Enter a value for x : ";//prompting user for the value ofx and y
	cin >> x;

	cout << " Enter a value for y : ";
	cin >> y;
 
	double *p = &x; //creating two pointer variables pointing to the address of x and y
	double *s = &y;

	double sum = *p + *s;//sum of x and y using pointer variable
	cout << " " << endl;
	cout << "X : " << x << endl;
	cout << "Y : " << y << endl;
	cout << "Sum : " << sum << endl;

}
