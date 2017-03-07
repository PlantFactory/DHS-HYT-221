#include <Wire.h>
#include "HYT221.h"

HYT221 sensor(0x28);

void setup() {
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  sensor.read();
  Serial.print("Temperature = ");
  Serial.println(sensor.getTemperature());
  Serial.print("Humidity = ");
  Serial.println(sensor.getHumidity());
  delay(1000);
}
