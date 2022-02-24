//Enlace a simulacion en Tinkercad.
//https://www.tinkercad.com/things/lhkbmXPq2k1-comunicacion2arduinos/editel

#include <iostream>
void Arduino_1();
void Arduino_2();

using namespace std;

int main()
{

    cout << "Hello World!" << endl;
    return 0;
}

void Arduino_1(){
/*
// C++ code
//
int Reloj = 5;
int Datos = 4;
int Consola_serial = 0;
bool bit [8] = {};

void setup()
{
  pinMode(Reloj, OUTPUT);
  pinMode(Datos, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  if(Serial.available() > 0){
    digitalWrite(Datos,HIGH);
    Consola_serial = Serial.parseInt();
    for(short int i = 8; i > 0; i--){
      bit[i-1] = Consola_serial%2;
      Consola_serial /= 2;
    }
    for(short int j = 0; j < 8; j++){
        digitalWrite(Reloj, bit[j]);
        Serial.println(bit[j]);
        delay(500);
    }
    digitalWrite(Datos, LOW);
  }
}


  */
}

void Arduino_2(){
/*
// C++ code
//
int Reloj = 4;
int Datos = 5;


void setup()
{
  pinMode(Reloj, INPUT);
  pinMode(Datos, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(Datos) == HIGH){
    if(digitalRead(Reloj) == HIGH){
      digitalWrite(LED_BUILTIN, HIGH);
    }
    else{
      digitalWrite(LED_BUILTIN, LOW);
    }
    Serial.println(digitalRead(Reloj));
    delay(500);
  }
}
*/

}
