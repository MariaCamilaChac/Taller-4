""" @created on 28 nov. 2017
@author: CamilaCh
@version: 2"""

from random import randint
# create the function
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
    Lenght = (input("Escriba la Sucesion de numeros separados por comas \n"))
    print(Lenght)
    Lenght2 = Lenght.split(",")
    print(Lenght2)
    Lenght3 = Lenght.split(",")
    for i in range(0, len(Lenght2)):
        Lenght3[i] = int(Lenght2[i])
    print(Lenght3)

    print(Quick_sort(Lenght3))

main()


