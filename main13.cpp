#include <iostream>

using namespace std;

class CoordenadasGPS{
  private:
  double longitud ;
  double latitud ;
  double altura;
  public:
  double SetLongitud(double _longitud){
    longitud = _longitud;
  }
  double SetLatitud(double _latitud){
    latitud = _latitud;
  }
  double SetAltura(double _altura){
    altura = _altura;
  }
  double GetLatitud(){
    return latitud;
  }
  double GetLongitud(){
    return longitud;
  }
  double GetAltitud(){
    return altura;
  }
  double GetLatitudRadianes(){
    return latitud;
  }
  double GetLongitudRadianes(){
    return longitud;
  }
  double GetAltitudRadianes(){
    return altura;
  }
  double GetLatitudGrados(){
    return latitud;
  }
  double GetLongitudGrados(){
    return longitud;
  }
  double GetAltitudGrados(){
    return altura;
  }


};

int main(){

CoordenadasGPS coor;
coor.SetAltura(5.5);
coor.SetLatitud(20);
coor.SetLongitud(200);

    return 0;
}