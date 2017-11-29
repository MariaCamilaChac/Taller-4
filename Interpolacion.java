/**
 *Taller 4
 * @author CamilaCh
 * @date 28/11/2017
 * @version 2
 */
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Interpolacion {
	 

	
 static int BusquedaInterpolacion(int x, int []arr) { // create the function
	 int lowerBound = 0;
	 int higherBound = (arr.length - 1); //Max index of array
	 while (lowerBound <= higherBound && x >= arr[lowerBound] && x <= arr[higherBound]){ // the number for search need to be in the range 
		 
		 //do the operation to find out if the number search is equal to the result 
		 int middle = lowerBound + (((higherBound-lowerBound) /(arr[higherBound]-arr[lowerBound]))*(x - arr[lowerBound]));
		 
		 if (arr[middle] == x) //if is equal return the position
	      return middle;
		 
		 if (arr[middle] < x) //if the number in that index is smaller than search number, now the operation begin with the result plus one
			 lowerBound = middle + 1;
	      else
	    	  //if the number in that index is bigger than search number, now the operation begin with the result minus one
	    	  higherBound = middle - 1;
	        }
	        return -1; // if the search number is'n in the range return -1
	    }
 
 public void ordShellArry(int[] array){
     int intervalo = array.length / 2, j, k, temp;
     while (intervalo > 0){
         for (int i = intervalo; i < array.length; i++) {
             j = i - intervalo;
             while (j >= 0){
                 k = j + intervalo;
                 if (array[j] <= array[k]) {
                     j = -1;
                 }
                 else{
                         temp = array[j];
                         array[j] = array[k];
                         array[k] = temp;
                         j -= intervalo;
                     }
             }
         }
         intervalo = intervalo / 2;
     }
 }
 
 public static void imprimeArray(int array[]){
     for (int i = 0; i < array.length; i++) {
         System.out.print("[" + array[i] + "]");
     }
 }



 public static void main(String[] args) throws IOException {
	BufferedReader br = new BufferedReader (new InputStreamReader (System.in));	
	BufferedWriter bw = new BufferedWriter (new OutputStreamWriter (System.out));		
	
	Interpolacion c = new Interpolacion() ;
				
	bw.write("escriba el tamaño del arreglo");
	bw.flush();	
	int T = Integer.parseInt(br.readLine());
				
	bw.write("escriba los numeros del arreglo, recuerde que deben ir separados por comas (,) \n");
	bw.flush();
	String Arreglo= br.readLine();
	
	String [] Particion = Arreglo.split(",");
	int array [] = new int [T]; 
	for (int i = 0; i < array.length; i++) {
		  array[i]=Integer.parseInt(Particion[i]); // convert the array of string in array of integer
		}
	
	c.ordShellArry(array);
	c.imprimeArray(array);
	
	bw.write("\nEscriba el numero que desea buscar");
	bw.flush();	
	int buscar = Integer.parseInt(br.readLine());
			
	int index= BusquedaInterpolacion(buscar, array); // call the function			
	
	System.out.print("\n"+"Busqueda por Interpolación \n");
	
	if (index != -1) 
		System.out.println("es numero se encuentra en la posición o indice numero: "+index);
	
	else
	System.out.println("el numero no se encuentra dentro del arreglo");
    
				
	  }
}
