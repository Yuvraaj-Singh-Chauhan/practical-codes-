#include <iostream>
using namespace std;

int main(){
    double A[3][3]={{10,-1,2},{-1,11,-1},{2,-1,10}};
    double b[3]={6,25,-11}, x[3]={0,0,0}, x_new[3];

    for(int k=0;k<50;k++){
        for(int i=0;i<3;i++){
            double sum=0;
            for(int j=0;j<3;j++) if(j!=i) sum+=A[i][j]*x[j];
            x_new[i]=(b[i]-sum)/A[i][i];
        }
        for(int i=0;i<3;i++) x[i]=x_new[i];
    }

    for(int i=0;i<3;i++) cout<<x[i]<<" ";
}
