#include<iostream>

using namespace std;

extern int dollar;
extern int dimes;
extern int nickels;
extern int pennies;
extern int quarters;

int main(){
	int pamt;//how much is the purchase amount
	int camt;//how much is the change amount
	int cdollar, cdimes, cnickels, cpennies, cquarters;//to store amount in each coin 

	cout << " Enter the purchase amount in pennies between 0-100 : \n";
	cin >> pamt;

	camt = 100 - pamt;//to know how much is the change

	cquarters = camt / quarters;
	camt = camt % quarters;//this line is imp as we will be dealing with amounnt remaining after handing quarters

	cdimes = camt / dimes;
	camt = camt % dimes;

	cnickels= camt / nickels;
	camt = camt % nickels;

	cpennies = camt;

		cout << "Your Change : " << endl;
	cout << "Quarters : " << cquarters << endl;
	cout << "Dimes : " << cdimes << endl;
	cout << "Nickels : " << cnickels << endl;
	cout << "Pennies : " << cpennies << endl;

}