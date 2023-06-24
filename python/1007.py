def main():
    data = list(map(int,input().split()))
    data.pop()
    work = [2,4]
    i=1
    while i <= max(data): 
        work.append(work[i]+1+work[i-1])
        i+=1
    for i in data:
        print(work[i-1],work[i])
        
if __name__ == '__main__':
    main()