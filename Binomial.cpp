#include <iostream>
#include <cmath>

using namespace std;

double fact(double y){
    double u=y;
    if (y>0){
        for (int i=y-1;i>1;i--){
            u=u*i;
            if (i==1) {
                break;
            }
        }
    }
    if (y==0){
        u=1;
    }
    return u;
}
/* Function to create factorials */

double choose(double n, double k){
    double y=fact(n)/(fact(k)*fact(n-k));
    return y;
}
/* Function to create Binomial coefficient */

double Bin(double n, double k, double p){
    double bi=choose(n,k)*pow(p,k)*pow(1-p,n-k);
    return bi;
}
/* Function to create Binomial Distribution */

int main(){
    cout << Bin(5,3,0.4) << endl;
    /* Outputs binomial formula with inputted variables */
    /* As p is a probability, it must be less than or equal to 1 and greater than or equal to 0 */
    /* The n input must be greater than or equal to k */
}