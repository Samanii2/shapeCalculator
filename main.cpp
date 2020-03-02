#include <iostream>
#include "functions.h"
#include "subClass.h"

int main()
{
    char shapeAnswer;

    std::cout << "Starting shape calculator!";

    while(shapeAnswer != 'q')
    {
        double userInput1;
        double userInput2;
        double userInput3;

        std::cout << "\n\nInput c for circle, r for rectangle, t for triangle, b for cube, q to quit: ";
        std::cin >> shapeAnswer;
        shapeAnswer = tolower(shapeAnswer);

        if(shapeAnswer == 'c')
        {
            std::cout << "Circle Area calculation\n";
            userInput1 = safeDoubleInput("radius", userInput1);
            circle c("Circle", userInput1);
            std::cout << "The area of the circle is: " << c.getArea();
        }
        else if(shapeAnswer == 'r')
        {
            std::cout << "Rectangle Area calculation\n";
            userInput1 = safeDoubleInput("length", userInput1);
            userInput2 = safeDoubleInput("width", userInput2);
            rectangle r("Rectangle", userInput1, userInput2);
            std::cout << "The area of the " << r.getName() << " is: " << r.getArea();
        }
        else if(shapeAnswer == 't')
        {
            std::cout << "Triangle Area calculation\n";
            userInput1 = safeDoubleInput("base", userInput1);
            userInput2 = safeDoubleInput("width", userInput2);
            triangle r("Triangle", userInput1, userInput2);
            std::cout << "The area of the triangle is: " << r.getArea();
        }
        else if(shapeAnswer == 'b')
        {
            std::cout << "Cube Volume calculation\n";
            userInput1 = safeDoubleInput("length", userInput1);
            userInput2 = safeDoubleInput("width", userInput2);
            userInput3 = safeDoubleInput("height", userInput3);
            cube b("Cube", userInput1, userInput2, userInput3);
            std::cout << "The volume of the cube is: "<< b.getVolume();
        }
        else if(shapeAnswer == 'q')
        {
            std::cout << "\nExiting shape calculator!\n";
        }
        else
        {
            std::cout << "\nWrong input\n\n";
        }
    }
    return 0;
}       


//TODO
//Handle numbers with comma with a function
//Handle non numbers in userInput1-3 DONE!
//more shapes


