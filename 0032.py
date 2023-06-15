def main():
    n = int(input())
    data = sorted(map(int,input().split()))
    if data[0] == 0:
        a = data.index(min(i for i in data if i != 0))
        data[0],data[a] = data[a],data[0]
    print(''.join(map(str,data)))
    
if __name__ == '__main__':
    main()
    
'''
6
3 0 0 8 1 3
'''