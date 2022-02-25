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

    // C++ code
    /*
    void setup()
    {
      pinMode(Reloj, INPUT);
      pinMode(Datos, INPUT);
      pinMode(LED_BUILTIN, OUTPUT);
      Serial.begin(9600);
    }
    */
    int Reloj = 5;
    int Datos = 4;
    unsigned short int Consola_serial = 0;
    bool bit [8] = {};

    cout << "Ingrese un numero entre 1 y 255" << endl;
    cin >> Consola_serial;
    if(Consola_serial > 0){
        for(short int i = 8; i > 0; i--){
            bit[i-1] = Consola_serial%2;
            Consola_serial /= 2;
            }
        // digitalWrite(Reloj,HIGH);
        for(short int j = 0; j < 8; j++){
            //digitalWrite(Datos, bit[j]);
            Datos = bit[j];
            //Serial.println(bit[j]);
        }
        //digitalWrite(Reloj, LOW);
    }

}

void Arduino_2(){


    // C++ code
    /*
    void setup()
    {
      pinMode(Reloj, INPUT);
      pinMode(Datos, INPUT);
      pinMode(LED_BUILTIN, OUTPUT);
      Serial.begin(9600);
    }
    */

    int Reloj = 4;
    int Datos = 5;

    //while(digitalRead(Reloj) == HIGH){
    while(Reloj == true){
        //Serial.println(digitalRead(Datos));
        cout << Datos;
      }

}
