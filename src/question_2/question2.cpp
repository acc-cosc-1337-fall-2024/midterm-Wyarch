#include "question2.h"

bool test_config()
{
    return true;
}

vector<int> get_primes(int num)
{
    vector<int> primes = {};
    int count = 0;

    if(num <= 1)
    {
        primes = {};
    }
    
    else
    {
        for(int i = 2; i < num; i++)
        {
            count = 0;
            
            for(int c = 1; c <= i; c++)
            {
                if(i % c == 0)
                    count++;
            }
            
            if(count == 2)
            {
                primes.push_back(i);
            }
        }
    }
    return primes;
}