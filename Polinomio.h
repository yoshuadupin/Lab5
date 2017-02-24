
#include <vector>

using namespace std;
#ifndef POLINOMIO_H
#define POLINOMIO_H
class Polinomio
{
private:
	int grado;
	//El primer coeficiente es el del mayor grado
	vector<int> coeficientes;
public:
	Polinomio();
	Polinomio(vector<int> , int);
	~Polinomio();
	
	void setGrado(int);
	void setCoeficientes(vector<int>);

	int getGrado();
	int getCoeficiente(int);
	vector<int> getCoeficientes();

	//Sobrecarga de suma
	Polinomio operator+(Polinomio poli){
		vector<int>suma;
		int gradoMenor = 0;

		//Condicion para sacar el grado
		if (this->grado <= poli.getGrado()){
			gradoMenor = this->grado;
			/*if (this->grado == poli.getGrado()){
				gradoMenor = gradoMenor-1;		
			}*/	
		}else{
			gradoMenor = poli.getGrado();
		}

		for (int i = 0; i <= gradoMenor; ++i){
			suma.push_back(this->getCoeficientes()[i] + poli.getCoeficientes()[i]);
		}

		return Polinomio(suma , gradoMenor);
	}
	Polinomio operator-(Polinomio poli){
		vector<int>resta;
		int gradoMenor = 0;

		//Condicion para sacar el grado
		if (this->grado <= poli.getGrado()){
			gradoMenor = this->grado;
			/*if (this->grado == poli.getGrado()){
				gradoMenor = gradoMenor-1;		
			}*/	
		}else{
			gradoMenor = poli.getGrado();
		}

		for (int i = 0; i <= gradoMenor; ++i){
			resta.push_back(this->getCoeficientes()[i] - poli.getCoeficientes()[i]);
		}

		return Polinomio(resta , gradoMenor);

	}

};
#endif