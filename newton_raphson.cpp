#include <iostream>
#include <cmath>
using namespace std;

double f(double x){ return x*x*x - x - 2; }
double df(double x){ return 3*x*x -1; }

int main(){
    double x=1.5;
    for(int i=0;i<100;i++){
        double x1=x - f(x)/df(x);
        if(fabs(x1-x)<1e-6) break;
        x=x1;
    }
    cout<<x;
}
