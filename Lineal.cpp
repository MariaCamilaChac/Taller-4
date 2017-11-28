#include <iostream>
#include <cstdlib>
/*
*
* Estructura de Datos- punto 3
*	@author :Camila chacón
*	@date 28-11-2017
*	@version 1
*
*/
 using namespace std;
 //metodo lineaSearch
 int linearSearch(int array[],int tam, int valor){
 	for(int i = 0 ; i < tam ; i++){
 		if(valor == array [i]){
		 return i ;
		 }
	 }
	return -1;
 }

 //aplicacion del metodo
 int main (){
 	
 	int x;
 	int y;
 	cout <<"ingrese el tamaño del arreglo: " << endl;
 	cin >> x;
 	cout <<"ingrese numero que desea buscar: " << endl;
 	cin >> y;
 	
 	int array[] = {1+ rand()% 50};
	int result = linearSearch(array,x,y);
		
	arreglo(array,x);
	
 	if(result >= 0){
 		cout << "El numero " << a[result]<< " se encontro"
		 " en el indice " << result << endl;
	 }
	 else{
	 	cout << "El numero " << y <<" no se encontro. "<< endl;
	 }
 }
