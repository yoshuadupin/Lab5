#include "Polinomio.h"

void Polinomio::setGrado(int grado){
	this->grado = grado;
}

void Polinomio::setCoeficientes(vector<int> coeficientes){
	this->coeficientes = coeficientes;
}

int Polinomio::getGrado(){
	return this->grado;
}

int Polinomio::getCoeficiente(int pos){
	return this->coeficientes[pos];
}

vector<int> Polinomio::getCoeficientes(){
	return this->coeficientes;
}

//Constructores
Polinomio::Polinomio(vector<int> coeficientes , int grado){
	this->coeficientes = coeficientes ; 
	this->grado = grado;	
}

Polinomio::~Polinomio(){
	this->coeficientes.clear();
}



