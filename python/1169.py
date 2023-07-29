def main():
    mapping = {')':'('}
    stack = []
    n=0
    string = input()
    for str in string:
        if str in mapping:
            if not stack or stack.pop() != mapping[str]:
                n += 1
        else:
            stack.append(str)
    print(stack)
    print(n)

if __name__ == '__main__':
    main()