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








int main()
{

    
    return 0;
}