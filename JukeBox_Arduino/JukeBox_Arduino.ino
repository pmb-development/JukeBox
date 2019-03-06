
int v1 = 2;
int v2 = 3;
int v3 = 4;
int v4 = 5;
int v5 = 6;
int v6 = 7;
int v7 = 8;
int v8 = 9;
int v9 = 10;
int v10 = 11;
int v11 = 12;
int v12 = 13;
int v13 = 14;
int v14 = 15;
int v15 = 16;
int v16 = 17;
int v17 = 18;
int v18 = 19;
int v19 = 20;
int v20 = 21;

boolean vinyl1;
boolean vinyl2;
boolean vinyl3;
boolean vinyl4;
boolean vinyl5;
boolean vinyl6;
boolean vinyl7;
boolean vinyl8;
boolean vinyl9;
boolean vinyl10;
boolean vinyl11;
boolean vinyl12;
boolean vinyl13;
boolean vinyl14;
boolean vinyl15;
boolean vinyl16;
boolean vinyl17;
boolean vinyl18;
boolean vinyl19;
boolean vinyl20;

void serialEvent();

void setup() {
  pinMode(v1, OUTPUT);
  pinMode(v2, OUTPUT);
  pinMode(v3, OUTPUT);
  pinMode(v4, OUTPUT);
  pinMode(v5, OUTPUT);
  pinMode(v6, OUTPUT);
  pinMode(v7, OUTPUT);
  pinMode(v8, OUTPUT);
  pinMode(v9, OUTPUT);
  pinMode(v10, OUTPUT);
  pinMode(v11, OUTPUT);
  pinMode(v12, OUTPUT);
  pinMode(v13, OUTPUT);
  pinMode(v14, OUTPUT);
  pinMode(v15, OUTPUT);
  pinMode(v16, OUTPUT);
  pinMode(v17, OUTPUT);
  pinMode(v18, OUTPUT);
  pinMode(v19, OUTPUT);
  pinMode(v20, OUTPUT);

  vinyl1 = false;
  vinyl2 = false;
  vinyl3 = false;
  vinyl4 = false;
  vinyl5 = false;
  vinyl6 = false;
  vinyl7 = false;
  vinyl8 = false;
  vinyl9 = false;
  vinyl10 = false;
  vinyl11 = false;
  vinyl12 = false;
  vinyl13 = false;
  vinyl14 = false;
  vinyl15 = false;
  vinyl16 = false;
  vinyl17 = false;
  vinyl18 = false;
  vinyl19 = false;
  vinyl20 = false;
}

void loop() {
  if(vinyl1) {
    digitalWrite(v1, HIGH);
    delay(500);
    digitalWrite(v1, LOW);
    vinyl1 = false;
  } else if(vinyl2) {
    digitalWrite(v2, HIGH);
    delay(500);
    digitalWrite(v2, LOW);
    vinyl2 = false;
  } else if(vinyl3) {
    digitalWrite(v3, HIGH);
    delay(500);
    digitalWrite(v3, LOW);
    vinyl3 = false;
  } else if(vinyl4) {
    digitalWrite(v4, HIGH);
    delay(500);
    digitalWrite(v4, LOW);
    vinyl4 = false;
  } else if(vinyl5) {
    digitalWrite(v5, HIGH);
    delay(500);
    digitalWrite(v5, LOW);
    vinyl5 = false;
  } else if(vinyl6) {
    digitalWrite(v6, HIGH);
    delay(500);
    digitalWrite(v6, LOW);
    vinyl6 = false;
  } else if(vinyl7) {
    digitalWrite(v7, HIGH);
    delay(500);
    digitalWrite(v7, LOW);
    vinyl7 = false;
  } else if(vinyl8) {
    digitalWrite(v8, HIGH);
    delay(500);
    digitalWrite(v8, LOW);
    vinyl8 = false;
  } else if(vinyl9) {
    digitalWrite(v9, HIGH);
    delay(500);
    digitalWrite(v9, LOW);
    vinyl9 = false;
  } else if(vinyl10) {
    digitalWrite(v10, HIGH);
    delay(500);
    digitalWrite(v10, LOW);
    vinyl10 = false;
  } else if(vinyl11) {
    digitalWrite(v11, HIGH);
    delay(500);
    digitalWrite(v11, LOW);
    vinyl11 = false;
  } else if(vinyl12) {
    digitalWrite(v12, HIGH);
    delay(500);
    digitalWrite(v12, LOW);
    vinyl12 = false;
  } else if(vinyl13) {
    digitalWrite(v13, HIGH);
    delay(500);
    digitalWrite(v13, LOW);
    vinyl13 = false;
  } else if(vinyl14) {
    digitalWrite(v14, HIGH);
    delay(500);
    digitalWrite(v14, LOW);
    vinyl14 = false;
  } else if(vinyl15) {
    digitalWrite(v15, HIGH);
    delay(500);
    digitalWrite(v15, LOW);
    vinyl15 = false;
  } else if(vinyl16) {
    digitalWrite(v16, HIGH);
    delay(500);
    digitalWrite(v16, LOW);
    vinyl16 = false;
  } else if(vinyl17) {
    digitalWrite(v17, HIGH);
    delay(500);
    digitalWrite(v17, LOW);
    vinyl17 = false;
  } else if(vinyl18) {
    digitalWrite(v18, HIGH);
    delay(500);
    digitalWrite(v18, LOW);
    vinyl18 = false;
  } else if(vinyl19) {
    digitalWrite(v19, HIGH);
    delay(500);
    digitalWrite(v19, LOW);
    vinyl19 = false;
  } else if(vinyl20) {
    digitalWrite(v20, HIGH);
    delay(500);
    digitalWrite(v20, LOW);
    vinyl20 = false;
  }
}

void serialEvent() {
  while(Serial.available()) {
    String req = Serial.readString();

    if(req == "1") {
      vinyl1 = true;
    } else if(req == "2") {
      vinyl2 = true;
    } else if(req == "3") {
      vinyl2 = true;
    } else if(req == "4") {
      vinyl2 = true;
    } else if(req == "5") {
      vinyl2 = true;
    } else if(req == "6") {
      vinyl2 = true;
    } else if(req == "7") {
      vinyl2 = true;
    } else if(req == "8") {
      vinyl2 = true;
    } else if(req == "9") {
      vinyl2 = true;
    } else if(req == "10") {
      vinyl2 = true;
    } else if(req == "11") {
      vinyl2 = true;
    } else if(req == "12") {
      vinyl2 = true;
    } else if(req == "13") {
      vinyl2 = true;
    } else if(req == "14") {
      vinyl2 = true;
    } else if(req == "15") {
      vinyl2 = true;
    } else if(req == "16") {
      vinyl2 = true;
    } else if(req == "17") {
      vinyl2 = true;
    } else if(req == "18") {
      vinyl2 = true;
    } else if(req == "19") {
      vinyl2 = true;
    } else if(req == "20") {
      vinyl2 = true;
    }
  }
}

