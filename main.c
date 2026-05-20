#include <stdio.h>
#include <math.h>

double ecu(double x){
    return pow(x,3) - (0.165)*pow(x,2) + 0.0003993;
}
double ecuDir(double x){
    return 3*pow(x,2 ) - 0.33*x ;
}
double aError(double xc, double xp){
    double x = ((xc - xp)/xc)*100 ;

    return (x >= 0) ? x : -x; 
}

int main(){

    double x = 0.05;
    int iterations = 3;
    printf("Initial guess is %f \n", x);
    for(int i = 0; i < iterations; i++){
        double xp = x;
        x = x - ecu(x)/ecuDir(x);
        printf("Value in %d iteration %f \t", i + 1, x);
        
        printf("Error is %f %%", aError(x, xp));

        
        printf("\n");

        
    }


}