<?php

include "Processor.php";
include "Disk.php";
include "Ram.php";

class Pc {

    /* Private Attribute */
    private $attProcie;
    private $attDisk;
    private $attRam;
    private $totalPrice = 0;

    /* Constructor */
    public function __construct() {
        $this->attProcie = new Processor();
        $this->attDisk = new Disk();
        $this->attRam = new Ram();
        $this->totalPrice = 0;
    }

    /* Setter dan Getter Processor */
    public function setProcessor($attProcie) {
        $this->attProcie = $attProcie;
    }

    public function getProcessor() {
        return $this->attProcie;
    }

    /* Setter dan Getter Disk */
    public function setDisk($attDisk) {
        $this->attDisk = $attDisk;
    }

    public function getDisk() {
        return $this->attDisk;
    }

    /* Setter dan Getter Ram */
    public function setRam($attRam) {
        $this->attRam = $attRam;
    }

    public function getRam() {
        return $this->attRam;
    }

    /* Setter dan Getter Total Price */
    public function setTotalPrice() {
        $this->totalPrice = $this->attProcie->getPrice() + $this->attDisk->getPrice() + $this->attRam->getPrice();
    }

    public function getTotalPrice() {
        return $this->totalPrice;
    }

    /* Print data komponen Pc */
    public function printPcData() {
        echo "<br /> __My PC Build Plan___________________";
        echo "<br /> [Processor]";
        echo "<br /> Name : ". $this->attProcie->getName();
        echo "<br /> Price : RP". $this->attProcie->getPrice();
        echo "<br />";
        echo "<br /> [Disk]";
        echo "<br /> Type : ". $this->attDisk->getType();
        echo "<br /> Capacity : ". $this->attDisk->getCapacity();
        echo "<br /> Price : RP". $this->attDisk->getPrice();
        echo "<br />";
        echo "<br /> [Ram]";
        echo "<br /> Capacity : ". $this->attRam->getCapacity();
        echo "<br /> Price : RP". $this->attRam->getPrice();
        echo "<br /> _____________________________________";
        echo "<br /> Price : RP". $this->getTotalPrice();
    }

    /* Destructor */
    public function __destruct() {

	}

}

?>