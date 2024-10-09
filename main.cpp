#include <iostream>

struct Persona {
    float altura;
    float peso;
    float nombre[10];
};

struct Estudiante{
    float promedio;
    int semestre;
    int faltas;
    char carr[5];
    int repeticiones;
    Persona datos;
};

int main() {
    int a,b;
    a == b ? std::cout<<"Si" : std::cout<<"No";
    return 0;
}
