/*
 * Created on Sat Jun 29 2024
 * By SEGHAIER Mohamed-Ali
 *
 * Copyright (c) 2024 MaskUP
 */

#pragma once

#include "IComponent.h"

namespace MaskUP::Component
{

class EmergencyButton : public IComponent
{
public:

    /**
     * @brief Setup the component
     * @param inPin : Pin number physically connected to the component
     * @param inMode : INPUT or OUTPUT
     *
     */
    virtual void setup (uint8_t inPin, uint8_t inMode) override;


    /**
     * @brief Run the component.
     *
     */
    virtual void run () =0;

    /**
    * @brief Stop the component
    *
    */
    virtual void stop () = 0;

};

}
