#include <iostream>
#include <cstring>
using namespace std;
void operation(int num1,int num2,char op){
 switch(op) {
        case '+':
                cout << num1 << " + " << num2 << " = " << num1+num2;
                break;
        case '-':
                cout << num1 << " - " << num2 << " = " << num1-num2;
                break;
        case '*':
                cout << num1 << " * " << num2 << " = " << num1*num2;
                break;
        case '/':
                cout << num1 << " / " << num2 << " = " << num1/num2;
                break;
        default:
                printf("ERROR: Unsupported Operation");
    }
}
    int main()
    {
        int a,b;
        char opr;
        cin>>a>>b>>opr;
        operation(a,b,opr);
    }




