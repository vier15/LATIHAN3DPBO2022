class Disk():

    #private attributes
    __type = "Disk Type"
    __capacity = "Disk Capacity"
    __price = 0

    #Constructor
    def __init__(self, type = "Disk Type", capacity = "Disk Capacity", price = 0):
        self.__type = type
        self.__capacity = capacity
        self.__price = price

    #Setter dan Getter Type
    def setType(self, type):
        self.__type = type

    def getType(self):
        return self.__type

    #Setter dan Getter Capacity
    def setCapacity(self, capacity):
        self.__capacity = capacity

    def getCapacity(self):
        return self.__capacity
    
    #Setter dan Getter Price
    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price