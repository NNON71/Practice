import math
def main():
    x,y = list(map(int,input().split()))
    if x>y:
        print(2)
    else:
        print(math.ceil(y/x))

if __name__ == '__main__':
    main()