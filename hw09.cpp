#include "hw09.h"

fractionType::fractionType(int num, int denom)
{
    //check if denom is 0 and throws error, or continues if not 0.
    if(denom == 0)
    {
      throw std::invalid_argument("Denominator cant be zero.");
    }
      numerator = num;
      denominator = denom;
}

fractionType fractionType::operator+(const fractionType& FracInput) const 
{
  int newNumerator = numerator * FracInput.denominator + FracInput.numerator * denominator;
  int newDenom = denominator * FracInput.denominator;
  return fractionType(newNumerator, newDenom);
}

fractionType fractionType::operator/(const fractionType& fracInput) const
{
  if(fracInput.numerator == 0)
  {
    throw std::invalid_argument("Numerator cant be zero.");
  }
  int newNumerator = numerator * fracInput.denominator;
  int newDenom = denominator * fracInput.numerator;
  return fractionType(newNumerator, newDenom);
}

fractionType fractionType::operator*(const fractionType& fracInput) const {
  int newNum = numerator * fracInput.numerator;
  int newDenom = denominator * fracInput.denominator;
  return fractionType(newNum, newDenom);
}

fractionType fractionType::operator-(const fractionType& fracInput) const {
  int newNum = numerator * fracInput.denominator - fracInput.numerator * denominator;
  int newDenom = denominator * fracInput.denominator;
  return fractionType(newNum, newDenom);
}










int main()
{

    
    return 0;
}