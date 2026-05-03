#include <iostream>
using namespace std;

int main(){
    double x[4]={1,2,3,4}, y[4]={1,8,27,64};
    double diff[4][4];

    for(int i=0;i<4;i++) diff[i][0]=y[i];

    for(int j=1;j<4;j++)
        for(int i=0;i<4-j;i++)
            diff[i][j]=diff[i+1][j-1]-diff[i][j-1];

    double xp=3.5, h=1;
    double u=(xp-x[3])/h, result=y[3], term=1;

    for(int i=1;i<4;i++){
        term *= (u+(i-1))/i;
        result += term*diff[3-i][i];
    }

    cout<<result;
}
