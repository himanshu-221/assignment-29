/*Write a C++ program to convert Complex type to Primitive type.*/
#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
        Complex()
        {

        }
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        operator int()
        {
            return a+b;
        }
};
int main()
{
    Complex c1;
    c1.setData(2,3);
    int x;
    x=c1;
    cout<<"x is = "<<x;
    return 0;

}