#ifndef OOP_POWER_H
#define OOP_POWER_H


class Power
{
    private:
        double value;
        double degree;
    public:
        Power();

        void setValue(double newValue);

        void setDegree(double newDegree);

        double calculate();
};


#endif //OOP_POWER_H
