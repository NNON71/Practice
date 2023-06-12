def recurs(data,n):
    if data[0] == data[1] == data[2] == 1:
        print(n)
    else:
        if max(data)%2 == 1:
            data[data.index(max(data))] = (data[data.index(max(data))]-1)/2
        else:
            data[data.index(max(data))] -= data[data.index(max(data))]/2
        recurs(data,n+1)

def main():
    a,b,c = list(map(int,input().split()))
    recurs([a,b,c],0)

if __name__ == '__main__':
    main()