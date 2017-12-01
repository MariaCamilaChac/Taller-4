#include <vector>
#include <string>
#include <sstream>
#include <iostream>
/*
*
* Estructura de Datos- punto 3
*	@author :Camila chacón
*	@date 28-11-2017
*	@version 3
*
*/
 
 
 using namespace std;
 
 int linearSearch(int array[],int tam, int valor){
 	for(int i = 0 ; i < tam ; i++){
 		if(valor == array [i]){
		 return i ;
		 }
	 }
	return -1;
 }
 
 
  int arreglo(int array[], int tam){
  	
  	for(int i = 0 ; i < tam ; i++){
 	
	  cout <<  " [" << array[i] << "] " << endl;
	 
	 }
  }
 
 
 int main (){
 	
 	int x;
 	int y;
 	
 	string str;
    vector<int> vect;
    
    cout <<"ingrese el tamaño del arreglo: " << endl;
 	cin >> x;
    int a[x];
    cout << "Digite los números: \n";
    cin >> str;
    stringstream ss(str);
    int i;
    
    while (ss >> i){
        vect.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
    for (i=0; i< vect.size(); i++){
    	a[i] = vect.at(i);
	}
        
 	
 	
 	cout <<"ingrese numero que desea buscar: " << endl;
 	cin >> y;

	int result = linearSearch(a,x,y);
		
	arreglo(a,x);
	
 	if(result >= 0){
 		cout << "El numero " << a[result]<< " se encontro"
		 " en el indice " << result << endl;
	 }
	 else{
	 	cout << "El numero " << y <<" no se encontro dentro del arreglo "<< endl;
	 }
 }


