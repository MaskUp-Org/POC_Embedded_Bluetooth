/*
 * Created on Sat Aug 17 2024
 *
 * Copyright (c) 2024 MaskUp
 */

#pragma once

#include <memory>

#include "ESP_32.h"
#include "BCHeadphone.h"
#include "StateChangeRequest.h"
#include "IComponent.h"


namespace MaskUP::StateMachine
{
class StateMachine {
public:
private:
    void clearQueue ();
    void changeState ();

    std::unique_ptr <::MaskUP::Component::ESP_32> m_pEsp32;
    std::unique_ptr <::MaskUP::Component::BCHeadphone> m_pLeftBCHeadPhone;
    std::unique_ptr <::MaskUP::Component::BCHeadphone> m_pRightBCHeadPhone;
    std::unique_ptr <::MaskUP::Component::Vibrator> m_pLeftVibrator;
    std::unique_ptr <::MaskUP::Component::Vibrator> m_pRightVibrator;
    std::unique_ptr <::MaskUP::Component::ServoMotor> m_pServomotor;
    std::unique_ptr <::MaskUP::Component::ESP_32> m_pEsp32;
    std::unique_ptr <::MaskUP::Component::ESP_32> m_pEsp32;

    std::vector <::MaskUP::StateMachine::StateChangeRequest<::MaskUP::Component::IComponent>> m_standardRequest;
    std::vector <::MaskUP::StateMachine::StateChangeRequest<::MaskUP::Component::IComponent>> m_emergencyRequest;
};
}