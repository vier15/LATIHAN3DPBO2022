class Processor():

    #private attributes
    __name = "Processsor Name"
    __price = 0

    #Constructor
    def __init__(self, name = "Processor Name", price = 0):
        self.__name = name
        self.__price = price

    #Setter dan Getter Name
    def setName(self, name):
        self.__name = name

    def getName(self):
        return self.__name
    
    #Setter dan Getter Price
    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price