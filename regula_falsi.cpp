#include <iostream>
#include <cmath>
using namespace std;

double f(double x){ return x*x*x - x - 2; }

int main(){
    double a=1, b=2, c;
    for(int i=0;i<100;i++){
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        if(fabs(f(c))<1e-6) break;
        if(f(a)*f(c)<0) b=c;
        else a=c;
    }
    cout<<c;
}
