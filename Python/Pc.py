from Processor import Processor
from Disk import Disk
from Ram import Ram

class Pc():

    #private attributes
    __attProcie = Processor()
    __attDisk = Disk()
    __attRam = Ram()
    __totalPrice = 0

    #Constructor
    def __init__(self, attProcie = Processor(), attDisk = Disk(), attRam = Ram(), totalPrice = 0):
        self.__attProcie = attProcie
        self.__attDisk = attDisk
        self.__attRam = attRam
        self.__totalPrice = totalPrice

    #Setter dan Getter Processor
    def setProcessor(self, attProcie):
        self.__attProcie = attProcie

    def getProcessor(self):
        return self.__attProcie
    
    #Setter dan Getter Disk
    def setDisk(self, attDisk):
        self.__attDisk = attDisk

    def getDisk(self):
        return self.__attDisk

    #Setter dan Getter Ram
    def setRam(self, attRam):
        self.__attRam = attRam

    def getDisk(self):
        return self.__attRam

    #Setter dan Getter Total Price
    def setTotalPrice(self):
        self.__totalPrice = self.__attProcie.getPrice() + self.__attDisk.getPrice() + self.__attRam.getPrice()

    def getTotalPrice(self):
        return self.__totalPrice

    #Print data Pc
    def printPcData(self):
        print("__My PC Build Plan___________________")
        print("[Processor]")
        print("Name : " + str(self.__attProcie.getName()))
        print("Price : RP" + str(self.__attProcie.getPrice()))
        print("")
        print("[Disk]")
        print("Type : " + str(self.__attDisk.getType()))
        print("Capacity : " + str(self.__attDisk.getCapacity()))
        print("Price : RP" + str(self.__attDisk.getPrice()))
        print("")
        print("[RAM]")
        print("Capacity : " + str(self.__attRam.getCapacity()))
        print("Price : RP" + str(self.__attRam.getPrice()))
        print("_____________________________________")
        print("Total Build Price : RP" + str(self.getTotalPrice()))