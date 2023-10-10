#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
    public:
        Rectangle();
        virtual ~Rectangle();

        void set_values(int, int);
        int area();

    protected:

    private:
        int width, height;
};

#endif