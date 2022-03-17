int time = 0;
int lastTime = 0;
int state = 0;
void setup() {

  pinMode(13, OUTPUT);
}

void loop() {
  time = millis();
  if (time - lastTime > 1000) {
    if (state == 0) {
      state = 1;
      digitalWrite(13, state);
    }
    else {
      state = 0;
      digitalWrite(13, state);
    }
    lastTime = time;
  }
}
