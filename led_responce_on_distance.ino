float distance;
float time;
int trig=11;;
int echo=12;

void setup() {;
  pinMode(13,OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  time=pulseIn(echo,HIGH);
  distance= 0.034 *time/2;
  Serial.println(distance);
  delay(500);
  if(distance<5.13)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }

}
