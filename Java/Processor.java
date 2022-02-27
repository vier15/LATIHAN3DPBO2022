public class Processor {

    /* Private Attribute */
    private String name;
    private int price;

    /* Constuctor */
    public Processor() {
        
    }

    public Processor(String name, int price) {
        this.name = name;
        this.price = price;
    }

    /* Setter dan Getter Name */
    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return this.name;
    }

    /* Setter dan Getter Price */
    public void setPrice(int price) {
        this.price = price;
    }

    public int getPrice() {
        return this.price;
    }

}