/*Create a Dollar class and add necessary functions to support int to Dollar type conversion.*/
#include<iostream>
using namespace std;
class Dollar
{
    int d;
    public:
        Dollar()
        {

        }
        Dollar(int x) : d(x)
        {
            //cout<<"PC called of Dollar class\n";
        }
        void display()
        {
            cout<<"Dollar is = "<<d<<endl;
        }

};
int main()
{
    Dollar d;
    int x=50;
    d = x;
    d.display();
    return 0;

}
