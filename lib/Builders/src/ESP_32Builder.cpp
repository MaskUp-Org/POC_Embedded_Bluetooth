/*
 * Created on Sat Feb 25 2024
 * By SEGHAIER Mohamed-Ali
 * 
 * Copyright MaskUP (c) 2024
 */

#include "ESP_32Builder.h"


namespace MaskUP::Build
{

ESP_32Builder *ESP_32Builder::reset ()
{
    m_pEsp32 = ::MaskUP::Tools::make_unique <::MaskUP::ESP::ESP_32> ();
    m_isReset = true;

    return this;
}



}