/* Create two class Time and Minute and add required getter and setter including constructors. 
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
*/
#include<iostream>
using namespace std;
class Time
{
    public:
    int hr,min,sec;
        Time()
        {

        }
        void setter(int a,int b,int c)
        {
            hr = a; min =b; sec = c;
        }
        void showTime()
        {
            cout<<"Time is:- \n";
            cout<<"Hour "<<hr<<" ; Min "<<min<<" ; Sec "<<sec<<endl;
        }

};
class minutes
{
    int min=0;
    public:
        minutes()
        {

        }
        minutes(Time t)
        {
            /*min += t.sec/60;
            min += t.hr*60;
            min += t.min;*/
            min = t.min;
        }
        void showMinutes()
        {
            cout<<"Minutes = "<<min<<endl;
        }
};
int main()
{
    Time t1;
    t1.setter(2,5,78);
    minutes m;
    m = t1;
    t1.showTime();
    m.showMinutes();
    return 0;
}