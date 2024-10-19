#include "question1.h"

int main()
{
    string binary;
    int num;
    int menuSelection;
    bool exitFlag = false;

    do
    {
        cout<<"Decimal to Binary Menu:\n1.Input number\n2.Exit\n";
        cin>>menuSelection;
        
        if(menuSelection == 1)
        {
            do
            {
                cout<<"Input number selected...\n\nEnter an integer: ";
                cin>>num;

                if(num >= 1 && num <= 255)
                {
                    binary = decimal_to_binary(num);
                    cout<<"Your binary number is "<<binary<<"\n\n";
                    exitFlag = true;
                }
                else
                {
                    cout<<"Invalid input, please enter an integer from 1 to 60.\n";
                }
            }while(exitFlag != true);
            exitFlag = false;
        }
        else if(menuSelection == 2)
        {
            exitFlag = true;
            cout<<"Exiting program...\n";
        }
        else
        {
            cout<<"Invalid input, enter an integer from 1 to 2 to make a selection.\n\n";
        }
    }while(exitFlag != true);

    return 0;
}