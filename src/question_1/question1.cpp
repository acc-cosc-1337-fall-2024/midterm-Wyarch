#include "question1.h"

bool test_config()
{
    return true;
}

string decimal_to_binary(int num)
{
    vector<int> binaryChart = {128,64,32,16,8,4,2,1};
    vector<string> binaryVector = {"0","0","0","0","0","0","0","0"};
    int markNum;

    for(int i = 0; i <= binaryVector.size(); i++)
    {
        if(num < binaryChart[i])
        {
            binaryVector[i] = "0";
        }
        else
        {
            for(int c = i + 1; c <= binaryVector.size(); c++)
            {
                if(binaryChart[i] + binaryChart [c] == num)
                {
                    binaryVector[i] = 
                }
            }
        }
    }

    return ;
}