class Pc {

    /* Private Attribute */
    private:

        Processor attProcie;
        Disk attDisk;
        Ram attRam;
        int totalPrice;

    /* Public Attribute and Method */
    public:

        /* Constructor */
        Pc() {
            
        }

        Pc(Processor attProcie, Disk attDisk, Ram attRam, int totalPrice) {
            this->attProcie = attProcie;
            this->attDisk = attDisk;
            this->attRam = attRam;
            this->totalPrice = totalPrice;
        }

        /* Setter dan Getter Processor */
        void setProcessor(Processor attProcie) {
            this->attProcie = attProcie;
        }

        Processor getType() {
            return this->attProcie;
        }

        /* Setter dan Getter Disk */
        void setDisk(Disk attDisk) {
            this->attDisk = attDisk;
        }

        Disk getDisk() {
            return this->attDisk;
        }

        /* Setter dan Getter Ram */
        void setRam(Ram attRam) {
            this->attRam = attRam;
        }

        Ram getRam() {
            return this->attRam;
        }

        /* Setter dan Getter Total Price */
        void setTotalPrice() {
            this->totalPrice = this->attDisk.getPrice() + this->attProcie.getPrice() + this->attRam.getPrice();
        }

        int getTotalPrice() {
            return this->totalPrice;
        }

        /* Print data Pc */
        void printPcData() {
            cout << "__My PC Build Plan___________________" << endl;
            cout << "[Processor]" << endl;
            cout << "Name : " << this->attProcie.getName() << endl;
            cout << "Price : RP" << this->attProcie.getPrice() << endl;
            cout << "" << endl;
            cout << "[Disk]" << endl;
            cout << "Type : " << this->attDisk.getType() << endl;
            cout << "Capacity : " << this->attDisk.getCapacity() << endl;
            cout << "Price : RP" << this->attDisk.getPrice() << endl;
            cout << "" << endl;
            cout << "[RAM]" << endl;
            cout << "Capacity : " << this->attRam.getCapacity() << endl;
            cout << "Price : RP" << this->attRam.getPrice() << endl;
            cout << "_____________________________________" << endl;
            cout << "Total Build Price : RP" << this->getTotalPrice() << endl;
        }

        /* Destructor */
        ~Pc() {

        }

};