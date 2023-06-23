n = int(input())
x = input()

Adrian = 'ABC'
Bruno = 'BABC'
Goran = 'CCAABB'
score = [0,0,0]

for i in range(n):
    if x[i] == Adrian[i%len(Adrian)]:
        score[0] += 1
    if x[i] == Bruno[i%len(Bruno)]:
        score[1] += 1
    if x[i] == Goran[i%len(Goran)]:
        score[2] += 1
        
print(max(score))
if max(score) == score[0]:
    print('Adrian')
if max(score) == score[1]:
    print('Bruno')
if max(score) == score[2]:
    print('Goran')