int LED = 3;
int BRILLO;

 
void setup(){
    
  pinMode(LED, OUTPUT);
  
}

void loop(){
  
  //digitalWrite(LED, HIGH);
  // analogWrite(LED, HIGH);
  //analogWrite(LED, 0 - 255); //0 vale 0 voltios y 255 vale 5 voltios

  for(BRILLO = 0; BRILLO < 256; BRILLO++){
    
    analogWrite(LED, BRILLO); //0 vale 0 voltios y 255 vale 5 voltios
  delay(5);
    
  }
  


  
}
