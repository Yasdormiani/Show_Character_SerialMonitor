
void setup() {
  Serial.begin(9600);
}

void loop() {

  if (Serial.available()>0) {
    char thischar = (char)Serial.read();
    if(thischar == 'A'){
      Serial.println("character A");
    }else{
       Serial.println("not found");
    }
  }
}
