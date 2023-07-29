def main():
    a,b,c = list(map(int,input().split()))
    if b**2 - 4*a*c < 0:
        print("No Solution")
    else:
        squa = (b**2-4*a*c)**0.5
        posx = (-b+squa)/(2*a)
        negx = (-b-squa)/(2*a)
        print(posx,negx)

if __name__ == '__main__':
    main()
    
'''
4 5 1 
1 1 4 1

1 1 1 
No Solution
'''