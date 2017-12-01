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
 
  int arreglo(int array[], int tam){
  	
  	for(int i = 0 ; i < tam ; i++){
 	
	  cout <<  " [" << array[i] << "] " << endl;
	  
	 }
  }
  
  int insertionSort ( int array [], int tam){
  	int x;
  	int index;
  	for ( int i = 0; i < tam ; i++){
  		x = array[i];
  		index = i;
  		
  		while (index > 0 && array[index -1] > x){
  			array [index] = array [index-1];
  			index = index -1;
		  
		  }
		  
		  array[index]=x;
	  }
  	
  }
  
  
  int main (){
 	
 	int tam;
 	int y;
 	
 	string str;
    vector<int> vect;
    
    cout <<"ingrese el tamaño del arreglo: " << endl;
 	cin >> tam;
    int array[tam];
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
    	array[i] = vect.at(i);
	}
    
	arreglo(array,tam);
	cout << "insertion Sort"<< endl;
	insertionSort(array,tam);
	arreglo(array, tam);    
}
