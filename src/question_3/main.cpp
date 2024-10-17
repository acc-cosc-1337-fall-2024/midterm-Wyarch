#include "question3.h"

int main()
{
    bool exitFlag = false;
    bool functionResult;
    int menuInput;
    string userStr;

    //Begin Do-While loop
    do
    {
        //Display menu
        cout<<"Palindrome Test:\n1.Begin Test\n2.Exit Program\n";
        cin>>menuInput;

        if(menuInput == 1)
        {
            cout<<"Testing Palindrome\nEnter your string: \n";
            cin>>userStr;
            functionResult = is_palindrome(userStr);

            if (functionResult == 1)
            {
                cout<<"Result: True\n\n";
            }
            else
            {
                cout<<"Result: False\n\n";
            }
            
        }
        else if(menuInput == 2)
        {
            exitFlag = true;
            cout<<"Exiting Program...\n";
        }
        else
        {
            cout<<"Invalid input. Please enter an integer from 1 to 2...\n\n";
        }
    }while(exitFlag != true);
    
    return 0;
}