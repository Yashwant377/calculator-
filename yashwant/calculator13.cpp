#include<iostream>
#include<math.h>
using namespace std;
int main(){

    float num1, num2;
    char c='y';
   while (c=='y')
    {
        cout<<"enter the number: "<<endl;
        cin>>num1>>num2;

        char op;
        cout<<"you can choose any character (+,-,*,/,e,|): "<<op<<endl;
        cin>>op;

    float result;
        switch (op)
        {
        case '+':
            result = num1+ num2;
            break;

            case '-':
            result = num1- num2;
            break;

            case '*':
            result = num1- num2;
            break;

            case '/':
            result = num1/num2;
            break;

            case 'e':
            result = pow(num1, num2);
            break;

            case '|':
            result = sqrt(num1);
            break;
        
        default:
        cout<<"invalid operation"<<endl;
        return 1;
            break;
        }
    
    cout<<"the result is: "<<result<<endl;
    cout<<"do you wants to continue (y/n)"<<endl;
    cin>>c;
    }
    return 0;
}