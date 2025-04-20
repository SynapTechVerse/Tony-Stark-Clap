const int soundSensorPin = A0;  // Analog pin from sound sensor
const int ledPin = 13;          // LED pin (built-in)
int threshold = 42;            // Adjust based on your mic sensitivity
bool ledState = false;          // Current state of the LED
unsigned long lastClapTime = 0; // To avoid double triggers
unsigned long debounceDelay = 300; // Minimum time between claps (ms)

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int soundLevel = analogRead(soundSensorPin);
  Serial.println(soundLevel); // For tuning threshold in Serial Plotter

  unsigned long currentTime = millis();

  if (soundLevel > threshold && (currentTime - lastClapTime) > debounceDelay) {
    ledState = !ledState;  
    //+boolToStr(ledState)); // Toggle the LED state
    digitalWrite(ledPin, ledState);          // Apply the new state
    lastClapTime = currentTime;              // Update clap time
    delay(2000);
  }
  if (ledState)
    {
      Serial.println("LED Set to Onnnnnnnnnnnnn");       
    }
    else
    {
      Serial.println("LED Set to Off");
    }

  delay(10); // Small delay for stability
}
