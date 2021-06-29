#include <iostream>

using namespace std;
class cls
{
    char op;
    int  num1, num2;
    int i;
    public: cls()
    {
        do
        {
       cout<<"\n Enter the operation to perform: +,-,*,/,% \n ";
       cin>>op;
       cout<<" Enter any 2 numbers: \n ";
        cin>>num1>>num2;
        switch(op)
        {
case '+':
cout<<"Sum of "<<num1<<" and "<<num2<<" is: "<<num1+num2;
break;
case '-':
cout<<"\n Difference between "<<num1<<" and "<<num2<<" is "<<num1-num2;
break;
case '*':
cout<<" \n Product of "<<num1<<" and "<<num2<<" is "<<num1*num2;
break;
case '/':
cout<<"\n Division of "<<num1<<" by "<<num2<<" is "<<num1/num2;
break;
case '%':
cout<<"\n Remainder of "<<num1<<" by "<<num2<<" is "<<(num1 % num2);
    break;
default:
    cout<<"\n Error!!Wrong Input! No such operator found \n";
    break;
        }
        cout<<"\n \n Do you want to perform another operation? Enter 1 for YES or 0 for NO \n";
        cin>>i;
        }
        while(i!=0);
    }

 ~cls()
    {
        cout<<" Destructor called \n";
    }
    };
int main()
{
    cls obj;

    return 0;
}
