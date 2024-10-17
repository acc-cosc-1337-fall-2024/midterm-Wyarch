#include "question3.h"

bool test_config()
{
    return true;
}

bool is_palindrome(string str)
{
    string palindrome;
    bool palinFlag;

    for(int i = str.size(); i > 0; i--)
    {
        palindrome += str[i-1];
    }

    if(palindrome == str)
    {
        palinFlag = true;
    }
    else
    {
        palinFlag = false;
    }

    return palinFlag;
}