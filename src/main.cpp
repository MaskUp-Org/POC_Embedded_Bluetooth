/*
 * Created on Sat Feb 25 2024
 * By SEGHAIER Mohamed-Ali
 *
 * Copyright MaskUP (c) 2024
 */



#include <Arduino.h>
#include "BluetoothManager.h"



 MaskUP::Component::BluetoothManager bluetoothManager;
 
// #include <vector>
// #include "IComponent.h"
// #include "BCHeadphone.h"
// #include "HardwareSerial.h"

void setup() {
    Serial.begin(115200);

    bluetoothManager.setup();


    Serial.println("Setup main ready");

    // put your setup code here, to run once:
    pinMode(16, OUTPUT);

    
}

void loop() {
    // put your main code here, to run repeatedly:
    // bluetoothManager.loop();
    Serial.read();
     
    bluetoothManager.loop();



    // digitalWrite(16, HIGH);
    // delay(1000);
    // digitalWrite(16, LOW);
    // delay(1000);
}