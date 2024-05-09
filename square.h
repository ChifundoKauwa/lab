
// Square.h
#pragma once

namespace shapes {
   class Square {
   private:
       double sideLength;

   public:
       Square();
       Square(double side);
       ~Square();

       double getSideLength();
       void setSideLength(double side);
   };
}