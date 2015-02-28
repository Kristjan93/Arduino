int LDRvalue = 0;
int Light_sens = 400;
int LDR = 0;

int portA = 11;
int portB = 6;
int portC = 5;
int portD = 3;
int portE = 4;
int portF = 9; 
int portG = 7;
int portH = 5;
int portI = 8; 
int portJ = 12;



void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  delay(50);
  
  pinMode(portA, OUTPUT); 
  pinMode(portB, OUTPUT); 
  pinMode(portC, OUTPUT); 
  pinMode(portD, OUTPUT); 
  pinMode(portE, OUTPUT); 
  pinMode(portF, OUTPUT); 
  pinMode(portG, OUTPUT); 
  pinMode(portH, OUTPUT); 
  pinMode(portI, OUTPUT); 
  pinMode(portJ, OUTPUT); 
  digitalWrite(5, HIGH);
  

}
  
void loop()
{
  LDRvalue = analogRead(LDR);
  Serial.println(LDRvalue);
 delay(50);
 
 if (LDRvalue < Light_sens)
   {
      digitalWrite(portE, 0);
      digitalWrite(portF, 0);
      digitalWrite(portA, 0); 
      digitalWrite(portB, 0); 
      digitalWrite(portD, 1); 
      digitalWrite(portG, 1);  
      digitalWrite(portI, 0); 
      digitalWrite(portJ, 0); 
   }
   else 
   {
      digitalWrite(portE, 0);
      digitalWrite(portF, 1);
      digitalWrite(portA, 1); 
      digitalWrite(portB, 1); 
      digitalWrite(portD, 0); 
      digitalWrite(portG, 1);  
      digitalWrite(portI, 1); 
      digitalWrite(portJ, 0);
  }
}

       
    

