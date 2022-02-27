public class Disk {

    /* Private Attribute */
    private String type;
    private String capacity;
    private int price;

    /* Constuctor */
    public Disk() {
        
    }

    public Disk(String type, String capacity, int price) {
        this.type = type;
        this.price = price;
    }

    /* Setter dan Getter Name */
    public void setType(String type) {
        this.type = type;
    }

    public String getType() {
        return this.type;
    }

    /* Setter dan Getter Capacity */
    public void setCapacity(String capacity) {
        this.capacity = capacity;
    }

    public String getCapacity() {
        return this.capacity;
    }

    /* Setter dan Getter Price */
    public void setPrice(int price) {
        this.price = price;
    }

    public int getPrice() {
        return this.price;
    }

}