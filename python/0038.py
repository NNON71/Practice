n = int(input())
result = []
for i in range(n):
    x = input()
    if x not in result:
        result.append(x)
print('\n'.join(sorted(result)))