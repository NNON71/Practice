data = {"S":[],"B":[]}
n = int(input())
best = 1000000000

def diff(a,b):
    return abs(a-b)

def recusion(i,sourness,bitter):
    global best
    if i == n:
        if sourness > 0 and diff(sourness,bitter) < best:
            best = diff(sourness,bitter)
    else:
        recusion(i+1,sourness,bitter) 
        recusion(i+1,sourness*data["S"][i],bitter+data["B"][i])
    
def main():
    for i in range(n):
        s, b = [int(x) for x in input().split()]
        data['S'].append(s)
        data['B'].append(b)
    recusion(0,1,0)
    print(best)
    
if __name__ == "__main__":
    main()