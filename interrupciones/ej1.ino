/*Se crea un programa que cada vez que se accione un pulsador se active
una interrupción, y esta incremente un contador. Luego, este contador
se muestra en la pantalla*/

const int pin = 2;
int contador = 0;

void setup()
{
   Serial.begin(9600);
   pinMode(pin, INPUT_PULLUP);
   attachInterrupt(digitalPinToInterrupt(pin), fcontador, RISING);
   //RISING, FALLING, LOW, CHANGE
}
 
void loop()
{
    Serial.print("contador= ");
    Serial.println(contador);
}
 
void fcontador()
{
   contador = contador + 1;
}
