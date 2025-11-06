import secrets
import string

######utilizzo i moduli secrets e strings per creare delle password in due funzioni: 1 corta e 1 lunga
def gen_pass_lunga(lunghezza: int) -> str:
    caratteri = string.ascii_letters + string.digits + string.punctuation
    return ''.join(secrets.choice(caratteri) for _ in range(lunghezza))

def gen_pass_corta(lunghezza: int) -> str:
    caratteri = string.ascii_letters # solo lettere minuscole
    return ''.join(secrets.choice(caratteri) for _ in range(lunghezza))

######inserito blocco try except per gestire l'inserimento di valori diversi dagli interi
def main():
    try:
        n = int(input("Quanti caratteri vuoi nella password? (8 o 20): "))
    except ValueError:
        print("Inserisci un numero valido (8 o 20).")
        return

    if n == 8:
        pwc = gen_pass_corta(n)
        print("La password corta generata è:", pwc)
    elif n == 20:
        pwl = gen_pass_lunga(n)
        print("La password lunga generata è:", pwl)
    else:
        print("Inserire solo 8 o 20!")
        return

if __name__ == "__main__":
    main()

