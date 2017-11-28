/**
 * Name: camila chacon
 * Date: 28/11/17
 * Parameter: array
**/

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;

public class metodos {
	
	 public static void imprimeArray(int[] array){ //Function for print
	        for (int i = 0; i < array.length; i++) {
	            System.out.print("[" + array[i] + "]");
	        }
	    }

	 
	  public static void ordenacionMergeSort(int vec[]){  //function 
          if(vec.length<=1) return;
          int mitad= vec.length/2;  // need split the array in half
          int izq[]=Arrays.copyOfRange(vec, 0, mitad);  //this function allow obtain a range of the matrix and save it in a new array
          int der[]=Arrays.copyOfRange(vec, mitad, vec.length);
          ordenacionMergeSort(izq);
          ordenacionMergeSort(der);       
          combinarVector(vec, izq, der);
  }
  
  public static void combinarVector(int v[], int izq[],int der[]){ // Function to compare and link up the arrays
          int i=0;
          int j=0;
          //create the iterations with conditionals for sort the arrays separately
          for(int k=0;k<v.length;k++){
                  if(i>=izq.length){
                          v[k]=der[j];
                          j++;
                          continue;
                  }
                  if(j>=der.length){
                          v[k]=izq[i];
                          i++;
                          continue;
                  }
                  if(izq[i]<der[j]){
                          v[k]=izq[i];
                          i++;
                  }else{
                          v[k]=der[j];
                          j++;
                  }
          }
  }
  
  
  public static void main(String[] args) throws IOException {
	BufferedReader br = new BufferedReader (new InputStreamReader (System.in));	
	BufferedWriter bw = new BufferedWriter (new OutputStreamWriter (System.out));
	
	metodos c = new metodos() ;
		
	bw.write("escriba el tamaño del arreglo");
	bw.flush();	
	int T = Integer.parseInt(br.readLine());
		
	bw.write("escriba los numeros del arreglo, recuerde que deben ir separados por comas (,) \n");
	bw.flush();
	String Arreglo= br.readLine();
		String [] Particion = Arreglo.split(",");
		int array [] = new int [T]; 
	
		for (int i = 0; i < array.length; i++) {
			  array[i]=Integer.parseInt(Particion[i]); //convert the array of string in array of integer
			}
		
		c.imprimeArray(array);  //call the function
		System.out.println("\n"+"Merge Sort");
		c.ordenacionMergeSort(array);  // call the function
		c.imprimeArray(array);  // call the function
		

	
  }

}


