/*
 * Created on Mon Feb 26 2024
 *
 * Copyright (c) 2024 MaskUP
 */

#pragma once

#include "IComponent.h"
#include "BluetoothSerial.h"

namespace MaskUP
{

    namespace Component
    {

        class BluetoothManager 
        {
        public:
            /**
             * @brief Setup the component
             * @param inPin : Pin number physically connected to the component
             * @param inMode : INPUT or OUTPUT
             *
             */
             void setup( ) ;
             void loop( ) ;



        private:
            bool m_state;
            BluetoothSerial SerialBT;
        };

    }
}