
char leitura;

#define ledBlue 8
#define ledOrange 9
#define ledWhite 10

void setup(){
  Serial.begin (9600);
  
  pinMode(ledBlue, OUTPUT);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledWhite, OUTPUT);

  digitalWrite(ledBlue, HIGH);
  digitalWrite(ledOrange, HIGH);
  digitalWrite(ledWhite, HIGH);
}

void loop(){  
  while(Serial.available()>0){
    leitura = Serial.read();

    if (leitura == 'b' || leitura == 'B')
    {
      digitalWrite(ledBlue, LOW);
      digitalWrite(ledOrange, HIGH);
      digitalWrite(ledWhite, HIGH);
    }

    else if (leitura == 'o' || leitura == 'O')
    {
      digitalWrite(ledOrange, LOW);
      digitalWrite(ledWhite, HIGH);
      digitalWrite(ledBlue, HIGH);
    }

    else if (leitura == 'w' || leitura == 'W')
    {
      digitalWrite(ledWhite, LOW);
      digitalWrite(ledBlue, HIGH);
      digitalWrite(ledOrange, HIGH);
    }

    Serial.println(leitura);
  }
}
