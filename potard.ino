float val1;
float val2;
float val3;
float val4;
float val6;
float val7;
int val5;


void setup() {
  Serial.begin(9600);

  pinMode(13, INPUT);

}

void loop() {

  val1 = analogRead(0);
  val1 = val1 * 0.249;
  
  val2 = analogRead(1);
  val2 = val2 * 0.249;
  
  val3 = analogRead(5);
  val3 = val3 * 0.249;
  
  val4 = analogRead(3);
  val4 = val4 / 1023;
  
  val6 = analogRead(2);
  val6 = val6 / 1023;
  
  val7 = analogRead(4);
  val7 = val7 / 1023;



  val5 = digitalRead(13);

  val5 = val5;

  String message = String(val1) + " " + String(val2) + " " + String(val3) + " " + String(val4)  + " " + String(val6) + " " + String(val7) + " " + String(val5);


  boolean etatBouton = digitalRead(val5);



  Serial.println(message);

  delay(100);

}
