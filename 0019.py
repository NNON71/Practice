n = int(input())
data = {}
for i in range(n):
    s,b = [int(a) for a in input().split()]
    data[i] = [s,b]

def match_function(n):
    for i in range(n):
        