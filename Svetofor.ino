int red_led =0;
int yel_led =1;
int gre_led =2;
const int keyPin = 5;
const int ledPin1 = 1;
const int ledPin2 = 0;

void setup()
{
  pinMode(red_led, OUTPUT);
  pinMode(yel_led, OUTPUT);
  pinMode(gre_led, OUTPUT);
  pinMode(keyPin,INPUT);
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
}

void loop()
{
   if(digitalRead(keyPin) == HIGH) {
   digitalWrite(ledPin1, HIGH);
   delay(1000);
   digitalWrite(ledPin2, HIGH);
   delay(1000);}
  
  digitalWrite(red_led, HIGH);
  digitalWrite(yel_led, LOW);
  digitalWrite (gre_led, LOW); 
  delay(1000);
  digitalWrite(red_led, LOW);
  digitalWrite(yel_led, HIGH);
  digitalWrite (gre_led, LOW);
  delay(1000); 
  digitalWrite(red_led, LOW);
  digitalWrite(yel_led, LOW);
  digitalWrite(gre_led, HIGH);
  delay(1000);
}
//Первый коммит.
//Второй коммит.
