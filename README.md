# ledstrip-project
The purpose of the project is to control a ledstrip using Arduino Uno microcontroller and a Parallax Sound Impact Sensor.
The sound sensor was changed by another sound sensor, which my father helped me make.

The microcontroller constantly reads the signal, which the sensor sends. If the state of the read signal is in '1', the sound detected by the sensor was higher than its set threshold and the ledstrip is dimmed for 10ms. 
