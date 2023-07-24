#include <iostream>

using namespace std;

int main(){
      int  b[3][3];
        b[0][0]=21;
        b[0][1]=12;
        b[0][2]=31;
        b[1][0]=16;
        b[1][1]=14;
        b[1][2]=25;
        b[2][0]=12;
        b[2][1]=18;
        b[2][2]=20;


        int  x[3][3];
        x[0][0]=0;
        x[0][1]=1;
        x[0][2]=0;
        x[1][0]=1;
        x[1][1]=0;
        x[1][2]=0;
        x[2][0]=0;
        x[2][1]=0;
        x[2][2]=1;
    int total=0;

    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(x[i][j]==1){
                total=total+b[i][j];
            }
        }
    }
    cout<<"El resultado es "<<total<<endl;

}