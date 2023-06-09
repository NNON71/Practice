def main():
    days = ['Monday','Tuesday','Wednesday','Thursday','Friday','Saturday','Sunday']
    months = [31,28,31,30,31,30,31,30,31,30,31]
    d,m = list(map(int,input().split()))
    x = d+sum(months[:m-1])+2
    print(days[x%7])
    
if __name__ == "__main__":
    main()