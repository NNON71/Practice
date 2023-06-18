def main():
    n = int(input())
    data = []
    for i in range(n):
        data.append(int(input()))
    for i in data:
        print(2**i)
    
if __name__ == '__main__':
    main()