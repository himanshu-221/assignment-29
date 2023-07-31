/*Create two classes Rupee and Dollar and add necessary functions to support Rupee to 
Dollar and Dollar to Rupee conversion.
*/
#include<iostream>
using namespace std;
class Rupee
{
    public:
    int r;
        Rupee()
        {

        }
        Rupee(int x) : r(x)
        {
            cout<<"PC called of Rupee class\n";
        }
        operator int()
        {
            cout<<"Operator int called from Rupee class\n";
            return r;
        }
        void display()
        {
            cout<<"Rupees = "<<r<<endl;
        }
        
};
class Dollar
{
    public:
    int d;
        Dollar()
        {

        }
        /*Dollar(int x) : d(x)
        {
            //cout<<"PC called of Dollar class\n";
        }*/
        Dollar(Rupee r1)
        {
            cout<<"PC constructor called of Dollar class for Ruppe class\n";
            d = r1.r;
        }
        operator Rupee()
        {
            cout<<"Operator Rupee() called from class Dollar\n";  
            Rupee z;
            z=d;
            return z;
        }
        void display()
        {
            cout<<"Dollar is = "<<d<<endl;
        }

};
int main()
{
    Rupee r1=23;
    Dollar d1 = r1;

    d1.display();
    r1.display();

    r1 = d1;
    d1.display();
    r1.display();

    return 0;
}