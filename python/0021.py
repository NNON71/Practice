def main():
    text = str(input())
    vowel_edit = ['apa','epe','ipi','opo','upu']
    for vowel in vowel_edit:
        text = text.replace(vowel,vowel[0])
    print(text)
    
if __name__ == "__main__":
    main()
    
'''
zepelepenapa papapripikapa

zelena paprika
'''

'''
bapas jepe doposapadnapa opovapa kepemipijapa

bas je dosadna ova kemija
'''