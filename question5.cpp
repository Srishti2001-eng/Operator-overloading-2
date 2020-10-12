#include<iostream>
using namespace std;

class Complex
{
    public:
    int real;
    int img;
    Complex ()
    {
        real=img=0;
    }
    Complex(int x,int y)
    {
        real=x;
        img=y;
    }
    
    void display()
    {
        cout<<real<<"+"<<img<<"i"<<"\n";
    } 
    friend Complex operator+(Complex c, Complex d);
    bool friend operator==(Complex &c,Complex &d);   

};

Complex operator+(Complex c, Complex f)
{
    Complex sum;
    sum.real=c.real +f.real;
    sum.img=c.img + f.img;
    return sum;
}

bool operator==(Complex &c,Complex &d)
{
    return (c.real==d.real&& c.img==d.img);
}


int main()
{
    Complex x(4,5),y(4,5);   
    Complex z;  
    z=x; 
    Complex c=x+y;
    x.display();   
    y.display();
    c.display();
    z.display();
    if(x==y)
    {
        cout<<"Both the complex value are same\n";
    }  
    else
    {
        cout<<"Both the complex value are  not same\n";
    }
    
    return 0;
}
          
       
