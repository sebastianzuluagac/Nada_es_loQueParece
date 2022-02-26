// C++ code
//
/*
  This program blinks pin 13 of the Arduino (the
  built-in LED)
*/

const int SER = 4;
const int RCLK = 5;
const int SRCLK = 3;

void setup()
{
  pinMode(SER, OUTPUT);
  pinMode(RCLK, OUTPUT);
  pinMode(SRCLK, OUTPUT);
  
  digitalWrite(SER, LOW);
  digitalWrite(RCLK,LOW);
  digitalWrite(SRCLK, LOW);
}

void loop()
{
  digitalWrite(SER,1);
  
  digitalWrite(SRCLK,0);
  digitalWrite(SRCLK,1);
  digitalWrite(SRCLK,0);
  
  digitalWrite(RCLK,0);
  digitalWrite(RCLK,1);
  digitalWrite(RCLK,0);
  
  delay(1500);
  
  digitalWrite(SER,0);
  
  digitalWrite(SRCLK,0);
  digitalWrite(SRCLK,1);
  digitalWrite(SRCLK,0);
  
  digitalWrite(RCLK,0);
  digitalWrite(RCLK,1);
  digitalWrite(RCLK,0);
  
  delay(1500);
  
}
  