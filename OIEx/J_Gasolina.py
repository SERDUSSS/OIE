output = ""

max_km = int(input())
fuel = max_km


while 1:
    
    num = int(input())
    
    if num == 0:
        break
    
    if fuel - num <= 0:
        output += "1"
        fuel = max_km
    else:
        output += "0"
        fuel = fuel - num
    
    
print(output)