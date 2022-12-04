#include <iostream>

bool errortp(float num2){
    if(num2 != 0){
        return true;
    }
    else{
        return false;
    }
}

float calculator(float num1, float num2, char k){
    if (k == '+') {
        return num1 + num2 ;
    }
    if (k == '*') {
        return num1 * num2;
    }
    if (k == '-') {
        return num1 - num2;
    }
    if (k == '/') {
        if(errortp(num2)){
            return num1 / num2;
        }
    }
}

