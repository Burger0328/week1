#include <Arduino.h>

constexpr int BUTTON_PIN = 0;
constexpr int LED_PIN = 13;


void setup() {
 Serial.begin(115200);
 pinMode(BUTTON_PIN, INPUT_PULLUP);
 pinMode(LED_PIN, OUTPUT);
}


void loop() {
 // pin low when button is pressed
 if (digitalRead(BUTTON_PIN) == LOW) {
   Serial.println("Button is pressed!");
   digitalWrite(LED_PIN, HIGH);
 } else if (digitalRead(BUTTON_PIN) == HIGH){
   digitalWrite(LED_PIN, LOW);
 }


}

/* constexpr int LED_PIN = 13;
void setup() {
 Serial.begin(115200);  // Start serial at 115200 baud
 pinMode(LED_PIN, OUTPUT);
 Serial.println("ESP32-S3 Feather Started!");
}
void loop() {
 Serial.println("LED ON");
 digitalWrite(LED_PIN, HIGH);
 delay(1000);
 Serial.println("LED OFF");
 digitalWrite(LED_PIN, LOW);
 delay(1000);
} */


/* // put function declarations here:
constexpr int LED_PIN = 13;
void setup() {
 // Set the LED pin as an output
 pinMode(LED_PIN, OUTPUT);
}
void loop() {
 digitalWrite(LED_PIN, HIGH);  // Turn LED on
 delay(1000);                // Wait 1 second
 digitalWrite(LED_PIN, LOW);   // Turn LED off
 delay(1000);                // Wait 1 second
}
 */