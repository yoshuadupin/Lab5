#include "Polinomio.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> v1(4 ,1);
	vector<int> v2(5 ,2);	
	Polinomio f1 = Polinomio(v1 , 3);
	Polinomio f2 = Polinomio(v2 , 4);
	Polinomio f3 = f1-f2;	
	for (int i = 0; i < f3.getCoeficientes().size(); ++i)	{
		cout<<f3.getCoeficiente(i)<<endl;
	}
	

	return 0;
}