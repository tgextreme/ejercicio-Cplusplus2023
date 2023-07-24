#include <iostream>

using namespace std;

class TablaRectangularEnteros
{
private:
    static const int NUM_FILS = 3;
    static const int NUM_COLS = 3;
    int SencuenciaEnteros[NUM_COLS];
    int filas_utilizadas;
    int col_utilizadas;

public:
    TablaRectangularEnteros()
    {
    }
};

int main()
{
    TablaRectangularEnteros tabla;
    // tabla.NUM_FILS;
}