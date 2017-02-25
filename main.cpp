#include "Polinomio.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> v1(4 ,4);
	vector<int> v2(3,1);	
	Polinomio f1 = Polinomio(v1 , 3);
	Polinomio f2 = Polinomio(v2 , 2);
/*	Polinomio f4 = f1+f2;
	Polinomio f3 = f1*f2;	

*/
	cout<<f1();
	/*if(f1 != f2){
		cout<<"Son putos diferentes";
	}else{
		cout<<"son iguales";
	}*/
	/*cout<<"Suma"<<endl;
	for (int i = 0; i < f4.getCoeficientes().size(); ++i)	{
		cout<<f4.getCoeficiente(i)<<endl;
	}
	
	cout<<"Multiplicacion"<<endl;
	for (int i = 0; i < f3.getCoeficientes().size(); ++i)	{
		cout<<f3.getCoeficiente(i)<<endl;
	}
	
*/
	return 0;
}