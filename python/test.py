class car:
    def __init__(self,year):
        self.__year = year
        self.__year1 = year
        
my_car = car(2022)
#print(my_car.__year1)
#my_car.__year = 2000
print(my_car.__year)