#hello beta
#include <iostream>
using namespace std;

struct car {
	int modelnumber;
	int partnumber;
	float cost;
};


void main() {

	car mehran, alto;
	car mazda;

	mehran = { 111,101,125000.0 };

	mazda = mehran;

	//mehran.modelnumber = 111;
	//mehran.partnumber = 101;
	//mehran.cost = 125000.0;

	alto.modelnumber = 222;
	alto.partnumber = 202;
	alto.cost = 135000.0;

	cout << " mehran data " << endl << mehran.modelnumber<<endl<<mehran.cost<<endl<<mehran.partnumber<<endl;
	cout << " alto data " << endl << alto.modelnumber << endl << alto.cost << endl << alto.partnumber<<endl;
	cout << " mazda data " << endl << mazda.modelnumber << endl << mazda.cost << endl << mazda.partnumber << endl;

}