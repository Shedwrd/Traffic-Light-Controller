int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int buttonApin = 8;
int count = 0;
int buzzer = 10;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
}

void loop(){
    digitalWrite(LED1, HIGH);
    delay(500);
    digitalWrite(LED1, LOW);
    delay(500);
  if (digitalRead(buttonApin) == LOW) {
    while (count%2 == 1){
      digitalWrite(LED1, HIGH);
      delay(15000);
      digitalWrite(buzzer,HIGH);
      delay(3000);
      digitalWrite(buzzer,LOW);
      delay(1);
      digitalWrite(LED1, LOW);
      delay(500);
      digitalWrite(LED3, HIGH);
      delay(15000);
      digitalWrite(buzzer,HIGH);
      delay(3000);
      digitalWrite(buzzer,LOW);
      delay(1);
      digitalWrite(LED3, LOW);
      delay(500);
      digitalWrite(LED2, HIGH);
      delay(3000);
      digitalWrite(buzzer,HIGH);
      delay(3000);
      digitalWrite(buzzer,LOW);
      delay(1);
      digitalWrite(LED2, LOW);
      delay(500);                
    }
    count++;
  }
}
