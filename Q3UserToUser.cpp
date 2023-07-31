/*Create a Product class and convert Product type to Item type using constructor*/
#include<iostream>
using namespace std;
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

};
class Item
{
    int x,y;
    public:
        Item()
        {

        }
        Item(Product p)
        {
            cout<<"PC called of Item class\n";
            x = p.a;
            y = p.b;
        }
        void show()
        {
            cout<<"Item is = "<<x<<" or "<<y<<endl;
        }

};
int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1 = p1;
    i1.show();
    return 0;    

}
