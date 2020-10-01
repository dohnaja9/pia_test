#include <iostream>
#include <string>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
	double r;
	double v;
	double pi = 3.14;
	
	cout << "Zadejte polomer r: ";
	cin >> r;
	cout << "Zadejte vysku v: ";
	cin >> v;
	
	double s=sqrt(r*r+v*v);
	
	//cout << s << endl;
	
	double objem = (1.0/3.0)*pi*(r*r)*v;
	double plocha = pi*r*(r+s);
	
	ofstream kuzel;
	kuzel.open("kuzel.txt",ios::app);
	
	
	kuzel << "Plocha kuzelu je: "<< plocha << " mm^2"<< endl << "Objem kuzelu je: "<< objem << " mm^2"<< endl;
	kuzel.close();
	//cout << "Plocha kuzelu je: "<< plocha << " mm^2"<< endl << "Objem kuzelu je: "<< objem << " mm^2"<< endl;
	
	return 0;
}
