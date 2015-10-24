
void setup() {

 // pinMode(A1, INPUT);
  //pinMode(A2, INPUT);
 // pinMode(A3, INPUT);
 // pinMode(A4, INPUT);
  //pinMode(A0, INPUT);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
Serial.begin(9600);
 
}

void loop()
{
  int el = analogRead(A1);
  int l = analogRead(A2);
  int m = analogRead(A3);
  int r = analogRead(A4);
  int er = analogRead(A0);


  if (el <100){
	digitalWrite(11, LOW);
  }
  else {
	digitalWrite(11, HIGH);
  }
 if (el <100){
	digitalWrite(10, LOW);
 }
  else {
	digitalWrite(10, HIGH);
  }
 if (el <100){
	digitalWrite(9, LOW);
 }
  else {
	digitalWrite(9, HIGH);
  }
 if (el <100){
	digitalWrite(8, LOW);
 }
  else {
	digitalWrite(8, HIGH);
  }
 if (el <100){
	digitalWrite(7, LOW);
 }
  else {
	digitalWrite(7, HIGH);
  }
}


