#include <iostream>

using namespace std;

int main()
{
    unsigned int anyo[21] = {2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010,
                             2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021};
    double espanya[21] = {2.70, 4, 2.6, 3.2, 3.7, 2.7, 4.2, 1.4, 0.8, 3, 2.4, 2.9, 0.3, -1, 0, 1.6, 1.1, 1.2, 0.8, -0.5, 6.5};
    double inglaterra[21] = {1.07, 1.69, 1.25, 1.64, 1.92, 2.97, 2.12, 3.11, 2.83, 3.73, 4.2, 2.71, 2, 0.55, 0.23, 1.6, 2.9, 2.1, 1.3, 0.6, 0.4};
    double usa[21] = {1.6, 2.4, 1.9, 3.30, 3.4, 2.5, 4.1, 0.1, 2.7, 1.5, 3, 1.7, 1.5, 0.8, 0.7, 2.10, 2.10, 1.9, 2.31, 1.4, 7};
    double mediaEspana = 0;
    double mediaInglaterra = 0;
    double mediaUsa = 0;
    double mediaEspanaInt = 0;
    double mediaInglaterraInt = 0;
    double mediaUsaInt = 0;
    int num;
    int maxim;
    cout << "Digame un numero de anyos" << endl;
    scanf("%d", &num);
    int intermedio = num;
    maxim = 21 % num;
    cout << maxim << endl;
    // int menorEspaña=2000;
    // int mayorEspaña=2000;
    mediaEspanaInt = 0;
        mediaInglaterraInt = 0;
        mediaUsaInt = 0;
        mediaEspana = 0;
        mediaInglaterra = 0;
        mediaUsa = 0;
    for (int i = 0; i < 21 - maxim; i += num)
    {
        
        for (int o = 0; o < num; o++)
        {
            mediaEspana = mediaEspana + espanya[i + o];
            mediaInglaterra = mediaInglaterra + inglaterra[i + o];
            mediaUsa = mediaUsa + usa[i + o];
            ///implementar if minimo esapanya[i]=>mediaEspana =>i
            ///implementar if minimo inglaterra[i]=>medinglaterra =>i
            ///implementar if minimo usa[i]=>mediausa>i
        }
        mediaEspana = mediaEspana / num;
        mediaInglaterra = mediaInglaterra / num;
        mediaUsa = mediaUsa / num;
    

        // mediaEspana=(espanya[i+0]+espanya[i+1]+espanya[i+2])/3;
        /*for(int o=0;o<num;o++){

        }
        mediaInglaterra=(inglaterra[i+0]+inglaterra[i+1]+inglaterra[i+2])/3;
        */
        cout << "Media Espanya " << mediaEspana << " Media Inglaterra " << mediaInglaterra << " Media Usa " << mediaUsa << endl;
    }
}