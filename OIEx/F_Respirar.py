output = ""

vocales = ["a","e","i","o","u"]
vocales_mayus = ["A","E","I","O","U"]

texto = input()

for i in range(5):
    for e in range(5):
        texto = texto.replace(vocales[e], vocales[i])
        texto = texto.replace(vocales_mayus[e], vocales_mayus[i])
    print(texto)