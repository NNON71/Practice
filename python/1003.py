def main():
    answer = False
    n = int(input())
    nugget = [False]*150
    nugget[3] = True
    nugget[6] = True
    nugget[9] = True
    for i in range(100):
        if nugget[i] and i <= n:
            answer = True
            nugget[i+3] = True
            nugget[i+6] = True
            nugget[i+20] = True
      
    if not answer:
        print('no')


if __name__ == '__main__':
    main()