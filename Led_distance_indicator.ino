#define trig 2
#define echo 4
#define led1 5
#define led2 6
#define led3 7
#define led4 8
#define led5 9
#define led6 10

void setup() {
  // put your setup code here, to run once:
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  long t = pulseIn(echo,HIGH);

  long inches = t / 74 / 2;
  long cm = t / 29 / 2;

  Serial.print(inches);
  Serial.print("in");
  Serial.print(cm);
  Serial.println("cm");
  delay(100);

  if(cm<30) {
    digitalWrite(led1,HIGH);
  }
  else {
    digitalWrite(led1,LOW);
  }

  if(cm<25) {
    digitalWrite(led2,HIGH);
  }
  else {
    digitalWrite(led2,LOW);
  }

  if(cm<20) {
    digitalWrite(led3,HIGH);
  }
  else {
    digitalWrite(led3,LOW);
  }

  if(cm<15) {
    digitalWritlde(led4,HIGH);
  }
  else {
    digitalWrite(led4,LOW);
  }

  if(cm<10) {
    digitalWrite(led5,HIGH);
  }
  else {
    digitalWrite(led5,LOW);
  }

  if(cm<5) {
    digitalWrite(led6,HIGH);
  }
  else {
    digitalWrite(led6,LOW);
  }

}
