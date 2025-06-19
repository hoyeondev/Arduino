#include <Keypad.h>

const byte rows = 4;
const byte cols = 4;

char keyValue[rows][cols] = {
 {'1','2', '3','A'},
 {'4','5', '6','B'},
 {'7','8', '9','C'},
 {'*','0', '#','D'}
};

byte rowPins[rows] = {9,8,7,6};
byte colPins[cols] = {5,4,3,2};

Keypad userKeypad = Keypad(makeKeymap(keyValue), rowPins, colPins, rows, cols);
char pressedKey;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 pressedKey = userKeypad.getKey();

 if (pressedKey != NO_KEY){
 Serial.print("Pressed Key : ");
 Serial.println(pressedKey);
 }
}