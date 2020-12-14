
/*
HWSDRtable.h   v1.1
Hardware detection of BBRF103 family SDRs 
+--------------+-------+------+------+------+------+------+------+------+------+----------------------------+
| SDR          | MODEL | GPIO | GPIO | GPIO | GPIO | GPIO | GPIO | GPIO | GPIO | USED BY                    |
|              | #     | 33   | 36   | 45   | 50   | 51   | 52   | 53   | 54   |                            |
+--------------+-------+------+------+------+------+------+------+------+------+----------------------------+
| BBRF103      | 0x01  |   -  |   -  |   -  |  pd* |   -  |   -  |   -  |  LED | Oscar Steila               |
+--------------+-------+------+------+------+------+------+------+------+------+----------------------------+
| HF103        | 0x02  |   -  |   -  |   -  |   -  |  pd* |   -  |   -  |  LED | Oscar Steila               |
+--------------+-------+------+------+------+------+------+------+------+------+----------------------------+
| RX888        | 0x03  |   -  |   -  |  pd  |   -  |   -  |   -  |   -  |   -  | Justin Peng / Howard Su    |
+--------------+-------+------+------+------+------+------+------+------+------+----------------------------+
| RX888 r2     | 0x04  |   -  |  pd  |   -  |   -  |   -  |   -  |   -  |   -  | Justin Peng / Howard Su    |
+--------------+-------+------+------+------+------+------+------+------+------+----------------------------+
| RX999        | 0x05  |  pd  |   -  |   -  |   -  |   -  |   -  |   -  |   -  | Justin Peng / Howard Su    |
+--------------+-------+------+------+------+------+------+------+------+------+----------------------------+
| ---          | -     |   -  |   -  |   -  |  pd  |  pd  |  pd  |  pd  |  LED | Oscar Steila               |
+--------------+-------+------+------+------+------+------+------+------+------+----------------------------+
| SDR-HF       | -     |   -  |   -  |   -  |  pu  |  pd  |  pd  |  pd  |  LED | Pieter Ibelings            |
+--------------+-------+------+------+------+------+------+------+------+------+----------------------------+
|              |       |   -  |   -  |      |      |      |      |      |      | ...                        |
+--------------+-------+------+------+------+------+------+------+------+------+----------------------------+

Where:   
      -   floating no connection
     pu   1k resistor pull-up to 3V3
     pd   1k resistor pull-down to GND 
     pd*  1k resistor pull-down to GND to be added with a patch
     LED  plus resistor to 3V3 connected to GPIO54 on FX3 SuperSpeed Kit

The 1k value is low enough to be able to detect the resistor using the GPIO internal programmable pull-up pull-down vs a floating pin.
The value is high enough to not disturb use of GPIOs for other purpose after detection.
 


*/


// switch definitions

#define BBRF103_PD 50  // BBRF103 pull down GPIO (add 1k resistor between pin 37-39 of P1 on BBRF103 pcb)


