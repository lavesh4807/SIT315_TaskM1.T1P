const int pir_sensor = 5;  // PIR sensor to digital pin 3
const int led_pin = 6;      // LED connected to digital pin 6

void setup() {
  pinMode(pir_sensor, INPUT);
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pir_sensor);

  if (motion == HIGH) {
    digitalWrite(led_pin, HIGH);  // Turn on the LED
    Serial.println("Motion is detected!");
    delay(1000);  
  } else {
    Serial.println("Motion not detected");
    digitalWrite(led_pin, LOW);  // Turn off the LED
  }
  
  delay(2000);
}
