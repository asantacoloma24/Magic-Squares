//
//  pa1.cpp
//
//  MagicSquares
//
//  Created by Alejandro Santacoloma on 2/11/17.
//  Copyright © 2017 Alejandro Santacoloma. All rights reserved.
//

#include <iostream>
#include "pa1.h"

// magic square generated by this program is odd and between 3 and 15

// Constructing magic square using Siamese method also known as De la Loubere method,
// a simple method to construct any n odd sized magic square.
// Perfect for this assignment due to constraint of odd numbered magic square of size n between 3 and 15


// Algorithm consists of starting with 1 and using arithmetic progression in an orderly pattern,
// each algorithm has a basic move pattern and an exception move which are as follow

// First square algorithm, start at first row, middle column, follows right and up pattern, if space filled then left once and down twice

// Second square algorithm, start at middle row, last column, follows right and up pattern, if space filled then left twice and down once

// Third square algorithm, start at middle row first column follows left and down pattern, if space filled then right twice and up once

// Fourth square algorithm, start at last row, middle column, follows left and down pattern, if space filled then right once and up twice

int main(int argc, const char * argv[])
{
    // insert code here...
    std::cout << "Hello, World!";
    
    //while loop to ensure valid input
    bool choice = false;
    int size = 0;
    double input;
    while (choice == false)
    {
        std::cout <<"\n" <<"INPUT>>"<<"what size magic square would you like? (Remeber to pick an odd integer between 3 and 15):";
        std::cin  >> input;
        // check to see if input is an integer
        
        size = input;
        
        if(input == size && size<=15 && size>=3  && size%2 == 1) //checks to make sure input is in range and is an integer
        {
            choice = true;
        }
        else if(size == 0){//check for strings //Got help from TA for identifying and eliminating bad input
            std::cout<<"Real input brosky (that means no strings or 0s)";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            size=0;
        }
        else
        {
            std::cout<<"Real input bro";
        }
    }
    // call on square function
    
    for(int loop = 1; loop<=4;loop++)
    {
    squaremagic(loop, size);
    }
    return 0;
}