import sys
from itertools import permutations

output = ""

iteraciones = int(input())

inp = []

for i in range(iteraciones):
    inp += [sys.stdin.readline().rstrip('\n')]

    # [abc,cab,H,HOLA]

for i in range(len(inp)):
    new_arr = []
    arr = []
    for e in range(len(inp[i])):
        arr += inp[i][e]
        
        ## bien
    permutaciones = sorted(list(permutations(arr, len(arr))))
    
    for i in range(10000000):
        try:
            new_arr += [''.join(permutaciones[i]) + '\n']
        except:
            break
    output += ''.join(new_arr) + '\n'

print(output[:len(output)-2])