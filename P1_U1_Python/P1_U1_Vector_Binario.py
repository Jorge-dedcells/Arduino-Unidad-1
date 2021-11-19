import random, collections #La libreria random aplica para la busqueda de valores aleatorios
# y collections para sumar todos los mismos valores de un vector

lista = [] #Se guardara el conteo de los numeros "1" de los vectores
probab = [] #Se acumula la probabilidad de cada sumatoria
oprand=0.0 #Este es un auxiliar que guarda el resultado del promedio

m = input("Ingresa una m cantidad de listas: ")
y=(int(m)) #

x = input("Ingresa una n cantidad de vectores: ")
n=(int(x))
print("")

for b in range (y): #Dentro de este for se estaran ingresando la cantidad de vectores
    A= [None] * n
    B= [None] * n
    L= [None] * n
    M= [None] * n

    for i in range (0,n): #Este es un for que crea numeros aleatorios dentro del rango especificado
        B[i]=random.randint(0,1)
        L[i]=random.randint(0,1)
        M[i]=random.randint(0,1)

    for i in range (0,n): #Este es un for recursivo que genera el vector de 01010
        if (B[i]==0):
            A[i]=L[i]
        elif (B[i]==1):
            A[i]=M[i]

    print(A)
    num_1=collections.Counter(A)[1] #Este es un conteo de el arreglo de solo los numeros "1"
    lista.append(num_1) #Se añadira a la lista el conteo de los numeros "1"
    num_0=collections.Counter(A)[0]

    print("Valor 1 del vector: " + str(num_1))
    print("Valor 0 del vector: " + str(num_0))

    num_dec = 0 #aquí iremos sumando el resultado de cada multiplicación

    for posicion, digit_string in enumerate(A[::-1]):
        num_dec += int(digit_string) * 2 ** posicion
    # En esta seccion se crea el numero binario a entero, el cual se convertira en
    # un numero entero el cual sera convertido en decimal

    prob = num_1/10 # Se toma el valor del numero binario valor "1" y se realiza la conversion decimal
    probab.append(prob) # Se acumula dentro de una lista todos lo elementos decimales

    print("El vector " + str(i) + " es: " + str(prob)) # Se muestra la posicion del ultimo
    # vector sumado y el total de la probabilidad de los numeros enteros
    print("El numero decimal aleatorio " + str(i) + " es: "+str(num_dec))
    # Se realiza lo mismo pero con el numero decimal
    print("")

suma_1=sum(lista) # Se suman los vectores enteros dentro de la lista
print("La suma de los vectores son : "+str(suma_1))

prom_v=sum(probab) # Se suman los vectores decimales dentro de la lista
print("El promedio de todos los vectores es: " +str(prom_v))

print("")

selec = input("Selecciona un vector de los generados \n anteriormente del registro 1 al x: ")
vc=int(selec) # Se le solicita al usuario tomar un registro en base a la cantidad de vectores ingresados
# este sera el vector X

for i in range(0,y): # Se realiza la resta de el vector seleccionado con los decimales
    oprand = (probab[vc] - probab[i])

if oprand <= 0: # Se muestra si el resultado es aceptado o negado
        print("Resultado del vector "+str(i+1)+" seleccionado: " +str(oprand)+ " es aceptado")
elif oprand > 0:
        print("Resultado al vector "+str(i+1)+" seleccionado: " +str(oprand)+ " es negado")
