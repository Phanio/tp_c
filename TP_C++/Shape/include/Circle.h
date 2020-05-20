#ifndef CIRCLE_H
#define CIRCLE_H


class Circle
{
    public:
        Circle();
        int getRay(){return ray;};
        void setRay(int r){ray= r;};
    private:
        int ray;
};

#endif // CIRCLE_H
