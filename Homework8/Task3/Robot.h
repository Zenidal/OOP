#ifndef OOP_ROBOT_H
#define OOP_ROBOT_H


class Robot
{
    private:
        int x;
        int y;

    public:
        Robot() : x(0), y(0)
        {};

        void move(int x, int y);
};


#endif //OOP_ROBOT_H
