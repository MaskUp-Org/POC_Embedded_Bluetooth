/*
 * Created on Sat Aug 17 2024
 * By SEGHAIER Mohamed-Ali
 *
 * Copyright (c) 2024 MaskUp
 */

#pragma once

#include "EmergencyButton.h"
#include "IBuilder.h"
#include "needed.hpp"
#include "Position.hpp"

#include <memory>

namespace MaskUP
namespace Build
{
{
class EmergencyButtonBuilder : public IBuilder <::MaskUP::Component::EmergencyButton>
{
public:
    virtual EmergencyButtonBuilder *reset () override ;

    virtual std::unique_ptr <::MaskUP::Component::EmergencyButton> build () override;

private:

    std::unique_ptr <::MaskUP::Component::EmergencyButton> m_pEmergencyButton;

};
}
}