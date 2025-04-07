/*Wap to interface LED and Buzzer with Arduino board, so that buzzer
  is put on whenever LED is on and Buzzer is put off when LED is off.
*/

#define BUZZER_PIN 6    // Pin connected to the buzzer
#define LED_PIN 10      // Pin connected to the LED

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);  // Set buzzer pin as output
  pinMode(LED_PIN, OUTPUT);     // Set LED pin as output
}

  // Check if the temperature is above 100 & less than 103
  if ((tempF > 100.0) && (tempF < 103.0)) {
    digitalWrite(BUZZER_PIN, LOW);  // Turn buzzer off
    digitalWrite(LED_PIN, HIGH);     // Turn LED on if temperature is above threshold
  } 
  // Check if the temperature is above 102

  else if(tempF > 102.0){
    digitalWrite(BUZZR_PIN, HIGH);   // Turn buzzer off if temperature is below threshold
    digitalWrite(LED_PIN, HIGH);      // Turn LED off if temperature is below threshold
  } 
   // Check if the temperature is less than 101

  else {
    digitalWrite(BUZZR_PIN, LOW);   // Turn buzzer off if temperature is below threshold
    digitalWrite(LED_PIN, LOW);     // Turn
  }


}
