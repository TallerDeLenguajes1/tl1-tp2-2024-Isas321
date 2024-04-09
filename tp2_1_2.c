#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(){
    int i;
    double vt[N];
    double *p;
    //p=&vt[0];
    p=vt; //Guardo la direccion del primer elemento del vector, forma corta
    for ( i = 0; i < N; i++)
    {
        *p=1+rand()%100;
        printf("%f ", *p++); //muestro el valor y despues me desplazo a la derecha
    }
    return 0;
}