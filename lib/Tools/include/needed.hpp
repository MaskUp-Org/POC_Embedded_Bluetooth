/*
 * Created on Sat Feb 25 2024
 * By SEGHAIER Mohamed-Ali
 *
 * All this pain is because PlatformIO is running C++ 11, and we want to use C++ 14 && C++ 17 functions,
 *
 * Copyright MaskUP (c) 2024
 */


#pragma once


#include <memory>
#include <stdint.h>

namespace MaskUP
{
namespace Tools
{

template<typename T, typename... Args>
inline std::unique_ptr<T> make_unique(Args&&... args)
{
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

}
}