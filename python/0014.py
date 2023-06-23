a,b = [int(x) for x in input().split()]
ans = [int(x) for x in range(1,100) if b%x == 0 and a%x == 0] 
print(max(ans))