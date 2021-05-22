#include <iostream>

using namespace std;

int main()
{
    int cont = 0, cont2 = 1, test = 0, cont3 = 0;
    float nota, notas = 0;
    while (cont2 == 1){
        while (cont < 2){
            cin >> nota;
            if (nota > 10){
                cout << "nota invalida" <<endl;
            }else{
                if (nota < 0){
                    cout << "nota invalida" <<endl;
                }else{
                    notas = notas + nota;
                    cont++;
                }
            }
        }
        notas = notas / 2;
        cout.precision(2);
        cout << fixed << "media = " << notas <<endl;
        cont3 = 0;
        while (cont3 == 0){
            cout << "novo calculo (1-sim 2-nao)" <<endl;
            cin >> test;
            if (test == 1 || test == 2){
                cont = 0;
                cont3 = 1;
                notas = 0;
                cont2 = test;
            }else{
                cont3 = 0;
            }
        }
    }
    return 0;
}
