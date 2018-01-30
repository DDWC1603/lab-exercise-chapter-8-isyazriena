#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int area;
int saje_je;

class ATriangle
{
      private:
              int x, y;
              
      public:
             
             int get_value (int, int);
             
             int calc_area ()
             {
                 return ((x*y)/2);
             }                 
             
             void print ()
             {
                  cout << "Area is: " << calc_area() << endl;
             }
             
};


void ATriangle::get_value(int a,int b)
{
     
 x =a;
 y=b;   
}

//t base, height;
/*
int get_value(int a, int b)
{
    a = base;
    b = height;
}
*/
int main ()
{
    ATriangle oA;
    oA.get_value(6,6);
    oA.print();
    cin >> saje_je;
}
