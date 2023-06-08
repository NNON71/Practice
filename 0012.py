# x = input()
# for i in range(len(x)):
#     match (i+1)%3:
#         case 1 :
#             for i in range(5):
#                 if i == 0 or i == 4: 
#                     print('..#.',end='')
#                 for j in range(4):
#                     if (i+j)%2 != 0 and i != 0 and i != 4:
#                         print('.',end='')
#                     elif (i+j)%2 == 0 and i != 0 and i != 4:
#                         print('#',end='')
#                 #print('',e)
#         case 2 :
#             for i in range(5):
#                 if i == 0 or i == 4: 
#                     print('..#.',end='')
#                 for j in range(4):
#                     if (i+j)%2 != 0 and i != 0 and i != 4:
#                         print('.',end='')
#                     elif (i+j)%2 == 0 and i != 0 and i != 4:
#                         print('#',end='')
#                 #print('')
#         case 0 :
#             for i in range(5):
#                 if i== 0 or i==4:
#                     print('..*..',end='')
#                 for j in range(4):
#                     if (i+j) != 0 and i != 0 and i != 4:
#                         print('.',end='')
#                     else:
#                         print('*',end='')
#                 #print('')
#     print('')

x = input()
n=1
nn = 1
b = 1
for i in range(1) :
    for j in range(4*len(x)+1):
        if j == (4*n)-2 and n%3 != 0:
            print('#',end='')
            n+=1
        elif j == (12*nn)-2:
            print('*',end='')
            nn+=1
            n+=1
        else :
            print('.',end='')
    n=0
    nn=0
    print('')
    for j in range(len(x)):
        if (j+1)%3 == 0 :
            print('.*.*',end='')
        elif j==0:
            print('.#.#',end='')
        else :
            print('.#.#',end='')        
    print('.',end='')
    
    print('')
    
    for i in range(len(x)):
        if (i+1)%3 == 0:
            print('*.',end='')
            print(x[i],end='')
            print('.*',end='')
        elif i == 0:
            print('#.'+x[i]+'.#',end='')
                        
        elif i!=0 and (i+1)%3 != 0:
            print('.'+x[i]+'.',end='')
            if i <= len(x) and i+1 > 3 and (i+1)%3 != 0:
                print('#',end='')
            elif i <=  len(x) and i+1>3 and (i+1)%3 == 0:
                print('*',end='')
            
    # if (len(x)+1) %3 == 0 :
    #     print('*')
    # elif len(x) %3 != 0 and len(x) !=1:
    #     print('#')

        