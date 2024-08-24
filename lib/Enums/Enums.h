// #include "Component.hpp"
// #include "FileType.hpp"
// #include "Position.hpp"
// #include "Priority.hpp"
// #include "Side.hpp"
// #include "State.hpp"

#include <string>


namespace MaskUP
{
namespace Enum
{
enum Position {
    POSITION_UNKNOWN,
    M1000,
    M2000,
    M3000,
    M4000,
    M5000,

    POSITION_END
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
    case Position::POSITION_END:
        return "Not in range.";
    case Position::POSITION_UNKNOWN:
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

enum FileType {
    FILE_UNKNOWN,
    JSON,
    YAML,

    FILE_END
};

enum Component
{
    COMPONENT_UNKNOWN,
    ESP_32,
    LEFTBCHEADPHONE,
    RIGHTBCHEADPHONE,
    LEFTVIBRATOR,
    RIGHTVIBRATOR,
    EMERGENCYBUTTON,
    SERVOMOTOR,

    COMPONENT_END
};

enum Priority
{
    PRIORITY_UNKNOWN,
    STANDARD,
    EMERGENCY,

    PRIORITY_END
};

enum Side
{
    SIDE_UNKNOWN,
    LEFT,
    RIGHT,

    SIDE_END

};

enum State
{
    STATE_UNKNOWN,
    WORKING,
    CONFIGURING,
    WAITING,
    ERROR,

    STATE_END
};

}
}