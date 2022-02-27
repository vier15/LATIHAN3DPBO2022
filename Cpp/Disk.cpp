class Disk {

    /* Private Attribute */
    private:

        string type;
        string capacity;
        int price;

    /* Public Attribute and Method */
    public:

        /* Constructor */
        Disk() {
            this->type = "Type";
            this->capacity = "Capacity";
            this->price = 0;
        }

        Disk(string type, string capacity, int price) {
            this->type = type;
            this->capacity = capacity;
            this->price = price;
        }

        /* Setter dan Getter Type */
        void setType(string type) {
            this->type = type;
        }

        string getType() {
            return this->type;
        }

        /* Setter dan Getter Capacity */
        void setCapacity(string capacity) {
            this->capacity = capacity;
        }

        string getCapacity() {
            return this->capacity;
        }

        /* Setter dan Getter Price */
        void setPrice(int price) {
            this->price = price;
        }

        int getPrice() {
            return this->price;
        }

        /* Destructor */
        ~Disk() {

        }

};