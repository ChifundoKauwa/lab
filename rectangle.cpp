
#pragma once
#include "rectangle.h"
using namespace std; 
rectangle::rectangle(){
    length=0;
    widith=0;
} 
rectangle::~rectangle(){

}


    void rectangle:: Setwidith(float newwidith){
    widith = newwidith;
        

    }
    float rectangle::Getlength(){
        return length;
    }
    float rectangle::Getwidith(){
        return widith;
    }

    void rectangle:: Setlength(float newlength){
        length =newlength;
    }
    float rectangle:: area(){
        return length * widith;
    }


