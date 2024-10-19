#include "question1.h"

bool test_config()
{
    return true;
}

string decimal_to_binary(int num)
{
    int remainderNum;
    string processingBinary;
    string returnBinary;

    for(int i = 0; i <= 7; i++)
    {
        remainderNum = num % 2;
        num = num/2;
        
        if(remainderNum == 1)
        {
            processingBinary += "1";
        }
        else
        {
            processingBinary += "0";
        }
    }

    for(int c = processingBinary.size(); c >= 0; c--)
    {
        returnBinary += processingBinary[c];
    }
    
    return returnBinary;
}