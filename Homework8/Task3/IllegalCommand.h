#ifndef OOP_ILLEGALCOMMAND_H
#define OOP_ILLEGALCOMMAND_H

#include "OffTheField.h"

class IllegalCommand : public OffTheField
{
    public:
        IllegalCommand(int originalX, int originalY, int newX, int newY);
};


#endif //OOP_ILLEGALCOMMAND_H
