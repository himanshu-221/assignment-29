/*Create a Rupee class and convert it into int. And Display it.*/
#include<iostream>
using namespace std;
class Rupee
{
    int r;
    public:
        Rupee()
        {

        }
        Rupee(int x) : r(x)
        {

        }
        operator int()
        {
            return r;
        }
        
};
int main()
{
    Rupee r1=10;
    int x = r1;
    cout<<"X is = "<<x<<endl;
    return 0;
}