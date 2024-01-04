int distance;
long duration;
const int led = 11;
long intensity;
const int gpioPin = 14;

#include "SharpIR.h"
// #include <Sharp

//Create a new instance of the library
//Call the sensor "sensor"
//The model of the sensor is "GP2YA41SK0F"
// //The sensor output pin is attached to the pin A0
// SharpIR sensor( SharpIR::GP2Y0A41SK0F, gpioPin );

SharpIR sharp = SharpIR(gpioPin, 1080);


void setup() {

  Serial.begin(9600);                // Init Serial at 115200 Baud Rate.
  Serial.println("Serial Working");  // Test to check if serial is working or not
  // pinMode(IRSensor, INPUT); // IR Sensor pin INPUT
  // pinMode(LED, OUTPUT); // LED Pin Output
  pinMode(gpioPin, INPUT);
}

void loop() {

  // int value = analogRead(gpioPin);
  // Serial.print(gpioPin); Serial.print(F(" - "));

  // Serial.println(distRawToPhys(val


  distance = sharp.distance();
  Serial.print("Distance: ");
  Serial.println(distance);


  // distance = sensor.getDistanceCentimeters();
  // // put your main code here, to run repeatedly:
  // int sensorStatus = digitalRead(IRSensor); // Set the GPIO as Input
  // if (sensorStatus == 1) // Check if the pin high or not
  // {
  //   // if the pin is high turn off the onboard Led
  //   digitalWrite(LED, LOW); // LED LOW
  //   Serial.println("Motion Detected!"); // print Motion Detected! on the serial monitor window
  // }
  // else  {
  //   //else turn on the onboard LED
  //   digitalWrite(LED, HIGH); // LED High
  //   Serial.println("Motion Ended!"); // print Motion Ended! on the serial monitor window
  // }
}

// // int distRawToPhys(int raw) { /* function distRawToPhys /
//   ////IR Distance sensor conversion rule
//   float Vout = float(raw) 0.0048828125; // Conversion analog to voltage
//   int phys = 13 * pow(Vout, -1); // Conversion volt to distance

//   return phys;
// }