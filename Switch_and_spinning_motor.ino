int button = 12;
int p;
int w;
void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode(10, OUTPUT);
pinMode(button,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

 p = digitalRead(button);
if(p==1){
  digitalWrite(8,0);
  digitalWrite(10,1);
  delay(250);
  digitalWrite(8,1);
  digitalWrite(10,0);
  delay(250);
  }
 
else{
      digitalWrite(8,0);
      digitalWrite(10,1);
      delay(40);
      digitalWrite(8,1);
      digitalWrite(10,0);
      delay(40);
    }
}
