/*
 * Created on Sun Jun 30 2024
 *
 * Copyright (c) 2024 MaskUP
 */

#pragma once

#include "MaskUPEnumeration.h"
#include <string>

namespace MaskUP::Tools::ServoMotor
{

inline const std::string positionToString(Position inPosition)
{
    switch (inPosition)
    {
    case Position::Altitude_1000m:
        return "Altitude_1000m";
    case Position::Altitude_2000m:
        return "Altitude_2000m";
    case Position::Altitude_3000m:
        return "Altitude_3000m";
    case Position::Altitude_4000m:
        return "Altitude_4000m";
    case Position::Altitude_5000m:
        return "Altitude_5000m";
    default:
        return "Unknown";
    }
}

inline Position positionFromString ( const std::string &inPosition )
{
    if (inPosition == "Altitude_1000m")
        return Position::Altitude_1000m;
    else if (inPosition == "Altitude_2000m")
        return Position::Altitude_2000m;
    else if (inPosition == "Altitude_3000m")
        return Position::Altitude_3000m;
    else if (inPosition == "Altitude_4000m")
        return Position::Altitude_4000m;
    else if (inPosition == "Altitude_5000m")
        return Position::Altitude_5000m;
    else
        return Position::Altitude_1000m;

}

} // namespace MaskUP::Tools::ServoMotor