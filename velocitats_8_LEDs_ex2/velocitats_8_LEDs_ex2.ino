/**********************************************************************************
** **
** Velocitat de 8 LEDs **
** **
** **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int led0 = 3; // donar nom al pin 5 de l’Arduino
const int led1 = 4; // donar nom al pin 6 de l’Arduino
const int led2 = 5; // donar nom al pin 7 de l’Arduino
const int led3 = 6; // donar nom al pin 8 de l’Arduino
const int led4 = 7; // donar nom al pin 9 de l’Arduino
const int led5 = 8; // donar nom al pin 10 de l’Arduino
const int led6 = 9; // donar nom al pin 11 de l’Arduino
const int led7 = 10; // donar nom al pin 12 de l’Arduino
const int pot0 = A0; // donar nom al pin A0 de l’Arduino
int velocitat = 20; // velocitat de l'acció en ms
int valPot0; // guardar valor del poyenciometre
//********** Setup ****************************************************************

void setup()
{
  Serial.begin(9600);
pinMode(led0, OUTPUT); // definir el pin 5 com una sortida
pinMode(led1, OUTPUT); // definir el pin 6 com una sortida
pinMode(led2, OUTPUT); // definir el pin 7 com una sortida
pinMode(led3, OUTPUT); // definir el pin 8 com una sortida
pinMode(led4, OUTPUT); // definir el pin 9 com una sortida
pinMode(led5, OUTPUT); // definir el pin 10 com una sortida
pinMode(led6, OUTPUT); // definir el pin 11 com una sortida
pinMode(led7, OUTPUT); // definir el pin 12 com una sortida
}
//********** Loop *****************************************************************

void loop()
{
valPot0 = analogRead(pot0); // llegir valor del potenciòmetre
velocitat = valPot0; // actualitzar velocitat amb el valor del potenciòmetre
Serial.println(valPot0);

digitalWrite(led0, 1); // posar a 5V el pin 5
digitalWrite(led1, 0); // posar a 0V el pin 6
digitalWrite(led2, 0); // posar a 0V el pin 7
digitalWrite(led3, 0); // posar a 0V el pin 8
digitalWrite(led4, 0); // posar a 0V el pin 9
digitalWrite(led5, 0); // posar a 0V el pin 10
digitalWrite(led6, 0); // posar a 0V el pin 11
digitalWrite(led7, 1); // posar a 5V el pin 12
delay(velocitat); // es queden leds velocitat ms en aquest estat

digitalWrite(led0, 1); // posar a 5V el pin 5
digitalWrite(led1, 1); // posar a 5V el pin 6
digitalWrite(led2, 0); // posar a 0V el pin 7
digitalWrite(led3, 0); // posar a 0V el pin 8
digitalWrite(led4, 0); // posar a 0V el pin 9
digitalWrite(led5, 0); // posar a 0V el pin 10
digitalWrite(led6, 1); // posar a 5V el pin 11
digitalWrite(led7, 1); // posar a 5V el pin 12
delay(velocitat); // es queden leds vrlocitat ms en aquest estat

digitalWrite(led0, 0); // posar a 0V el pin 5
digitalWrite(led1, 1); // posar a 5V el pin 6
digitalWrite(led2, 1); // posar a 5V el pin 7
digitalWrite(led3, 0); // posar a 0V el pin 8
digitalWrite(led4, 0); // posar a 0V el pin 9
digitalWrite(led5, 1); // posar a 5V el pin 10
digitalWrite(led6, 1); // posar a 5V el pin 11
digitalWrite(led7, 0); // posar a 0V el pin 12
delay(velocitat); // es queden leds vrlocitat ms en aquest estat

digitalWrite(led0, 0); // posar a 0V el pin 5
digitalWrite(led1, 0); // posar a 0V el pin 6
digitalWrite(led2, 1); // posar a 5V el pin 7
digitalWrite(led3, 1); // posar a 5V el pin 8
digitalWrite(led4, 1); // posar a 5V el pin 9
digitalWrite(led5, 1); // posar a 5V el pin 10
digitalWrite(led6, 0); // posar a 0V el pin 11
digitalWrite(led7, 0); // posar a 0V el pin 12
delay(velocitat); // es queden leds vrlocitat ms en aquest estat

digitalWrite(led0, 0); // posar a 0V el pin 5
digitalWrite(led1, 0); // posar a 0V el pin 6
digitalWrite(led2, 0); // posar a 0V el pin 7
digitalWrite(led3, 1); // posar a 5V el pin 8
digitalWrite(led4, 1); // posar a 5V el pin 9
digitalWrite(led5, 0); // posar a 0V el pin 10
digitalWrite(led6, 0); // posar a 0V el pin 11
digitalWrite(led7, 0); // posar a 0V el pin 12
delay(velocitat); // es queden leds vrlocitat ms en aquest estat

digitalWrite(led0, 0); // posar a 0V el pin 5
digitalWrite(led1, 0); // posar a 0V el pin 6
digitalWrite(led2, 0); // posar a 0V el pin 7
digitalWrite(led3, 0); // posar a 0V el pin 8
digitalWrite(led4, 0); // posar a 0V el pin 9
digitalWrite(led5, 0); // posar a 0V el pin 10
digitalWrite(led6, 0); // posar a 0V el pin 11
digitalWrite(led7, 0); // posar a 0V el pin 12
delay(velocitat); // es queden leds vrlocitat ms en aquest estat

digitalWrite(led0, 0); // posar a 0V el pin 5
digitalWrite(led1, 0); // posar a 0V el pin 6
digitalWrite(led2, 0); // posar a 0V el pin 7
digitalWrite(led3, 1); // posar a 5V el pin 8
digitalWrite(led4, 1); // posar a 5V el pin 9
digitalWrite(led5, 0); // posar a 0V el pin 10
digitalWrite(led6, 0); // posar a 0V el pin 11
digitalWrite(led7, 0); // posar a 0V el pin 12
delay(velocitat); // es queden leds vrlocitat ms en aquest estat

digitalWrite(led0, 0); // posar a 0V el pin 5
digitalWrite(led1, 0); // posar a 0V el pin 6
digitalWrite(led2, 1); // posar a 5V el pin 7
digitalWrite(led3, 1); // posar a 5V el pin 8
digitalWrite(led4, 1); // posar a 5V el pin 9
digitalWrite(led5, 1); // posar a 5V el pin 10
digitalWrite(led6, 0); // posar a 0V el pin 11
digitalWrite(led7, 0); // posar a 0V el pin 12
delay(velocitat); // es queden leds vrlocitat ms en aquest estat

digitalWrite(led0, 0); // posar a 0V el pin 5
digitalWrite(led1, 1); // posar a 5V el pin 6
digitalWrite(led2, 1); // posar a 5V el pin 7
digitalWrite(led3, 0); // posar a 0V el pin 8
digitalWrite(led4, 0); // posar a 0V el pin 9
digitalWrite(led5, 1); // posar a 5V el pin 10
digitalWrite(led6, 1); // posar a 5V el pin 11
digitalWrite(led7, 0); // posar a 0V el pin 12
delay(velocitat); // es queden leds vrlocitat ms en aquest estat

digitalWrite(led0, 1); // posar a 5V el pin 5
digitalWrite(led1, 1); // posar a 5V el pin 6
digitalWrite(led2, 0); // posar a 0V el pin 7
digitalWrite(led3, 0); // posar a 0V el pin 8
digitalWrite(led4, 0); // posar a 0V el pin 9
digitalWrite(led5, 0); // posar a 0V el pin 10
digitalWrite(led6, 1); // posar a 5V el pin 11
digitalWrite(led7, 1); // posar a 5V el pin 12
delay(velocitat); // es queden leds vrlocitat ms en aquest estat

}
//********** Funcions *************************************************************
