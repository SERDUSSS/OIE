import sys
import random

output = ""

iteraciones = int(input())

inp = []

for i in range(iteraciones):
    inp += [int(sys.stdin.readline().rstrip('\n'))]

done = False

for numero in range(len(inp)):

    n = 0
    n2 = 1

    for i in range(20):
        nth = n + n2
        
        if n > int(inp[numero]):
            break
        
        if int(inp[numero]) == n:
            output += "Fibonacci"
            done = True
            break
        
        n = n2
        n2 = nth

    if not done:
        output += "No Fibonacci"

    done = False
    output += "\n"

print(output[:len(output)-1])