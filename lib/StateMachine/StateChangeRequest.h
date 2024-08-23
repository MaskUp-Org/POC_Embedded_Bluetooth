/*
 * Created on Sat Aug 17 2024
 *
 * Copyright (c) 2024 MaskUp
 */

#include <vector>
#include <memory>

#include "State.hpp"

namespace MaskUP
{
namespace StateMachine
{

template <typename T>
class StateChangeRequest
{
public:
    std::unique_ptr <T> m_pOwner;
    ::MaskUP::Enum::State m_actualState;

};

}
}