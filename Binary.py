"""
Created on 28 nov 2017
@author camila
"""

from random import randint


# function quick sort, parameter array
def Quick_sort(V): 
    pivote = len(V) // 2  # here the array is going to be split 
    menor, igual, mayor = [], [], []  # create arrays that contain minor and major numbers to the pivot

    for i in range(len(V)):  # iteration for conditionals
        if (V[i] < V[pivote]):
            menor.append(V[i])
        elif (V[i] > V[pivote]):
            mayor.append(V[i])
        else:
            igual.append(V[i])

    if len(menor) > 1:  # we have three arrays undity, the going to be organized 
        menor = Quick_sort(menor)
    if len(mayor) > 1:
        mayor = Quick_sort(mayor)
    return menor + igual + mayor  # Return all of array 


def main():
    Tamain = (input("Escriba la Sucesion de numeros separados por comas \n"))
    print(Tamain)
    Tamain_2 = Tamain.split(",")  # pass the String array to integer array
    print(Tamain_2)
    Tamain_3 = Quick_sort(Tamain_2)
    print(Tamain_3)

    Valor = (input("Ingrese un numero a buscar \n"))

    Inicio = 0
    Final = (len(Tamain_3) - 1)  
    Positivo = False

    while (not (Positivo) and Inicio <= Final):  #  the array need to be smaller than length of array
        mitad = int((Inicio + Final) / 2)  # assign the half od array to index "mitad"
        if (Valor == Tamain_3[mitad]):  #if the search number is equal to half of array return the index
            Positivo = True
            Num = mitad
        elif (Valor < (Tamain_3[mitad])):  # if the search number is smaller than half of array subtract an index
            Final = mitad - 1

        else:  # if the search number is bigger than half of array add an index
            Inicio = mitad + 1
    print()

    if (Positivo):
        print("El Numero se encuentra y se localiza en la posicion " + str(Num))
    else:
        print("El dato no se encuentra")
    print()


main()
