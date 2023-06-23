num_list = []
for i in range(9):
    num_list.append(int(input()))
diff = sum(num_list)-100
if diff > 0:
    b = [a for a in num_list if diff-a in num_list and num_list.index(a) != num_list.index(diff-a)]
num_list.remove(b[0])
num_list.remove(b[1])
for i in num_list:
    print(i)
