from Processor import Processor
from Disk import Disk
from Ram import Ram
from Pc import Pc

#input masukan user untuk data Memory
inputProcieName = str(input("Input Processor Name..."))
inputProciePrice = int(input("Input Processor Price..."))
inputDiskType = str(input("Input Disk Type..."))
inputDiskCapacity = str(input("Input Disk Capacity..."))
inputDiskPrice = int(input("Input Disk Price..."))
inputRamCapacity = str(input("Input Ram Capacity..."))
inputRamPrice = int(input("Input Ram Price..."))

print(" ")

#Deklarasi objek Processor dengan nama processor1
processor1 = Processor()
processor1.setName(inputProcieName)
processor1.setPrice(inputProciePrice)

#Deklarasi objek Disk dengan nama disk1
disk1 = Disk()
disk1.setType(inputDiskType)
disk1.setCapacity(inputDiskCapacity)
disk1.setPrice(inputDiskPrice)

#Deklarasi objek Ram dengan nama ram1
ram1 = Ram()
ram1.setCapacity(inputRamCapacity)
ram1.setPrice(inputRamPrice)

#Deklarasi objek Pc dengan nama pc1
pc1 = Pc()
pc1.setProcessor(processor1)
pc1.setDisk(disk1)
pc1.setRam(ram1)
#Hitung total price komponen PC
pc1.setTotalPrice()
#Tampilkan data komponen PC
pc1.printPcData()