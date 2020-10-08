#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	double h;
	vector<double> x;
	double sum=0;
	int i=0;
	std::string pokracovat="ANO";
		

	cout << "Zadejte cisla: " << endl;

	
	while(pokracovat == "ANO" || pokracovat == "A" || pokracovat == "ano" || pokracovat == "a"|| pokracovat == "Ano")
	{
		cout << i+1 <<") ";
		cin >> h;
		x.push_back(h);
		++i;
		cout << "Chcete zadat dalsi cislo? ANO/NE" << endl;
		cin >> pokracovat;
	}
	
	for(int i=0; i < x.size(); ++i)
	{
		sum+=x[i];
	}
	
	cout << "Prumer: " << sum/i << endl;
	
	return 0;
}
