#include <lib_dmx.h>

#define    DMX512 (0)

void setup() 
{
  ArduinoDmx0.set_control_pin(11); //Defines control pin
  ArduinoDmx0.set_rx_address(1); 
  ArduinoDmx0.set_rx_channels(192); //Defines number of channels in a packet
  ArduinoDmx0.init_rx(DMX512);    
}

void loop()
{
  analogWrite(3, ArduinoDmx0.RxBuffer[0]); //Red
  analogWrite(5, ArduinoDmx0.RxBuffer[1]); //Green
  analogWrite(6, ArduinoDmx0.RxBuffer[2]); //Blue
} 

