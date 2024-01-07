#include<iostream>
using namespace std;
class ComplexFraction
{
    private: int real;
             int imginary;
    public:
    ComplexFraction(int x, int y)
    {
        real=x;
        imginary=y;
    }
    void add(ComplexFraction const &c)
    {
        real=real+c.real;
        imginary=imginary+c.imginary;
    }
    void print()
    {
        cout<<real<<" + "<<imginary<<"i"<<endl;
    }
    void multiply(ComplexFraction const &c)
    {
        int w=real*c.real;
        int x=real*c.imginary;
        int y=imginary*c.real;
        int z=imginary*c.imginary;
        real=w+z;
        imginary=x+y;
    }
    void simplify()
    {
        int gcd=1;
        int n=min(real,imginary);
        for(int i=2;i<=n;i++)
        {
            if(real%i==0 && imginary%i==0)
            {
                gcd=i;
            }
        }
        real=real/gcd;
        imginary=imginary/gcd;
    }
};
int main()
{
    ComplexFraction cn1(10,20);
    ComplexFraction cn2(2,5);
    cn1.print();
    cn2.print();
    cn1.add(cn2);
    cout<<"After Addition = "<<endl;
    cn1.print();
    cn2.print();
    //Multiption
    cn1.print();
    cn2.print();
    cn1.multiply(cn2);
    cout<<"After Multipication = "<<endl;
    cn1.print();
    cn2.print();
    return 0;
}