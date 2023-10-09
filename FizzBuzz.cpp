//
// Fizz Buzz implementation.
//
#include <iostream>
#include "FizzBuzz.h"
//problem #1
/*void fizzBuzz(){
    std::cout << "Starting Fizz Buzz:\n";
    for (int i =1; i<101; i=i+1){
        if (i%3 == 0){
            std::cout << "Fizz"<<","<<"";
        }
        else if(i%5 == 0){
            std::cout << "Buzz"<<","<<"";
        }
        else{
            std::cout << i << "," << "";
        }
    }
}

// problem#2
*/void fizzBuzz(int size, int increment){
    std::cout << "Starting Fizz Buzz:\n";
    for (int i =1; i<size+1; i=i+increment){
        if (i%7 == 0){
            std::cout << "Fizz"<<","<<"";
        }
        else if(i%11 == 0){
            std::cout << "Buzz"<<","<<"";
        }
        else{
            std::cout << i << "," << "";
        }
    }
}
