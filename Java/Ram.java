public class Ram {

    /* Private Attribute */
    private String capacity;
    private int price;

    /* Constuctor */
    public Ram() {
        
    }

    public Ram(String capacity, int price) {
        this.capacity = capacity;
        this.price = price;
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