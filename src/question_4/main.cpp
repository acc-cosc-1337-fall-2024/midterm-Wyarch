#include "question4.h"


int main()
{
    bool exitFlag = false;
    int menuSelection;
    double celsius;
    double fahrenheit;

    do
    {
        cout<<"Calculate Fahrenheit:\n1.Calculate\n2.Exit\n";
        cin>>menuSelection;

        if(menuSelection == 1)
        {
            cout<<"Calculating celcius...\nEnter celsius: \n";
            cin>>celsius;
            fahrenheit = get_fahrenheit(celsius);
            cout<<"The fahrenheit is: "<<fahrenheit<<"\n\n";
        }
        else if(menuSelection == 2)
        {
            exitFlag = true;
            cout<<"Exiting Program...\n";
        }
        else
        {
            cout<<"Please enter an integeter from 1 or 2...\n\n";
        }
    }while(exitFlag != true);
    return 0;
}