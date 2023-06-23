# text = input()
# upper = 0
# lower = 0
# for i in text:
#     if i.isupper() == True :
#         upper += 1
#     if i.islower() == True :
#         lower += 1
# if len(text) == upper:
#     print("All Capital Letter")
# if len(text) == lower:
#     print("All Small Letter")
# else:
#     print("Mix")

text = input()
if text.isupper() == True:
    print("All Capital Letter")
if text.islower() == True:
    print("ALL Small Letter")
else:
    print("Mix")