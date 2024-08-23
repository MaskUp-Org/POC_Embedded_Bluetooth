/*
 * Created on Sat Aug 17 2024
 *
 * Copyright (c) 2024 Your Company
 */

namespace MaskUP
{
namespace Enum
{

enum Position {
    UNKNOWN,
    M1000,
    M2000,
    M3000,
    M4000,
    M5000,

    END
};

inline const std::string positionToString(Position inPosition)
{
    switch (inPosition)
    {
    case Position::M1000:
        return "1000";
    case Position::M2000:
        return "2000";
    case Position::M3000:
        return "3000";
    case Position::M4000:
        return "4000";
    case Position::M5000:
        return "5000";
    case Position::END:
        return "Not in range.";
    case Position::UNKNOWN:
    default:
        return "Unknown";
    }
}

inline Position positionFromString ( const std::string &inPosition )
{
    if (inPosition == "1000")
        return Position::M1000;
    else if (inPosition == "2000")
        return Position::M2000;
    else if (inPosition == "3000")
        return Position::M3000;
    else if (inPosition == "4000")
        return Position::M4000;
    else if (inPosition == "5000")
        return Position::M5000;
    else
        // We need to return a value
        return Position::M1000;

}

}
}