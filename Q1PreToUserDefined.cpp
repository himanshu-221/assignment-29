/*Write a C++ program to convert Primitive type to Complex type.*/
#include<iostream>
using namespace std;
class Convertion
{
    int var;
    public:
        Convertion()
        {

        }
        Convertion(int x)
        {
            var=x;
        }
        void print()
        {
            cout<<"Value is "<<var<<endl;
        }
};
int main()
{
    Convertion c;
    int x=10;
    c=x;
    c.print();
    return 0;

}