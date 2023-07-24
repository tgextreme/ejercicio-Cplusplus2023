#include <iostream>

using namespace std;

int main()
{
    double distancia1, distancia2, distancia3, distanciaTotal;
    double velocidad1, velocidad2, velocidad3, velocidadMedia;
    double resultado;
    int horas, minutos, minutosCrudo, segundosCrudo, segundos;
    distancia1 = 5.3;
    distancia2 = 8.3;
    distancia3 = 6.4;

    velocidad1 = 80;
    velocidad2 = 100;
    velocidad3 = 80;
    printf("%lf %lf %lf \n", distancia1, distancia2, distancia3);
    velocidadMedia = (velocidad1 + velocidad2 + velocidad3) / 3;
    printf("%lf \n", velocidadMedia);
    distanciaTotal = distancia1 + distancia2 + distancia3;
    printf("%lf \n", distanciaTotal);
    resultado = distanciaTotal / velocidadMedia;
    printf("%lf \n", resultado);
    horas = (int)resultado;
    minutos = ((resultado)*1000);
    // segundos=(int)((resultado)*1000)%100;
    int m, s;
    m = 0;
    s = 0;
    int recorrido = 0;
    for (recorrido = 0; recorrido < minutos;)
    {
        m++;
        for (s = 0; s < 60; s++)
        {
            recorrido++;
        }
        s = 0;
    }

    /*
        double horasConv=(double)horas;
        minutosCrudo=resultado-horasConv;
        printf("%lf minutos crudo 0x1 \n", minutosCrudo);
        minutos=((float)minutosCrudo)*60.0;

        printf("%lf %lf \n", minutosCrudo, minutos);
    */

    printf("%i horas %i %i minutos %i segundos crudo ", horas, minutos, m, s);

    return 0;
}