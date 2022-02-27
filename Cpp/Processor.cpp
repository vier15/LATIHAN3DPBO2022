class Processor {

    /* Private Attribute */
    private:

        string name;
        int price;

    /* Public Attribute and Method */
    public:

        /* Constructor */
        Processor() {
            this->name = "Name";
            this->price = 0;
        }

        Processor(string name, int price) {
            this->name = name;
            this->price = price;
        }

        /* Setter dan Getter Name */
        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return this->name;
        }

        /* Setter dan Getter Price */
        void setPrice(int price) {
            this->price = price;
        }

        int getPrice() {
            return this->price;
        }

        /* Destructor */
        ~Processor() {

        }

};