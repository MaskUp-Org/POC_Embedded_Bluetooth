#include "BluetoothManager.h"

namespace MaskUP
{
namespace Component
{

void BluetoothManager::setup()  {
    Serial.begin(115200);
    SerialBT.begin("ESP32test"); 

    Serial.println("Bluetooth prêt");
    m_state = true;
}

void BluetoothManager::loop()  {

if (SerialBT.available()) {
    char message = SerialBT.read(); 
    
    if (SerialBT.available()) {
        Serial.println(message);
    

    if (message == 'c') {
        Serial.println("FUCK !");
        digitalWrite(16, HIGH);
    }
    else {
        Serial.println("Message non reconnu");
        digitalWrite(16, LOW);
    }

    }
}

}
}
}
