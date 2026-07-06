#pragma once

namespace booster_model::mode
{

enum class RobotMode 
{
    DAMP = 0,
    PREP = 1,
    WALK = 2,
    CUSTOM = 3
};

enum class UpperControl
{
    OFF = 0,
    ON = 1
};

}