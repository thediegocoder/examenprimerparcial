/*
 * Diego Caviedes
 * 1726325663
 * dcaviedesa@est.ups.edu.ec
 * 24/11/2022
 */
# include <iostream>
# include <cmath>
# include <iomanip>

   using namespace std;
   using std::setw;



   float distance(float, float, float, float);



   int main()
   {

   float x1=1, x2=5, y1=8, y2=6, distancia;

   distancia = sqrt((x1 - y1)*(x1 - y1 ) + (x2 - y2)*(x2 - y2));

   cout << "===EXAMEN 1 PARCIAL POO===" << endl;
   cout << "Autor: Diego Caviedes\n";

   cout <<"\nLa distancia entre los puntos es: " << setw(10) <<distancia << endl;

   return 0;

   }
