#include<iostream>
using namespace std;
class complex
{
    int real, img;
    public:
    void accept(int r, int i)
    {
        real = r; img = i;
    }
    void display()
    {
        if(img>0)
        {
            cout<<real<<"+i"<<img;
        }
        else
        {
            cout<<real<<"-i"<<-img;
        }
    }
    complex add(complex c)  
    {
        complex sum;
        sum.real = real + c.real;
        sum.img = img + c.img;
        return sum;
    }
    complex sub(complex c)  
    {
        complex diff;
        diff.real = real - c.real;
        diff.img = img - c.img;
        return diff;
    }
    complex mul(complex c)
    {
        complex prod;
        prod.real = real * c.real - img * c.img;
        prod.img = real * c.img + img * c.real;
        return prod;
    }
    complex div(complex c)
    {
        complex quo;
        int denominator = c.real * c.real + c.img * c.img;
        quo.real = (real * c.real + img * c.img) / denominator;
        quo.img  = (img * c.real - real * c.img) / denominator;
        return quo;
    //a+bi/c+di=(ac+bd)+(bc−ad)i/c.c+d.d

    }
};
int main()
{
    complex c1,c2,c3;
    c1.accept(1,1);
    cout<<"first no is: ";
    c1.display();
    c2.accept(2,2);
    cout<<"\nsecond no is: ";
    c2.display();
    c3=c1.add(c2);
    cout<<"\naddition is: ";
    c3.display();
    c3=c1.sub(c2);
    cout<<"\nSubstraction is: ";
    c3.display();
    c3=c1.mul(c2);
    cout<<"\nMultiplication is: ";
     c3.display();
    c3=c1.div(c2);
    cout<<"\nDivison is: ";
    c3.display();
    return 0;
}

