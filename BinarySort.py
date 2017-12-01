"""
Created on 28 nov 2017
@author camila
"""

from random import randint


# function quick sort, parameter array
def Quick_sort(Array):
    pivote = len(Array) // 2  # split the array
    less, iqual, higher = [], [], []

    for i in range(len(Array)):  # create the iterations for with conditionals for separate the major and minor numbers
        if (Array[i] < Array[pivote]):
            less.append(Array[i])
        elif (Array[i] > Array[pivote]):
            higher.append(Array[i])
        else:
            iqual.append(Array[i])
    print ()

    if len(less) > 1:  # define which half will take
        less = Quick_sort(less)
    if len(higher) > 1:
        higher = Quick_sort(higher)
    return less + iqual + higher


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