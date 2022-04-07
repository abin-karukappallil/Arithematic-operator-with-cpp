#include <iostream>
using namespace std;

int main()
{
    char ch;
    float n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    do
    {
        cout<<"\nNumber 1: "<<n1<<"\tNumber 2: "<<n2;
        cout<<"\n\t\t\tOperator Menu";
        cout<<"\n\t1. Addition (+)";
        cout<<"\n\t2. subtraction (-)";
        cout<<"\n\t3. Multiplication (*)";
        cout<<"\n\t4. Division (/)";
        cout<<"\n\t5. Exit (E)";
        cout<<"\nEnter option number or operator: ";
        cin>>ch;
        switch(ch)
        {
            case '1' :
            case '+' : cout<<n1<<" + "<<n2<<" = "<<n1+n2;
                        break;
            case '2' :
            case '-' : cout<<n1<<" - "<<n2<<" = "<<n1-n2;
                        break;
            case '3' :
            case '*' : cout<<n1<<" * "<<n2<<" = "<<n1*n2;
                        break;
            case '4' :
            case '/' : cout<<n1<<" / "<<n2<<" = "<<n1/n2;
                        break;
                        case '5' :
                        case 'E' :
                        case 'e' : cout<<"Made with ❤ by Abin Thomas";
                                    break;
                        default : cout<<"invalid choice ma dear!";
    }
    } while (ch!='5' && ch!='E' && ch!='e');
    return 0;
    
}