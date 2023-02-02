letras = "abcdefghijklmnopqrstuvwxyz"

casos = int(input())

for i in range(casos):
    output = ""
    clave = int(input())
    problema = input()

    for e in range(len(problema)):
        
        letra = problema[e]

        if letra not in letras and letra not in letras.upper(): output += letra; continue
        
        if letra.islower():
            if letras.find(letra.lower())+clave < len(letras)-1:
                output += letras[letras.find(letra.lower())-clave]
            else:
                output += letras[letras.find(letra.lower())-clave]
                

        elif letra.isupper():
            if letras.find(letra.lower())+clave < len(letras)-1:
                output += letras[letras.find(letra.lower())-clave].upper()
            else:
                output += letras[letras.find(letra.lower())-clave].upper()

        
    print(output)
