#include "question2.h"

int main()
{
    vector<int> primes;
    int num;
    int menuSelection;
    bool exitFlag = false;

    do
    {
        cout<<"Get Primes Program Menu:\n1.Input number\n2.Exit\n";
        cin>>menuSelection;
        
        if(menuSelection == 1)
        {
            do
            {
                cout<<"Input number selected...\n\nEnter an integer: ";
                cin>>num;

                if(num >= 1 && num <= 60)
                {
                    primes = get_primes(num);
                    cout<<"The primes for your number are:\n";
                    for(int i = 0; i < primes.size(); i++)
                    {
                        cout<<primes[i]<<"\n";
                    }
                    cout<<"\n";
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