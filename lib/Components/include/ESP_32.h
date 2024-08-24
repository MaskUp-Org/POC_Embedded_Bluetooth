/*
 * Created on Sat Feb 25 2024
 * By SEGHAIER Mohamed-Ali
 *
 * Copyright MaskUP (c) 2024
 */

#pragma once

#include <memory>

#include "Vibrator.h"
#include "BCHeadphone.h"
#include "ServoMotor.h"


namespace MaskUP
{
namespace Component
{

class ESP_32
{

public:
    ESP_32();
    ::MaskUP::Enum::State m_state;

private:

    std::unique_ptr<Vibrator> m_pLeftVibrator;
    std::unique_ptr<Vibrator> m_pRightVibrator;

    std::unique_ptr<BCHeadphone> m_pLeftHeadphone;
    std::unique_ptr<BCHeadphone> m_pRightHeadphone;

    std::unique_ptr<ServoMotor> m_pServoMotor;


};

}
}