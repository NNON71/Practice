def main():
    n = int(input())
    data = list(map(int,input().split()))
    count = list(data.count(i) for i in data)
    set_data = sorted(set(data))
    ans = list(i for i in set_data if data.count(i) == max(count))
    print(' '.join(map(str,ans)))

if __name__ == '__main__':
    main()
    
'''
7
4 3 9 8 3 3 8

3
'''

'''
7
12 2 1 12 1 1 12

1 12
'''