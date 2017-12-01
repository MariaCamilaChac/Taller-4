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

void BubbleSort (int array[], int T){
	int pasada;
   
        int interruptor = 1, aux;
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

void ImprimirArray (int array[],int T){
  	
  	for(int i = 0 ; i < T ; i++){
 	
	  cout <<  " [" << array[i] << "] " << endl;
	 
	 }
  
}





int main()
{
	
	string str;
    vector<int> vect;
	
	int T=0;
	
	cout << "ingrese el tamaño del arreglo "<< endl;
	cin >> T;
	
	int  B [T];
	cout << "Ingrese los numeros del arreglo, recuerde que debe ir separado por comas " << endl ;
	 cin >> str;
    stringstream ss(str);
    int i;
	
 while (ss >> i){
        vect.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
    for (i=0; i< vect.size(); i++){
    	B[i] = vect.at(i);
	}
	
	ImprimirArray(B,T);
	cout << endl;
	BubbleSort(B,T);
	ImprimirArray(B,T);

	
	return 0;
	
}
