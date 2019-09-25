int red_led =0;
int yel_led =1;
int gre_led =2;
int button =3;
void setup()
{
  pinMode(red_led, OUTPUT);
  pinMode(yel_led, OUTPUT);
  pinMode(gre_led, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  if (digitalRead(button) == HIGH) {
  digitalWrite(red_led, LOW);
  digitalWrite(yel_led, HIGH);
  digitalWrite (gre_led, LOW);
  delay(1000);
  digitalWrite(red_led, HIGH);
  digitalWrite(yel_led, LOW);
  digitalWrite (gre_led, LOW); 
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
