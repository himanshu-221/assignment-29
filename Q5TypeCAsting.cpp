/*Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add 
functions to support Invent1 to float and Invent1 to Invent2 type.
*/
#include<iostream>
using namespace std;
class Invent1
{
    public: 
    int x,y;
        Invent1()
        {
            cout<<"DC called from invent1 class\n";
        }
        Invent1(int a,int b) : x(a), y(b)
        {
            cout<<"PC called from Invent1 class\n";
        }
        operator float()
        {
            cout<<"Operator Float() called from Invent1 class\n";
            return x;
        }

};
class Invent2
{
    int a,b;
    public:
        Invent2()
        {
            cout<<"DC called from Invent2 class\n";
        }
        Invent2(int x,int y) : a(x),b(y)
        {
            cout<<"PC called from Invent2 class\n";
        }
        Invent2(Invent1 z)
        {
            cout<<"PC called from Invent2 class for Invent1 class\n";
            a = z.x;
            b = z.y;
        }

};
int main()
{
    Invent1 i1(3,5);
    Invent2 i2;
    float f;
    f = i1;
    i2 = i1;
    return 0;

}