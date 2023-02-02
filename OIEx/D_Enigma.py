import sys
iteraciones = int(input())
inp = []

for i in range(iteraciones):
    inp += [sys.stdin.readline().rstrip('\n')]

for i in range(iteraciones):
    inp[i] = " ".join(inp[i].split())

for i in range(iteraciones):
    n = inp[i].split(' ')
    max = int(n[0])
    n = n[1:]
    var = int(n[0])

    for i in range(len(n)-1):
        if max-1 <= i: break
        var = var * int(n[i+1])
        to_write = str(var)

    print(to_write)