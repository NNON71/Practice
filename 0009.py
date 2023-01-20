x = [1,0,0]
text = input()
for i in text:
    if i == 'A':
        x[1] , x[0] = x[0] , x[1]
    elif i == 'B':
        x[2] , x[1] = x[1] , x[2]
    elif i == 'C':
        x[0] , x[2] = x[2] , x[0]
print(x.index(1)+1)