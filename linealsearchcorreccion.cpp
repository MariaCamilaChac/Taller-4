#include <vector>
#include <string>
#include <sstream>
#include <iostream>
/*
*
* Estructura de Datos- lineal search
*	@author :Camila chacón
*	@date 28-11-2017
*	@version 3
*
*/
 
 
 using namespace std;
 
 int linealSearch(int array[],int tam, int valor){ // create the order method
 	for(int i = 0 ; i < tam ; i++){
 		if(valor == array [i]){
		 return i ;
		 }
	 }
	return -1; // if the conditional is false return -1
 }
 
 
  int arreglo(int array[], int tam){ // create the method for print the array
  	
  	for(int i = 0 ; i < tam ; i++){
 	
	  cout <<  " [" << array[i] << "] " << endl;
	 
	 }
  }
 
 
 int main (){
 	
 	int x;
 	int y;
 	
 	string str;
    vector<int> vect; // bring the libray vector
    
    cout <<"ingrese el tamaño del arreglo: " << endl; // ask the length of array
 	cin >> x;
    int a[x]; // create de principal array
    cout << "Digite los números: \n";
    cin >> str;
    stringstream ss(str); 
    int i;
    
    while (ss >> i){
        vect.push_back(i); // //Value to be copied (or moved) to the new element.
        if (ss.peek() == ',') // Returns the next character in the input sequence, without extracting it
            ss.ignore(); //Extracts characters from the input sequence and discards them
    }
    for (i=0; i< vect.size(); i++){
    	a[i] = vect.at(i); // assign the new chay in array without comas
	}
        
 	
 	
 	cout <<"ingrese numero que desea buscar: " << endl;
 	cin >> y;
	 
	 // call the functions 

	int result = linealSearch(a,x,y);
		
	arreglo(a,x);
	
 	if(result >= 0){
 		cout << "El numero " << a[result]<< " se encontro"
		 " en el indice " << result << endl;
	 }
	 else{
	 	cout << "El numero " << y <<" no se encontro dentro del arreglo "<< endl;
	 }
 }


