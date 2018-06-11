/* @file HelloKeypad.pde
|| @version 1.0
|| @author Alexander Brevig
|| @contact alexanderbrevig@gmail.com
||
|| @description
|| | Demonstrates the simplest use of the matrix Keypad library.
|| #
*/
#include <Numpad.h>

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
int Nums[ROWS][COLS] = {
  {1,2,3},
  {4,5,6},
  {7,8,9},
  {10,11,12}
};
byte rowPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {8, 7, 6}; //connect to the column pinouts of the keypad

Numpad numpad = Numpad( makeNummap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  int num = numpad.getNum();
  
  if (num){
    Serial.println(num);
  }
}
