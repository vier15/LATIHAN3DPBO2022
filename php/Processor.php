<?php

class Processor {
    
    /* Private Attribute */
    private $name = "Name";
    private $price = 0;

    /* Constructor */
    public function __construct($name = "Name", $price = 0) {
        $this->name = $name;
        $this->price = $price;
    }

    /* Setter dan Getter Name */
    public function setName($name) {
        $this->name = $name;
    }

    public function getName() {
        return $this->name;
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