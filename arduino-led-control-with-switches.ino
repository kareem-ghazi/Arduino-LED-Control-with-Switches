int SWITCH_ONE = 2;
int SWITCH_TWO = 4;

int LED_1 = 3;
int LED_2 = 5;
int LED_4 = 6;
int LED_6 = 9;

void setup()
{
  pinMode(SWITCH_ONE, INPUT);
  pinMode(SWITCH_TWO, INPUT);
}

void loop()
{ 
  if (digitalRead(SWITCH_ONE) == LOW  && digitalRead(SWITCH_TWO) == LOW) {
  	analogWrite(LED_1, 0);
    digitalWrite(LED_2, LOW);
  	
    digitalWrite(LED_4, LOW);
    analogWrite(LED_6, 0);
  } else if (digitalRead(SWITCH_ONE) == HIGH  && digitalRead(SWITCH_TWO) == LOW) {
  	analogWrite(LED_1, 127);
    digitalWrite(LED_2, HIGH);
  	
    digitalWrite(LED_4, LOW);
    analogWrite(LED_6, 0);
  } else if (digitalRead(SWITCH_ONE) == LOW  && digitalRead(SWITCH_TWO) == HIGH) {
  	analogWrite(LED_1, 0);
    digitalWrite(LED_2, LOW);
  	
    digitalWrite(LED_4, HIGH);
    analogWrite(LED_6, 127);
  } else if (digitalRead(SWITCH_ONE) == HIGH  && digitalRead(SWITCH_TWO) == HIGH) {
  	analogWrite(LED_1, 127);
    digitalWrite(LED_2, HIGH);
  	
    digitalWrite(LED_4, HIGH);
    analogWrite(LED_6, 127);
  }
}