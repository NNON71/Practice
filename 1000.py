def diff(a,b):
    n=0
    for i in range(len(a)):
        if a[i] != b[i]:
            n+=1
            if n > 2 :
                return True
    return False

def main():
    data = []
    l = int(input())
    n = int(input())
    for i in range(n):
        data.append(input())
    for i in range(0,n-1):
        if diff(data[i],data[i+1]):
            print(data[i])
            return 0
    print(data[-1])

if __name__ == '__main__':
    main()
    
'''
4
12
HEAD
HEAP
LEAP
TEAR
REAR
BAER
BAET
BEEP
JEEP
JOIP
JEIP
AEIO

REAR
'''

'''
4
5
HEAD
HEAP
LEAP
TEAR
REAR
'''