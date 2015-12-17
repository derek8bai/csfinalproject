#ifndef CIRCLE_H
#define CIRCLE_H

#include "color.h"

class Circle
{
    public:
        Circle();
        Circle(double xPosInput, double yPosInput, double radiusInput, Color cirlceColorInput);
        double getXPos() const;
        double getYPos() const;
        Color getColor() const;
        double getRadius() const;
        void setXpos(double xPosInput);
        void setypos(double xPosInput);
        void setColor(Color circleColorInput);
        void setRadius(double radiusInput);
        void translate(double dx, double dy);
        void rotate(double theta);
    private:
        double xPos;
        double yPos;
        double radius;
        Color circleColor;
};
#endif //circle.h

Circle::Circle()
{
    xPos = 0;
    yPos = 0;
    radius = 0;
    circleColor.setR(0);
    circleColor.setB(0);
    circleColor.setG(0);
}

Circle::Circle(double xPosInput, double yPosInput, double radiusInput, Color circleColorInput)
{
    xPos = xPosInput;
    yPos = yPosInput;
    radius = radiusInput;
    circlecolor.setR(circleColorInput.getR());
}

double Circle::getXPos() const
{
    return xPos;
}

double Circle::getYPos() const
{
    return yPos;
}

Color Circle::getColor() const
{
    return circleColor;
}

double Circle::getRadius const;
{
    return radius;
}

void Circle::setXpos(double xPosInput)
{
    xPos = xPosInput;
}

void Circle::setypos(double yPosInput)
{
    yPos = yPosInput;
}

void setColor


