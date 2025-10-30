#Esercizio creato molto semplice oggi
print('Buongiorno, scegliere le lunghezze per calcolare i perimetri delle figure')

#creazione variabili con richiesta input
x = float(input('Inserire la lunghezza del lato del quadrato: '))
y = float(input('Inserire la lunghezza del raggio del cerchio: '))
z = float(input('Inserire la lunghezza della base del rettangolo: '))
k = float(input("Inserire la lunghezza dell'altezza del rettangolo: "))

#calcola i perimetri
a = x*4
b = 2*3.14*y
c = (z*2)+(k*2)

#printa tutti i perimetri calcolati prima
print('Il perimetro del quadrato è : ', a)
print('Il perimetro del cerchio è : ', b)
print('Il perimetro del rettangolo è : ', c)




