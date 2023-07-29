def prime_check(n):
    for i in range(2,n):
        if n%i == 0:
            return False
    return True

def palindrom(n):
    n = str(n)
    return n==n[::-1]

def main():
    n = int(input())
    while 1:
        if prime_check(n) and palindrom(n):
            break
        else:
            n+=1
    print(n)
    
if __name__ == '__main__':
    main()