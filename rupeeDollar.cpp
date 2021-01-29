#include<iostream>
using namespace std;
class rupee;
class dollar
{
public:
    float dlr;
    dollar(){}
    dollar(int d){dlr=d;}
    void display(){cout<<"dollar is : "<<dlr<<endl;}
};
class rupee
{
public:
    float rs;
    rupee(){}
    rupee(int r){rs=r;}
    void display(){cout<<"rupee is : "<<rs<<endl;}
    operator dollar()
    {
        dollar temp;
        temp.dlr=rs/73.23;
        return temp;
    }
    rupee(dollar d)
    {
        rs=d.dlr*73.23;
    }
};
int main()
{
    rupee r1(79),r2;
    dollar d1,d2(2);
    d1=r1;
    r2=d2;
    d1.display();
    r2.display();
    return 0;
}
