#include <stdio.h>
#include <stdlib.h>

char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

struct compu{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
};

void mostrar_computadora(struct compu computadora){

    printf("\nVelocidad: %d",computadora.velocidad);
    printf("\nAnio: %d", computadora.anio);    
    printf("\nCantidad de nucleos: %d", computadora.cantidad);
    printf("\nTipo de CPU: %s", computadora.tipo_cpu);
}

struct compu carga_computadora(){
    struct compu computadora;

    computadora.velocidad=1+rand()%3;
    computadora.anio=2015+rand()%9;
    computadora.cantidad=1+rand()%8;
    computadora.tipo_cpu=tipos[1+rand()%6];



    return computadora;
}

int main(){
    struct compu computadoras[5];
    
    for (int i = 0; i <5; i++)
    {
        computadoras[i]=carga_computadora();
    }

    for(int i=0; i<5; i++){
        printf("\n\nCaracteristicas de PC [%d]", i+1);
        mostrar_computadora(computadoras[i]);
    } 
    
    return 0;
}