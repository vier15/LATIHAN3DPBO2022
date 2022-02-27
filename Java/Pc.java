public class Pc {

    /* Private Attribute */
    private Processor attProcie;
    private Disk attDisk;
    private Ram attRam;
    private int totalPrice;

    /* Constuctor */
    public Pc() {
        
    }

    public Pc(Processor attProcie, Disk attDisk, Ram attRam, int totalPrice) {
        this.attProcie = attProcie;
        this.attDisk = attDisk;
        this.attRam = attRam;
        this.totalPrice = totalPrice;
    }

    /* Setter dan Getter Processor */
    public void setProcessor(Processor attProcie) {
        this.attProcie = attProcie;
    }

    public Processor getProcessor() {
        return this.attProcie;
    }

    /* Setter dan Getter Disk */
    public void setDisk(Disk attDisk) {
        this.attDisk = attDisk;
    }

    public Disk getDisk() {
        return this.attDisk;
    }

    /* Setter dan Getter Ram */
    public void setRam(Ram attRam) {
        this.attRam = attRam;
    }

    public Ram getRam() {
        return this.attRam;
    }

    /* Setter dan Getter Total Price */
    public void setTotalPrice() {
        this.totalPrice = this.attDisk.getPrice() + this.attProcie.getPrice() + this.attRam.getPrice();
    }

    public int getTotalPrice() {
        return totalPrice;
    }

    public void printPcData() {
        System.out.println("__My PC Build Plan___________________");
        System.out.println("[Processor]");
        System.out.println("Name : " + this.attProcie.getName());
        System.out.println("Price : RP" + this.attProcie.getPrice());
        System.out.println("");
        System.out.println("[Disk]");
        System.out.println("Type : " + this.attDisk.getType());
        System.out.println("Capacity : " + this.attDisk.getCapacity());
        System.out.println("Price : RP" + this.attDisk.getPrice());
        System.out.println("");
        System.out.println("[RAM]");
        System.out.println("Capacity : " + this.attRam.getCapacity());
        System.out.println("Price : RP" + this.attRam.getPrice());
        System.out.println("_____________________________________");
        System.out.println("Total Build Price : RP" + this.getTotalPrice());
    }

}