<?php

class Ram {
    
    /* Private Attribute */
    private $capacity = "Capacity";
    private $price = 0;

    /* Constructor */
    public function __construct($capacity = "Capacity", $price = 0) {
        $this->capacity = $capacity;
        $this->price = $price;
    }

    /* Setter dan Getter Capacity */
    public function setCapacity($capacity) {
        $this->capacity = $capacity;
    }

    public function getCapacity() {
        return $this->capacity;
    }

    /* Setter dan Getter Price */
    public function setPrice($price) {
        $this->price = $price;
    }

    public function getPrice() {
        return $this->price;
    }

    /* Destructor */
    public function __destruct() {

	}

}

?>