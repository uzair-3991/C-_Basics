#include <iostream>
using namespace std;


struct car_model {

	int model,year,make;


};
void display_car_model(car_model);



int sum(int, int);

int main() {
/*
	car_model mehran;
	int x, y, z;
	cout << " enter a number" << endl;
	cin >> x;
	cout << " enter another number" << endl;
	cin >> y;

	z = sum(x, y);
	cout << " the sum is " << z;


	cout << "               " << endl;
	cin>>mehran.make;
	cin>>mehran.model;
	cin>>mehran.year;
	display_car_model(mehran);
	*/
	int var=100;
	cout << " address " << &var<<endl;
	int *x = &var;
	cout << *x<<endl;
	*x = 200;
	cout << " var :" << var<<endl;

	return 0;


}

int sum(int x, int y) { return (x + y); };

void display_car_model(car_model x) {
	cout << " printed " << x.make << " " << x.model << " " << x.year << endl;




}