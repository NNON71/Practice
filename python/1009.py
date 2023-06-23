def main():
    a,b = list(map(int,input().split()))
    cal_a = ''
    cal_b =''
    key = [' _ | ||_|','     |  |',' _  _||_ ',' _  _| _|','   |_|  |',' _ |_  _|',' _ |_ |_|',' _   |  |',' _ |_||_|',' _ |_| _|']
    numa = ['' for _ in range(a)]
    numb = ['' for _ in range(b)]
    for i in range(3):
        temp = input()
        for j in range(0,a):
            numa[j] += temp[j*4:j*4+3]
    for i in range(3):
        temp = input()
        for j in range(0,b):
            numb[j] += temp[j*4:j*4+3]
    for i in numa:
        cal_a += str(key.index(i))
    for i in numb:
        cal_b += str(key.index(i))
    print(int(cal_a)+int(cal_b))
    
if __name__ == '__main__':
    main()
    
'''
4 2
               
  | |_|   | |_|
  |   |   |   |
       
|_|   |
  |   |
'''