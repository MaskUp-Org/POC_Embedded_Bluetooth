/*
 * Created on Sat Jun 29 2024
 *
 * Copyright (c) 2024 MaskUP
 */

#pragma once

#include "IComponent.h"
#include "Position.hpp"
#include "State.hpp"

namespace MaskUP
{
namespace Component
{

class ServoMotor : public IComponent
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
    virtual void run () = 0;

    /**
    * @brief Stop the component
    *
    */
    virtual void stop () = 0;

    void changePosition (const ::MaskUP::Enum::Position inPosition);

    ::MaskUP::Enum::State m_state;
private:
    ::MaskUP::Enum::Position m_position;
};

}
}