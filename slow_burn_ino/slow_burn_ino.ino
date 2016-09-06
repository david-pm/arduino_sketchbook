
int brightness = 0;
int tics = 1;
int led = 9;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, brightness);
  brightness = brightness + tics;
  delay(100); 
  if (brightness == 0 || brightness == 255) {
    tics = -tics; 
  }       
}
