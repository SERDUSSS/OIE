from math import ceil

output = ""

while 1:
    inp = input()
    
    n = inp.split(' ')
    
    n2 = n[1]
    n = n[0]

    if n == "0":
        break
    
    if n2 == 0:
        output += "0"
        pass
    
    res = int(n2) / int(n)

    if res != round(res):
        res = round(res) + 1
    res = round(res)
    output += str(res) + "\n"

print(output[:len(output)-1])