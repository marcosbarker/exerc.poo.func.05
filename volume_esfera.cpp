#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double volume_esfera(int r){

    return (4 * M_PI * pow(r,3) ) / 3; // M_PI == Pi
                                       // pow == potencia
    }

int main (void){
    double r;
    const int casasDecimais = 3; // num casas decimais
    
    cout << "Digite o raio da esfera em metros: "; //o valor deve ser em metro, apenas números inteiros
    cin >> r;

    cout << "O volume da esfera de raio " << r << " e igual a " << fixed << setprecision(casasDecimais) << volume_esfera(r) << " m cubico" << endl;

    return 0;
}