def main():
    text = str(input())
    l1 = ['.']
    l2 = ['.']
    l3 = ['#']
    for i in range(len(text)):
        l1.extend(['.','#','.','.'])
        l2.extend(['#','.','#','.'])
        l3.extend(['.',text[i],'.','#'])
        if i%3 == 0 and i != 0:
            print(i,text[i])
            l1[i*3+1] = '*'
            l2[i],l2[3] = '*','*'
            l3[0],l3[4] = '*','*'
    print(l1)
    print(l2)
    print(l3)
    print(l2)
    print(l1)

if __name__ == '__main__':
    main()