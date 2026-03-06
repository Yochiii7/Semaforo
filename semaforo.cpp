const int R1 = 13, AM1 = 12, V1 = 11, AZ1 = 10;

const int R2 = 9, AM2 = 8, V2 = 7, AZ2 = 6;

const int R3 = 5, AM3 = 4, V3 = 3, AZ3 = 2;

void setup() {
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  
  digitalWrite(R1, LOW); digitalWrite(AZ1, LOW);
  digitalWrite(R2, HIGH); digitalWrite(AZ2, HIGH);
  digitalWrite(R3, HIGH); digitalWrite(AZ3, HIGH);
 
  digitalWrite(V1, HIGH);
  delay(4000); 
  digitalWrite(V1, LOW);

  digitalWrite(AM1, HIGH);
  delay(2000); 
  digitalWrite(AM1, LOW);
 

  digitalWrite(R1, HIGH); digitalWrite(AZ1, HIGH);

 // semaforo 2

  digitalWrite(R2, LOW); digitalWrite(AZ2, LOW);
  
  digitalWrite(V2, HIGH);
  delay(4000); 
  digitalWrite(V2, LOW);

  digitalWrite(AM2, HIGH);
  delay(2000); 
  digitalWrite(AM2, LOW);

  
  digitalWrite(R2, HIGH); digitalWrite(AZ2, HIGH);

  //semaforo 3
  digitalWrite(R3, LOW); digitalWrite(AZ3, LOW);
  
  digitalWrite(V3, HIGH);
  delay(4000);
  digitalWrite(V3, LOW);

  digitalWrite(AM3, HIGH);
  delay(2000); 
  digitalWrite(AM3, LOW);

  
  digitalWrite(R3, HIGH); digitalWrite(AZ3, HIGH);
}
