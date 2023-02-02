letras = int(input())

entrada = input().split(' ')

puertas = []

for i in range(letras):
    puertas += ["A"]

def ejecutar_entrada(str):
    
    if str == "F": #termina
        exit()
    
    if str == "M": #printea
        print(' '.join(puertas))
    
    if str == "T": #cierra todas
        for i in range(len(puertas)):
            puertas[i] = "C"
    
    if str == "I":#invierte todas
        for i in range(len(puertas)):
            if puertas[i] == "A": puertas[i] = "C"
            else: puertas[i] = "A"
            
    if str == "C":# abre las divisibles entre 4
        for i in range(len(puertas)):
            if i%4 == 0:
                puertas[i] = "A"
                
    if str == "S":# cierra las divisibles entre 7
        for i in range(len(puertas)):
            if i%7 == 0:
                puertas[i] = "C"
    
    if str == "P": # cierra la primera puerta abierta
        for i in range(len(puertas)):
            if puertas[i] == "A":
                puertas[i] = "C"
                return 0
    
    if str == "U": # abre la ultima puerta cerrada
        for i in range(len(puertas)):
            if puertas[len(puertas)-1-i] == "C":
                puertas[len(puertas)-1-i] = "A"
                return 0
                
    
for i in range(len(entrada)):
    ejecutar_entrada(entrada[i])