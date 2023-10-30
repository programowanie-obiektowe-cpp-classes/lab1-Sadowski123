
// Lab 1 wtorki 16-18
// Kacper Sadowski 

#include<iostream> 
#include<math.h>
using namespace std;

class Wektor2D
{
    public:
        Wektor2D() //konstruktor
        {
            x=0; 
            y=0; 
            cout << "wspó³rzêdne wektora: " << "x = " << x << " y = " << y << endl;
        } 

        Wektor2D(double a, double b) 
        {
            x=a; 
            y=b; 
            cout << "wspó³rzêdne wektora: " << "x = " << x << " y = " << y << endl;
        }; 

        ~Wektor2D() //destruktor
        {
            cout << "Zniszczenie" << endl;
        }; 

        double norm() 
        {
            double result;
            result = sqrt(x*x + y*y); 
            cout << "[" <<x<< ", "<<y<<"]"<< endl;
            return result; 
        }; 

        void setX(int a){x=a;}; 
        void setY(int b){y=b;}; 

        int getX(){return x;}; 
        int getY(){return y;}; 

        int x; 
        int y;

}; 


Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
    double sumx, sumy; 
    sumx=v1.getX()+v2.getX(); 
    sumy=v1.getY()+v2.getY(); 

    return Wektor2D{sumx, sumy}; 
}; 


double operator*(Wektor2D v1, Wektor2D v2)
{
    double scalar; 
    scalar =v1.getX()*v2.getX()+ v1.getY()*v2.getY(); 
    return scalar; 
}; 