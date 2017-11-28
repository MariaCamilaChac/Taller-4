

from random import randint
# create the function
def Quick_sort(V):
    pivote = len(V) // 2  # split the array
    less, iqual, higher = [], [], []

    for i in range(len(V)):  # create the iterations for with conditionals for separate the major and minor numbers
        if (V[i] < V[pivote]):
            less.append(V[i])
        elif (V[i] > V[pivote]):
            higher.append(V[i])
        else:
            iqual.append(V[i])

    if len(less) > 1:  # define which half will take
        less = Quick_sort(less)
    if len(higher) > 1:
        higher = Quick_sort(higher)
    return less + iqual + higher


def main():
    Lenght = (input("Escriba la Sucesion de numeros separados por comas \n"))
    print(Lenght)
    Lenght2 = Lenght.split("," or ".")
    print(Lenght2)
    print(Quick_sort(Lenght2))


main()


