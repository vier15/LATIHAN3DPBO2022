<?php

include "Pc.php";

/* Deklarasi objek Processor dengan nama processor1*/
$processor1 = new Processor();
$processor1->setName("RadeonVega");
$processor1->setPrice(500);
/* Deklarasi objek Disk dengan nama disk1 */
$disk1 = new Disk();
$disk1->setType("SSD");
$disk1->setCapacity("500GB");
$disk1->setPrice(250);
/* Dekalrasi objek Ram dengan nama ram1 */
$ram1 = new Ram();
$ram1->setCapacity("256GB");
$ram1->setPrice(350);
/* Deklarasi objek Pc dengan nama pc1 */
$pc1 = new Pc();
$pc1->setProcessor($processor1);
$pc1->setDisk($disk1);
$pc1->setRam($ram1);
/* Hitung total price komponen PC */
$pc1->setTotalPrice();
/* Tampilkan data komponen PC */
$pc1->printPcData();

?>