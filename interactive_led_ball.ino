
byte ledPin[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int ledDelay;
int direction = 1;
int currentLED = 0;
int iteration = 0;
int count = 0;

unsigned long changeTime;
int potPin = 2;


void setup() {
  for (int i = 0; i < 10; i++) {
    pinMode(ledPin[i], OUTPUT);
  } 
  changeTime = millis();
}

void loop() {
  ledDelay = analogRead(potPin);
  if((millis() - changeTime) > ledDelay) {
    changeLED();
    changeTime = millis();
  }  
}

void changeLED() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPin[i], LOW);
  }

  digitalWrite(ledPin[currentLED], HIGH);
  
  currentLED += direction;
  
  iteration ++;
  
  if (iteration == 9) {direction = -1;}
  // + 9
  if (iteration == 18) {direction = 1;}
  // + 8
  if (iteration == 26) {direction = -1;}
  // + 8
  if (iteration == 34) {direction = 1;}
  // + 7
  if (iteration == 41) {direction = -1;}
  // + 7
  if (iteration == 48) {direction = 1;}
  // + 6
  if (iteration == 54) {direction = -1;}
  // + 6
  if (iteration == 60) {direction = 1;}
  // + 5
  if (iteration == 65) {direction = -1;} 
  // + 5
  if (iteration == 70) {direction = 1;}
  // + 4
  if (iteration == 74) {direction = -1;}
  // + 4
  if (iteration == 78) {direction = 1;}
  // + 3
  if (iteration == 81) {direction = -1;}
  // + 3
  if (iteration == 84) {direction = 1;}
  // + 2
  if (iteration == 86) {direction = -1;}
  // + 2
  if (iteration == 88) {direction = 1;}
  // + 1
  if (iteration == 79) {direction = -1;}
  // + 1
  if (iteration == 90) {direction = 1; iteration = 0;}
}
