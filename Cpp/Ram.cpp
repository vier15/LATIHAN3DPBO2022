class Ram {

    /* Private Attribute */
    private:

        string capacity;
        int price;

    /* Public Attribute and Method */
    public:

        /* Constructor */
        Ram() {
            this->capacity = "Capacity";
            this->price = 0;
        }

        Ram(string capacity, int price) {
            this->capacity = capacity;
            this->price = price;
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
        ~Ram() {

        }

};