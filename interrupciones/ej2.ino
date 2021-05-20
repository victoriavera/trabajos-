/*Realizar un programa que no contenga nada en loop()
y cada vez que se presione un botón se cambie el estado de un LED.  
*/
const int pin = 2;
int contador = 0;
bool estado=false;
void setup()
{
   Serial.begin(9600);
   pinMode(pin, INPUT_PULLUP);
   attachInterrupt(digitalPinToInterrupt(pin), interrupcion, RISING);
}
 
void loop()
{
     
}
 
void interrupcion()
{
  if(estado==false){
    estado = true;
  }
  else{
    estado=false;
  }
  digitalWrite(7, estado);
}
