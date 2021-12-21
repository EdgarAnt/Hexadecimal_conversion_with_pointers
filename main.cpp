#include <iostream>

using namespace std;

void *hexadecimal(int*);

int *ptr=NULL,decimal, residuo, resultado, i = 0;
int digitoex[20];

int main()
{
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"|                     Convertidor numeros Hexadecimales                        |"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout << "Introduce el numero decimal a convertir: ";
    cin >> decimal;
    ptr=&decimal;
    hexadecimal(ptr);

    return 0;
}

void *hexadecimal(int *decimal)
{
     do
    {
        residuo = *decimal % 16;
        resultado = *decimal / 16;
        digitoex[i] = residuo;
        *decimal = resultado;
        i++;
    } while (resultado > 15);

    digitoex[i] = resultado;

    cout <<endl<< "El equivalente en hexadecimal es: ";


    for (int j = i; j >= 0; j--)
    {
        if (digitoex[j] == 10)
        {
            cout << "A";
        }
        else if (digitoex[j] == 11)
        {
            cout << "B";
        }
        else if (digitoex[j] == 12)
        {
            cout << "C";
        }
        else if (digitoex[j] == 13)
        {
            cout << "D";
        }
        else if (digitoex[j] == 14)
        {
            cout << "E";
        }
        else if (digitoex[j] == 15)
        {
            cout << "F";
        }
        else
        {
            cout << digitoex[j];
        }
    }
    cout << endl<<endl<<endl;
    system("PAUSE");
}



