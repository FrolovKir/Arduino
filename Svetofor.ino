int red_led =0;
int yel_led =1;
int gre_led =2;


void setup()
{
  pinMode(red_led, OUTPUT);
  pinMode(yel_led, OUTPUT);
  pinMode(gre_led, OUTPUT);
}

void loop()
{
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
//Первая часть кода , вроде робит
