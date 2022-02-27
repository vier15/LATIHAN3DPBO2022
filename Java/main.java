import java.util.*;

public class main {

    public static void main(String[] args) {

        /* Deklarasi variabel tampungan input */

        /* Processsor */
        String inputProcieName = "";
        int inputProciePrice = 0;
        /* Disk */
        String inputDiskType = "";
        String inputDiskCapacity = "";
        int inputDiskPrice = 0;
        /* RAM */
        String inputRamCapacity = "";
        int inputRamPrice = 0;

        /* Deklarasi scanner untuk input */
        Scanner sc = new Scanner(System.in);

        /* Inputting */
        System.out.print("Input Processor Name... ");
        try{
                inputProcieName = sc.next();
        }catch(Exception e){}

        System.out.print("Input Processor Price... ");
        try{
                inputProciePrice = sc.nextInt();
        }catch(Exception e){}

        System.out.print("Input Disk Type... ");
        try{
                inputDiskType = sc.next();
        }catch(Exception e){}
        
        System.out.print("Input Disk Capacity... ");
        try{
                inputDiskCapacity = sc.next();
        }catch(Exception e){}

        System.out.print("Input Disk Price... ");
        try{
                inputDiskPrice = sc.nextInt();
        }catch(Exception e){}

        System.out.print("Input Ram Capacity... ");
        try{
                inputRamCapacity = sc.next();
        }catch(Exception e){}

        System.out.print("Input Ram Price... ");
        try{
                inputRamPrice = sc.nextInt();
        }catch(Exception e){}

        System.out.println(" ");
        
        /* Deklarasi objek Processor dengan nama processor1 */
        Processor processor1 = new Processor();
        processor1.setName(inputProcieName);
        processor1.setPrice(inputProciePrice);
        /* Deklarasi objek Disk dengan nama disk1 */
        Disk disk1 = new Disk();
        disk1.setType(inputDiskType);
        disk1.setCapacity(inputDiskCapacity);
        disk1.setPrice(inputDiskPrice);
        /* Deklarasi objek Ram dengan nama ram1 */
        Ram ram1 = new Ram();
        ram1.setCapacity(inputRamCapacity);
        ram1.setPrice(inputRamPrice);
        /* Deklarasi objek Pc dengan nama pc1 */
        Pc pc1 = new Pc();
        pc1.setProcessor(processor1);
        pc1.setDisk(disk1);
        pc1.setRam(ram1);
        /* Hitung total price komponen PC */
        pc1.setTotalPrice();
        /* Tampilkan data komponen PC */
        pc1.printPcData();

    }

}