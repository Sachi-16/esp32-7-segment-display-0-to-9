// Pins in order: a, b, c, d, e, f, g
byte pin[] = {2, 15, 4, 5, 18, 19, 21};

// Common ANODE: 0 = ON, 1 = OFF
byte digits[10][7] = {
  {0,0,0,0,0,0,1}, // 0
  {1,0,0,1,1,1,1}, // 1
  {0,0,1,0,0,1,0}, // 2
  {0,0,0,0,1,1,0}, // 3
  {1,0,0,1,1,0,0}, // 4
  {0,1,0,0,1,0,0}, // 5
  {0,1,0,0,0,0,0}, // 6
  {0,0,0,1,1,1,1}, // 7
  {0,0,0,0,0,0,0}, // 8
  {0,0,0,0,1,0,0}, // 9
};
void setup() {
  for (int i = 0; i &lt; 7; i++) {
    pinMode(pin[i], OUTPUT);
    digitalWrite(pin[i], HIGH); // all OFF initially
  }
}
void showDigit(int num) {
  for (int i = 0; i &lt; 7; i++) {
    digitalWrite(pin[i], digits[num][i]);
  }
}
void loop() {
  for (int i = 0; i &lt; 10; i++) {

Ramdeo Tekdi, Katol Road, Nagpur - 440 013 (M.S.), India.

    showDigit(i);
    delay(1000);
  }
}
