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
        manageBluetoothData(); 
    }  
}



void BluetoothManager::manageBluetoothData() {
    
   String jsonData = "";

    while (SerialBT.available()) {
        char c = SerialBT.read(); 
        jsonData += c; 
    }

    StaticJsonDocument<200> doc;
    DeserializationError error = deserializeJson(doc, jsonData);

    if (error) {
        Serial.print("Erreur de désérialisation: ");
        Serial.println(error.c_str());
        return;
    }

    const char* type = doc["type"];
    const char* action = doc["action"];
    Serial.println("Type: " + String(type));
    Serial.println("Action: " + String(action));

    // if (strcmp(type, "command") == 0) {
    //     if (strcmp(action, "set_altitude") == 0) {
    //         int value = doc["data"]["value"];
    //         Serial.println("Nouvelle altitude: " + String(value));
    //     }
    // }
}

}
}

