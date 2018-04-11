#include <iostream>
#include <ctime>
using namespace std; 




//declaracion de funcion multplicadora de matriz 

double** matrix_product(double** matA , double** matB, int filA, int colB,int colA, int filB){
// inicializar matriz resultado
double**matC = new double*[filA];	
int i = 0; 
	for (i=0; i<filA; i++){
		matA[i] = new double[colB];		
}
//recorre filas A y colB 
int j = 0; 
	for(i=0; i<filA; i++){
		for(j=0; j<colB;j++){
			matC[i][j]= 0;
//declara variable K para recorrer las columnas A y las filas B para hacer el ŕoducto punto. 
int k;
			for (k= 0; k<colA, k++){
		matC[i][j] += matA[i][k] * matB[k][j];

}
			cout << matC[i][j]<<"";
}		
	cout<< "\n";
}

}
//declaracion del main

int main(){
cout<<"ingrese filas A"
int N;
cin>>(N)
int M;
cout<<"ingrese columnas B"
cin>>(M)

}
