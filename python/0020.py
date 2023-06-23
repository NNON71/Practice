def main():
    data = []
    for i in range(5):
        a,b,c,d = list(map(int,input().split()))
        data.append(sum([a,b,c,d]))
    print(data.index(max(data))+1,max(data))
    
if __name__ == "__main__":
    main()

'''
5 4 4 5
5 4 4 4
5 5 4 4
5 5 5 4
4 4 4 5

4 19
'''

'''
4 4 3 3
5 4 3 5
5 5 2 4
5 5 5 1
4 4 4 4

2 17
'''
