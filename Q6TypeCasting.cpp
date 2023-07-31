/*Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e int ) 
to Time class.
*/
#include<iostream>
using namespace std;
class Time
{
    int hr,min,sec;
    public:
        Time()
        {

        }
        Time(int a) : sec(a)
        {
            min = sec/60;
            sec = sec%60;
            hr = min/60;
            min = min%60;
        }
        void showTime()
        {
            cout<<"Hour "<<hr<<" ; Min "<<min<<" ; Sec "<<sec<<endl;
        }
};
int main()
{
    int sec;
    cout<<"Enter time duration in Seconds\n";
    cin>>sec;
    Time t1(sec);
    t1.showTime();
    return 0;

}