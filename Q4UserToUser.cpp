/*Create Product class and convert Product type to Item type using casting operator*/

#include<iostream>
using namespace std;

class Item
{
    public:
    int x,y;
        Item()
        {

        }
        void show()
        {
            cout<<"Item is = "<<x<<" or "<<y<<endl;
        }

};
class Product
{
    public:
    int a,b;
        void setData(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void show()
        {
            cout<<"Product is = "<<a<<" or "<<b<<endl;
        }
        operator Item()
        {
            Item i;
            i.x = a;
            i.y = b;
            return i;

        }

};
int main()
{
     Item i1;
     Product p1;
     p1.setData(3,4);
     i1=p1;
     i1.show();
     return 0;

}