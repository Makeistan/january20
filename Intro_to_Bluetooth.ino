int led=8;
int state;
void setup() {
    // sets the pins as outputs:
     pinMode(led,OUTPUT);
     digitalWrite(led,LOW);
      Serial.begin(9600);
}

void loop() {
    //if some date is sent, reads it and saves in state
    if(Serial.available())
    {     
      state = Serial.read();
    }
    delay(100);

    if(state==6)
    {
      digitalWrite(led,HIGH);
      delay(300);
      Serial.println("Lights Onn");
      
    }

    else if(state==7)
    {
      digitalWrite(led,LOW);
      delay(300);
      Serial.println("Lights Off");
    }    
}
