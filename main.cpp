#include <Arduino.h>

const int BUTTONS[6] = {SW_1, SW_2, SW_3, SW_4, SW_5, SW_6};

const int Button_Pins[3] = {D0, D1, D2};

const int IDLE = 000;
const int Button_states[6] = {
    100, //SW_1
    010, //SW_2
    001, //SW_3
    101, //SW_4
    011, //SW_5
    110  //SW_6
}

void setup() {
for (int i = 0; i < len(BUTTONS); i++) {
    pinMode(BUTTONS[i], INPUT_PULLDOWN);
}

void loop() {
for (int i = 0; i < len(Button_Pins); i++) {
    int PIN_[i] = digitalRead(Button_Pins[i]);
}


}