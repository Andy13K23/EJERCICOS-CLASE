// Andy Aquino 0909-22-1669
#include <iostream>
using namespace std;

int main() {
//---------------------------EJERCICIO 1--------------------------------------
    /*
    cout << "Te Mostrare el factorial de un Numero" << endl;
    cout << "INGRESA UN NUMERO" << endl;
    int number;
    int factorial = 1;
    cin >> number;

    for (int i = 1; i <=number; i++) {
        factorial = factorial * i;

        cout << "El Factorial de: " << number << " es: " << factorial << endl;
        
    }
    return 0;
}
 */

   // -------------------------------EJERCICO 2------------------------------------

   /*
    cout << "Te Mostrare los Primeros 10 numeros de la serie FIBONACCI" << endl;

        int num = 11;
        int numx1 = 0;
        int numx2 = 1;
        int numx3 = 1;

        cout<<"LOS NUMEROS SON: ";
        for (int i = 1; i < num; i++)
        {
            numx3 = numx1 + numx2;
            cout<<numx3<<" ";
            numx1 = numx2;
            numx2 = numx3;
        }
        return 0;
    }

*/
//-------------------------------EJERCICO 3---------------------------------------------
/*
        int num, i;
        bool es_primo = true;
        cout << num << "TE DIRE SI UN NUMERO ES PRIMO O NO" << endl;
        cout << "Ingrese un numero entero positivo: ";
        cin >> num;

        if (num == 0 ) {
            es_primo = false;
        }
        else {
            for (i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    es_primo = false;
                    break;
                }
            }
        }

        if (es_primo) {
            cout << num << " es un numero primo" << endl;
        }
        else {
            cout << num << " no es un numero primo" << endl;
        }

        return 0;
    }
    */

//-------------------------------EJERCICO 4-------------------------------------
/*
    cout << "Te dire si un numero es par o no." << endl;
    int numero;
    cout << "Ingrese un numero: " ;
    cin >> numero;
    if (numero % 2 == 0) {
        cout << "El numero ingresado es par." << endl;
    } else {
        cout << "El numero ingresado es impar." << endl;
    }
    return 0;
}
 */
//-------------------------------EJERCICIO 5-------------------------------------

    cout << "Generador de Tablas de Multiplicar" << endl;
    cout << "INGRESE EL NUMERO DE LA TABLA QUE DESEA:"<< endl;
    int Tabla;
    cin>>Tabla;


    for (int a = 1;  a <= 10; a++) {
    {
    cout << Tabla << " * " << a << " = " << Tabla * a << endl;
    }
    }
    return 0;
}

