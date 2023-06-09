def pattern1(n):
    r = n//2
    print('-'*(r-1) + '*' + '-'*(r-1))
    for i in range(1,r):
        print('-'*(r-i-1)+'*'+'-'*(2*i-1)+'*'+'-'*(r-i-1))
    for i in range(r-1,0,-1):
        print('-'*(r-i-1)+'*'+'-'*(2*i-1)+'*'+'-'*(r-i-1))
    print('-'*(r-1) + '*' + '-'*(r-1))
    
def pattern2(n):
    r = n//2+1
    print('-'*(r-1) + '*' + '-'*(r-1))
    for i in range(1,r):
        print('-'*(r-i-1)+'*'+'-'*(2*i-1)+'*'+'-'*(r-i-1))
    for i in range(r-2,0,-1):
        print('-'*(r-i-1)+'*'+'-'*(2*i-1)+'*'+'-'*(r-i-1))
    print('-'*(r-1) + '*' + '-'*(r-1))

def main():
    n = int(input())
    if n%2==0:
        pattern1(n)
    else:
        pattern2(n)

if __name__ == '__main__':
    main()
    
'''
4 
-*-
*-*
*-*
-*-
'''

'''
5 
--*--
-*-*-
*---*
-*-*-
--*--
'''

'''
6 
--*--
-*-*-
*---*
*---*
-*-*-
--*--
'''