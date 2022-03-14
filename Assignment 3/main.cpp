/*
 Ifrit Maruf
 Intro to Programming Fundamentals
 CS 1336
 Section 012
 due date:September 25
 date completed: September 23
 date submitted: September 23
 This program displays a menu for a geometry calculator.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
 
int main ()
{
    int choice;
    const double pi= 3.14159;
    double radius, areaCircle, length, width, areaRectangle, base, height, areaTriangle;
    
    cout << setprecision(2) << fixed;
    
    //Display the menu and get a choice.
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4)" << endl;
    
    cin >> choice;
    
    //Respond to the menu
    
    if (choice>=1 && choice<=4)
    {
        if (choice== 1)
            {
                    cout << "What is the radius of a circle" << endl;
                    cin >> radius;
                
                if(radius < 0)
                {
                    cout << "Restart the program and this time enter a positive number" << endl;
                }
                else
                {
                    // Calculate the area of the circle
                    areaCircle= pi * pow(radius, 2);
                    
                    // Display the area of the circle
                    cout << areaCircle << endl;
                }
    
            }
        else if (choice== 2)
                {
                    cout << "What is the length of the rectangle" << endl;
                    cin >> length;
                    cout << " What is the width of the rectangle" << endl;
                    cin >> width;
    
                if((length < 0) && (width <0))
                    {
                    cout << "Restart the program and this enter a positive number" << endl;
                    }
                else
                {
                    // Calculate the area of the rectangle
                    areaRectangle= length * width;
        
                    // Display the area of the rectabngle
                    cout << areaRectangle << endl;
                }
                
            }
        else if (choice== 3)
            {
                    cout << "What is the length of the base of the triangle" << endl;
                    cin >> base;
                    cout << "What is the height of the triangle" << endl;
                    cin >> height;

                if((base < 0) && (height < 0))
                {
                    cout << "Restart the program and this time enter a positive number" << endl;
                    }
                    else
                    {
                    // Calculate the area of the triangle
                    areaTriangle= base * height * .5;
        
                    // Diplay the area of the triangle
                    cout << areaTriangle << endl;
                }
            }
        else if (choice== 4)
            {
                    cout << "The program has now ended." << endl;
            }
    }
    else
    {
    cout << "An invalid choice was entered so enter a choice from 1-4." << endl;
    }
    return 0;
}

        

     


