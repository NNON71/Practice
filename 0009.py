a = [int(x) for x in input().split()]
a.sort()
text = str(input())
for i in text:
    if i == 'A':
        print(a[0],end=' ')
    if i == 'B':
        print(a[1],end=' ')
    if i == 'C':
        print(a[2],end=' ')

