#include <iostream>
#include <string.h>
#include <vector>
#include <cstdlib>
#include <sstream>
// bring the libray
using namespace std; 
 
 /**Param:array
 * Author: Maria Camila CHacon
 * Date:27/11/2017
 */

void BubbleSort (int array[], int T){ // create the ordering method
	int pasada;
   
        int interruptor = 1, aux; // create the variables
        for (pasada = 0; pasada < T - 1 && interruptor == 1 ; pasada++) {
            interruptor = 0;
            for (int j = 0; j < T - pasada -1; j++) {
                
				if (array[j] > array[j+1]) {
                    interruptor = 1;
                    aux = array[j];
                    array[j] = array[j+1];
                    array[j+1] = aux;
                }
                
            }
        }
    }

void ImprimirArray (int array[],int T){  // create the method for print the array
  	
  	for(int i = 0 ; i < T ; i++){
 	
	  cout <<  " [" << array[i] << "] " << endl;
	 
	 }
  
}





int main()
{
	
	string str;
    vector<int> vect; // bring the vector library 
	
	int T=0;
	
	cout << "ingrese el tamaño del arreglo "<< endl; // ask the length of array
	cin >> T;
	
	int  B [T]; // create the principal array
	cout << "Ingrese los numeros del arreglo, recuerde que debe ir separado por comas " << endl ;
	 cin >> str;
    stringstream ss(str); // this library allows any type of data, even if they are mixed
    int i;
	
 while (ss >> i){
        vect.push_back(i); //Value to be copied (or moved) to the new element.
        if (ss.peek() == ',') //Returns the next character in the input sequence, without extracting it
            ss.ignore(); //Extracts characters from the input sequence and discards them
    }
    for (i=0; i< vect.size(); i++){
    	B[i] = vect.at(i); // assign the new chay in array without comas
	}
	
	// call the methods
	ImprimirArray(B,T);
	cout << endl;
	BubbleSort(B,T);
	ImprimirArray(B,T);

	
	return 0;
	
}
