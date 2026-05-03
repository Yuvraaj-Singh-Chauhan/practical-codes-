#include <iostream>
using namespace std;

int main(){
    double A[3][4]={{2,1,-1,8},{-3,-1,2,-11},{-2,1,2,-3}};

    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            double r=A[j][i]/A[i][i];
            for(int k=0;k<4;k++)
                A[j][k]-=r*A[i][k];
        }
    }

    double x[3];
    for(int i=2;i>=0;i--){
        x[i]=A[i][3];
        for(int j=i+1;j<3;j++)
            x[i]-=A[i][j]*x[j];
        x[i]/=A[i][i];
    }

    for(int i=0;i<3;i++) cout<<x[i]<<" ";
}
