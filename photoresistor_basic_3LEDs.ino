int lightpin = A0;
int lightval;
int delt = 250;
int gled = 7;
int yled = 4;
int wled = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightpin,INPUT);
  pinMode(gled,OUTPUT);
  pinMode(yled,OUTPUT);
  pinMode(wled,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  lightval = analogRead(lightpin);
  Serial.println(lightval);
  delay(delt);

  digitalWrite(gled,LOW);
  digitalWrite(yled,LOW);
  digitalWrite(wled,LOW);

  while (lightval > 200){
    lightval = analogRead(lightpin);
    digitalWrite(gled,HIGH);
    digitalWrite(yled,LOW);
    digitalWrite(wled,LOW);
    Serial.println(lightval);
    delay(delt);

  }

  while (lightval < 200 && lightval > 100){
    lightval = analogRead(lightpin);
    digitalWrite(gled,LOW);
    digitalWrite(yled,HIGH);
    digitalWrite(wled,LOW);
    Serial.println(lightval);
    delay(delt);

  }

  while (lightval < 100){
    lightval = analogRead(lightpin);
    digitalWrite(gled,LOW);
    digitalWrite(yled,LOW);
    digitalWrite(wled,HIGH);
    Serial.println(lightval);
    delay(delt);

  }


}
