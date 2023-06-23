n,k = [int(i) for i in input().split()]

def prime_check(n):
    while n>1:
        for i in range(2,int(n**0.5)+1):
            if n%i == 0:
                return False
        return True

all_num = [n for n in range(2,n+1)]
primelist = [i for i in all_num if prime_check(i)]
result = []

for i in primelist:
    for j in all_num:
        if j%i == 0:
            result.append(j)
            all_num.remove(j)
            
print(result[k-1])