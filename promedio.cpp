#include <iostream>
#include <string>

using namespace std;

int main() {
    int numeros_control[5];
    string nombres[5];
    string apellidos[5];
    string carreras[5];
    float calificaciones[5];
    float promedio = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese los datos de la persona: " << (i+1) << endl;
        cout << "Numero de control (entero unico empezando en 1):" << endl;
        cin >> numeros_control[i];
        cout << "Nombre:" << endl;
        cin >> nombres[i];
        cout << "Apellido:" << endl;
        cin >> apellidos[i];
        cout << "Carrera:" << endl;
        cin >> carreras[i];
        cout << "Calificacion (entre 0 y 10):" << endl;
        cin >> calificaciones[i];
        promedio += calificaciones[i];
    }
    
    //Calcular el promedio de las calificaciones
    promedio /= 5;

    //Encontrar calificacion mas alta y su indice
    int i_max = 0;
    float max = 0;
    for (int i = 0; i < 5; i++) {
        if (calificaciones[i] > max)
        {
            max = calificaciones[i];
            i_max = i;
        }
    }

    //Encontrar calificacion mas baja y su indice
    int i_min = 0;
    float min = max;
    for (int i = 0; i < 5; i++) {
        if (calificaciones[i] < min)
        {
            min = calificaciones[i];
            i_min = i;
        }
    }

    //contar la cantidad de personas en cada carrera
    int carreras_contador[5] = {0,0,0,0,0};
    int index_new = 0;
    string carreras_nombre[5];
    for (int i = 0; i < 5; i++)
    {
        bool repetida = false;
        for (int j = 0; j < 5; j++)
        {
            if (carreras[i] == carreras_nombre[j])
            {
                repetida = true;
                break;
            }
        }
        for (int j = 0; j < 5; j++)
        {
            if (carreras[i] == carreras[j] && !repetida)
            {
                carreras_contador[index_new]++;
                carreras_nombre[index_new] = carreras[i];
            }
        }
        if ((carreras_nombre[index_new].length()) > 0) {
            index_new++;
        }
    }
    
    //imprimir estadisticas
    cout << "Estadisticas:" << endl;
    cout << "el promedio de calificacion es: " << promedio << endl;
    cout << "La calificacion mas alta fue: " << calificaciones[i_max] << " de " << nombres[i_max] << " " << apellidos[i_max] << endl;
    cout << "La calificacion mas baja fue: " << calificaciones[i_min] << " de " << nombres[i_min] << " " << apellidos[i_min] << endl;
    cout << "cantidad de personas en cada carrera: " << endl;
    for (int i = 0; i < 5; i++)
    {
        if (carreras_nombre[i] == "") {
            break;
        }
        cout << carreras_nombre[i] << ": " << carreras_contador[i] << endl;
    }
    
    return 0;
}