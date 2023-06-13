def sol(n):
    if n%2 == 1 or n==2:
        print('T')
    else:
        print('F')

def main():
    n = int(input())
    data = [0]*n
    for i in range(n):
        data[i] = int(input())
    for i in data:
        sol(i)

if __name__ == '__main__':
    main()