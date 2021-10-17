#include "RGBA.h"

#include <iostream>

RGBA::RGBA()
{
    m_red = 0;
    m_green = 0;
    m_blue = 0;
    m_alpha = 255;
}

RGBA::RGBA(std::uint8_t red, std::uint8_t green, std::uint8_t blue)
{
    m_red = red;
    m_green = green;
    m_blue = blue;
    m_alpha = 255;
}

RGBA::RGBA(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha)
{
    m_red = red;
    m_green = green;
    m_blue = blue;
    m_alpha = alpha;
}

void RGBA::print() const
{
    std::cout << "Red component: " << unsigned(m_red) << std::endl;
    std::cout << "Green component: " << unsigned(m_green) << std::endl;
    std::cout << "Blue component: " << unsigned(m_blue) << std::endl;
    std::cout << "Alpha component: " << unsigned(m_alpha) << std::endl;
}