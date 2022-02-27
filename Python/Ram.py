class Ram():

    #private attributes
    __capacity = "Ram Capacity"
    __price = 0

    #Constructor
    def __init__(self, capacity = "Ram Capacity", price = 0):
        self.__capacity = capacity
        self.__price = price

    #Setter dan Getter Capacity
    def setCapacity(self, Capacity):
        self.__capacity = Capacity

    def getCapacity(self):
        return self.__capacity
    
    #Setter dan Getter Price
    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price