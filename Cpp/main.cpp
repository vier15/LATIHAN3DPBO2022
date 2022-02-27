#include <iostream>
#include <string>

using namespace std;

#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"
#include "Pc.cpp"

int main() {

    /* Variabel penampu input */
    
    /* Processor */
    string inputProcieName;
    int inputProciePrice;
    /* Disk */
    string inputDiskType;
    string inputDiskCapacity;
    int inputDiskPrice;
    /* Hardware */
    string inputRamCapacity;
    int inputRamPrice;

    /* Inputting */
    cout << "Input Processor Name... ";
    cin >> inputProcieName;

    cout << "Input Processor Price... ";
    cin >> inputProciePrice;

    cout << "Input Disk Type... ";
    cin >> inputDiskType;

    cout << "Input Disk Capacity... ";
    cin >> inputDiskCapacity;

    cout << "Input Disk Price... ";
    cin >> inputDiskPrice;

    cout << "Input Ram Capacity... ";
    cin >> inputRamCapacity;

    cout << "Input Ram Price... ";
    cin >> inputRamPrice;

    /* Deklarasi objek Processor dengan nama processor1*/
    Processor processor1;
    processor1.setName(inputProcieName);
    processor1.setPrice(inputProciePrice);
    /* Deklarasi objek Disk dengan nama disk1 */
    Disk disk1;
    disk1.setType(inputDiskType);
    disk1.setCapacity(inputDiskCapacity);
    disk1.setPrice(inputDiskPrice);
    /* Dekalrasi objek Ram dengan nama ram1 */
    Ram ram1;
    ram1.setCapacity(inputRamCapacity);
    ram1.setPrice(inputRamPrice);
    /* Deklarasi objek Pc dengan nama pc1 */
    Pc pc1;
    pc1.setProcessor(processor1);
    pc1.setDisk(disk1);
    pc1.setRam(ram1);
    /* Hitung total price komponen PC */
    pc1.setTotalPrice();
    /* Tampilkan data komponen PC */
    pc1.printPcData();

    return 0;
}