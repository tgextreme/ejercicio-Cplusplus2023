#include <iostream>

using namespace std;


/*
void secuencial(int hasta, int desde)
{
     int limite=100;
     int total=0;
     int intermedio=0;
    for (int i =0;i<limite;i++){
        while(total<hasta-1){
            for(int o=0;o<100;o++){
                intermedio=intermedio+o;
                if(intermedio<total){
                    cout>
                }
            }

        }


    }
    /*int intermedio = 0;

    while (intermedio == hasta - 1)
    {
        for (int i = desde; i < hasta; i++)
        {

        }
    }
}*/

int main()
{

    int tope=18;
    int inicio=1;
    int total=0;
    int cantidad=0;
       for(int i=inicio;i<tope;i++){
            /*for(int o=inicio;o<tope;o++){
                total=total+o+i;
                //
                //cout<<i <<" + "<<o<<" = "<<total<<endl;
                if(total==tope){
                    cout<<i <<" + "<<o<<" = "<<total<<endl;
                    cantidad++;
                }
                total=0;
            }*/
            total=total+i;
            cout<<i<<" total "<<total<<endl;
            if(total==tope){
                cout<<"premio"<<endl;
            }
            if(total>tope){
                total=i;
            }
        }
}