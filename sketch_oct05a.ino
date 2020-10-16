float x=0;
float y=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(1,OUTPUT);
  Serial.begin(9600);
  //Serial.print("La temperatura es de:");
}
int pot1=0;
void loop() {
  // put your main code here, to run repeatedly:
  //x = random(0,1023);
  x=analogRead(A0);
  y = map(x, 0, 1023, 0, 105);
 
  
  if (x>512)
  {
    digitalWrite(1,HIGH);
  }
  else
  {
    digitalWrite(1,LOW);
  }
  //Serial.println(pot1);

  Serial.print("Temperatura detectada:");
  Serial.println(y);
  Serial.print("Valor original:");
  Serial.println(x);
   delay(2000);
