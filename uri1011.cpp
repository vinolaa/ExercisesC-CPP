#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(){
    double raio, vol;
    scanf("%lf", &raio);
    vol = (PI * (4) * (pow(raio,3)))/3;
    printf("VOLUME = %.3lf\n", vol);
    return 0;
}