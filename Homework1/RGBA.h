#ifndef OOP_RGBA_H
#define OOP_RGBA_H

#include <cstdint>

class RGBA
{
        std::uint8_t m_red;
        std::uint8_t m_green;
        std::uint8_t m_blue;
        std::uint8_t m_alpha;

    public:
        RGBA();

        RGBA(std::uint8_t red, std::uint8_t green, std::uint8_t blue);

        RGBA(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha);

        void print() const;
};


#endif //OOP_RGBA_H
