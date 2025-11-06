#esercizio non facoltativo

def lunghezze_parole(A):
    B = [len(parola) for parola in A]
    return B

#inserire la lista qui sotto
A = ["ciao", "vivace", "cielo"]
B = lunghezze_parole(A)
print(B)
