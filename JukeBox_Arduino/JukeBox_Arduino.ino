
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
}

void loop() {
  // put your main code here, to run repeatedly:

}

void serialEvent() {
  while(Serial.available()) {
    String req = Serial.readString();

    if (req == "1") {
      digitalWrite(v1, HIGH);
      delay(500);
      digitalWrite(v1, LOW);
    } else if (req == "2") {
      digitalWrite(v2, HIGH);
      delay(500);
      digitalWrite(v2, LOW);
    } else if (req == "3") {
      digitalWrite(v3, HIGH);
      delay(500);
      digitalWrite(v3, LOW);
    } else if (req == "4") {
      digitalWrite(v4, HIGH);
      delay(500);
      digitalWrite(v4, LOW);
    } else if (req == "5") {
      digitalWrite(v5, HIGH);
      delay(500);
      digitalWrite(v5, LOW);
    } else if (req == "6") {
      digitalWrite(v6, HIGH);
      delay(500);
      digitalWrite(v6, LOW);
    } else if (req == "7") {
      digitalWrite(v7, HIGH);
      delay(500);
      digitalWrite(v7, LOW);
    } else if (req == "8") {
      digitalWrite(v8, HIGH);
      delay(500);
      digitalWrite(v8, LOW);
    } else if (req == "9") {
      digitalWrite(v9, HIGH);
      delay(500);
      digitalWrite(v9, LOW);
    } else if (req == "10") {
      digitalWrite(v10, HIGH);
      delay(500);
      digitalWrite(v10, LOW);
    } else if (req == "11") {
      digitalWrite(v11, HIGH);
      delay(500);
      digitalWrite(v11, LOW);
    } else if (req == "12") {
      digitalWrite(v12, HIGH);
      delay(500);
      digitalWrite(v12, LOW);
    } else if (req == "13") {
      digitalWrite(v13, HIGH);
      delay(500);
      digitalWrite(v13, LOW);
    } else if (req == "14") {
      digitalWrite(v14, HIGH);
      delay(500);
      digitalWrite(v14, LOW);
    } else if (req == "15") {
      digitalWrite(v15, HIGH);
      delay(500);
      digitalWrite(v15, LOW);
    } else if (req == "16") {
      digitalWrite(v16, HIGH);
      delay(500);
      digitalWrite(v16, LOW);
    } else if (req == "17") {
      digitalWrite(v17, HIGH);
      delay(500);
      digitalWrite(v17, LOW);
    } else if (req == "18") {
      digitalWrite(v18, HIGH);
      delay(500);
      digitalWrite(v18, LOW);
    } else if (req == "19") {
      digitalWrite(v19, HIGH);
      delay(500);
      digitalWrite(v19, LOW);
    } else if (req == "20") {
      digitalWrite(v20, HIGH);
      delay(500);
      digitalWrite(v20, LOW);
    }
  }
}

