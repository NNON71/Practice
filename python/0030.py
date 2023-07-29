def recus(i,m3,m11,n):
    if i == len(n):
        return print(m3,m11)
    else:
        m3 = ((10 * m3) + int(n[i])) % 3
        m11 = ((10 * m11) + int(n[i])) % 11
        recus(i+1,m3,m11,n)

def test(n):
    o = 0
    e = 0
    for i in range(len(n)-1,-1,-2):
        o += int(n[i])
    for i in range(len(n)-2,-1,-2):
        e += int(n[i])
    print(o+e,e-o)

def main():
    n = input()
    #ecus(0,0,0,n)
    test(n)

if __name__ == '__main__':
    main()
    
