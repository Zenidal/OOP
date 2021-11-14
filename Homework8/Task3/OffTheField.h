#ifndef OOP_OFFTHEFIELD_H
#define OOP_OFFTHEFIELD_H

#include <exception>

class OffTheField : public std::exception
{
    private:
        int originalX;
        int originalY;
        int newX;
        int newY;

    public:
        OffTheField(int originalX, int originalY, int newX, int newY);

        int getOriginalX() const;

        int getOriginalY() const;

        int getNewX() const;

        int getNewY() const;

        const char *what() const _GLIBCXX_USE_NOEXCEPT override;
};


#endif //OOP_OFFTHEFIELD_H
