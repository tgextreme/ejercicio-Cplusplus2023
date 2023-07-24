#include <iostream>
#include <string>
#include <array> // for array, at()
#include <tuple>

using namespace std;

class Piso
{
private:
    int planta;
    char letra;
    int consumo;
    double mesConsumo[12];

public:
    Piso()
    {
    }
    Piso(int p, char l, int c)
    {
        planta = p;
        letra = l;
        consumo = c;
    }

    void setConsumo(int consu)
    {
        consumo = consu;
    }
    double getConsumo(){
        return consumo;
    }
    char getLetra(){
        return letra;
    }

    void dimeLosConsumos()
    {
        for (int i = 0; i < 12 + 2; i++)
        {
            if (i == 0)
            {
                cin >> planta;
            }
            else if (i == 1)
            {
                cin >> letra;
            }
            else
            {
                cin >> mesConsumo[i - 2];
            }
        }
    }
    double consumoMedio(int inicio, int fin)
    {
        double total = 0;
        for (int i = inicio; i < fin; i++)
        {
            total = total + mesConsumo[i];
        }

        return (total / (fin - inicio));
    }
    int mesesSuperado(int inicio, int fin)
    {
        double total = 0;
        int meses = 0;
        double medio = consumoMedio(inicio, fin);
        for (int i = inicio; i < fin; i++)
        {
            if (mesConsumo[i] > medio)
            {
                meses++;
            }
        }
        return meses;
    }
    double totalMeses(){
        double total=0;
        for (int i = 0; i<12;i++){
            total=total+mesConsumo[i];
        }
        return total;
    }
};

class Bloque
{
public:
    array<Piso, 12> bloque;
    void ponerDatos()
    {
        double media;
        int p;
        for (int i = 0; i < 12; i++)
        {
            bloque.at(i).dimeLosConsumos();
            p = bloque.at(i).mesesSuperado(0, 12);
            media = bloque.at(i).consumoMedio(0, 12);
            cout << media << endl;
            cout << p << endl;
        }
    }
    double consumoMedioBloque(char nPiso)
    {
        double total=0;
        int usuario=0;
        for (int i = 0; i < 12; i++)
        {
            if(bloque.at(i).getLetra()==nPiso){
                ///calcular total
                total=total+bloque.at(i).totalMeses();
                usuario++;
            }
        }
        total=(total/usuario)/12;
        return total;

    }
};

int main()
{

    int nPisos;
    // cout << "dime el numero de pisos" << endl;
    // cin >> nPisos;
    array<Piso, 6> est;

    Piso piso(3, 'B', 500);
    Bloque bloque;
    bloque.ponerDatos();
    cout<<"Numero medio de contador del bloque B "<<bloque.consumoMedioBloque('B')<<endl;
    
    
}