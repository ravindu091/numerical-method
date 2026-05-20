#include <stdio.h>
#include <math.h>

double ecu(double x){
    return pow(x,3) + (0.165)*pow(x,2) + 0.0003993;
}
double ecuDir(double x){
    return 2*pow(x,2)-0.33*x ;
}
int main(){

    printf("%f \n", pow(3.0,3.0));


    double x = 0.055;
    int iterations = 3;
    printf("Initial guess is %f \n", x);
    for(int i = 0; i < iterations; i++){

        x = x - ecu(x)/ecuDir(x);
        printf("Value in %d iteration %f \n", i + 1, x);
        
    }


}