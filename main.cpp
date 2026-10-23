#include <Arduino.h>

const int BUTTONS[6] = {SW_1, SW_2, SW_3, SW_4, SW_5, SW_6};

const int Button_Pins[3] = {D0, D1, D2};

int RE_Pin_A = D7;
int RE_Pin_B = D8;

String RE_Rotation = "IDLE";

const byte Button_states[7] = {
    0, //IDLE 0b000
    4, //SW_1 0b100
    2, //SW_2 0b010
    1, //SW_3 0b001
    5, //SW_4 0b101
    3, //SW_5 0b011
    6 //SW_6 0b110
}

const byte RE_states[4] = {
    0, //0d00
    1, //0d01
    2, //0d10
    3  //0d11
}

void setup() {
for (int i = 0; i < 6; i++) {
    pinMode(Button_Pins[i], INPUT_PULLDOWN);

BUTTON_1_ID = 0
BUTTON_2_ID = 0

pinMode(RE_Pin_A, INPUT_PULLDOWN);
pinMode(RE_Pin_B, INPUT_PULLDOWN);

int RE_state_current = 0;

Serial.begin(9600);
}
}

void loop() {

byte PIN_[3];
for (int i = 0; i < 3; i++) {
    PIN_[i] = digitalRead(Button_Pins[i]);
}
byte INPUT_B = (PIN_[0] << 2) | (PIN_[1] << 1) | PIN_[2];

for (int i = 0; i < 6; i++) {
    if (Button_states[i] == INPUT_B) {
        BUTTON_1_ID = i;        //Button 1 ID in terms of the Button_states array
        break;
    }
}

unsigned long Scantimestart = millis();
while (millis() - Scantimestart < 250);

    for (int i = 0; i < 3; i++) {
    PIN_[i] = digitalRead(Button_Pins[i]);
    }

    INPUT_B = (PIN_[0] << 2) | (PIN_[1] << 1) | PIN_[2];

    if (INPUT_B == 7) {
        BUTTON_2_ID = invert3bits(BUTTON_1_ID); 
        delay(250 + Scantimestart - millis())   //Button 2 ID in terms of the Button_states array
    }
    else {
        BUTTON_2_ID = 0;
    }

RE_State_current = DigitalRead(RE_Pin_A) << 1 | DigitalRead(RE_Pin_B);

if (RE_state_current != RE_State_past) {
    if (RE_state_current > RE_State_past) {
         RE_Rotation = "CW";
    }
    else if (RE_state_current < RE_State_past) {
         RE_Rotation = "CCW";
    }
}
else {RE_Rotation = "IDLE"}

}