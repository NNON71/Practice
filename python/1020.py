import math
def main():
    text = input()
    text = text.lower()
    ran = len(text)
    if text == text[::-1]:
        if text[:ran//2:1] == text[math.ceil(ran/2)::1]: 
            print("Double Palindrome")
        else:
            print("Palindrome")
    else:
        print("No")

if __name__ == '__main__':
    main()
    
'''
A72Bb27A 

Palindrome

aB3Ba5ab3BA 

Double Palindrome

aB4 
No

'''