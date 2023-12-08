#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void suma() {
    double a, b;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    double resultado = a + b;
    cout << "La suma de " << a << " y " << b << " es: " << resultado << endl;
}

void resta() {
    double a, b;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    double resultado = a - b;
    cout << "La resta de " << a << " y " << b << " es: " << resultado << endl;
}

void multiplicacion() {
    double a, b;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    double resultado = a * b;
    cout << "La multiplicación de " << a << " y " << b << " es: " << resultado << endl;
}

void division() {
    double a, b;
    cout << "Ingrese el numerador: ";
    cin >> a;
    cout << "Ingrese el denominador: ";
    cin >> b;
    if (b != 0) {
        double resultado = a / b;
        cout << "La división de " << a << " entre " << b << " es: " << resultado << endl;
    } else {
        cout << "Error: No se puede dividir por cero." << endl;
    }
}

void random_number() {
    int numero_aleatorio = rand() % 1001;
    cout << "Número aleatorio entre 0 y 1000: " << numero_aleatorio << endl;
}

void suma_lista() {
    cout << "Ingrese una lista de números separados por espacios: ";
    double numero;
    double resultado = 0;
    while (cin >> numero) {
        resultado += numero;
    }
    cout << "La suma de los números es: " << resultado << endl;
}

void raiz_cuadrada() {
    double numero;
    cout << "Ingrese un número para calcular su raíz cuadrada: ";
    cin >> numero;
    if (numero >= 0) {
        double resultado = sqrt(numero);
        cout << "La raíz cuadrada de " << numero << " es: " << resultado << endl;
    } else {
        cout << "Error: No se puede calcular la raíz cuadrada de un número negativo." << endl;
    }
}

void potencia() {
    double base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    double resultado = pow(base, exponente);
    cout << base << " elevado a la " << exponente << " es: " << resultado << endl;
}

void logaritmo() {
    double numero;
    cout << "Ingrese un número para calcular su logaritmo en base 10: ";
    cin >> numero;
    if (numero > 0) {
        double resultado = log10(numero);
        cout << "El logaritmo en base 10 de " << numero << " es: " << resultado << endl;
    } else {
        cout << "Error: El logaritmo en base 10 solo está definido para números positivos." << endl;
    }
}

void seno() {
    double angulo;
    cout << "Ingrese el ángulo en radianes: ";
    cin >> angulo;
    double resultado = sin(angulo);
    cout << "El seno de " << angulo << " radianes es: " << resultado << endl;
}

void coseno() {
    double angulo;
    cout << "Ingrese el ángulo en radianes: ";
    cin >> angulo;
    double resultado = cos(angulo);
    cout << "El coseno de " << angulo << " radianes es: " << resultado << endl;
}

void tangente() {
    double angulo;
    cout << "Ingrese el ángulo en radianes: ";
    cin >> angulo;
    double resultado = tan(angulo);
    cout << "La tangente de " << angulo << " radianes es: " << resultado << endl;
}

void grados_a_radianes() {
    double grados;
    cout << "Ingrese el ángulo en grados: ";
    cin >> grados;
    double radianes = grados * (M_PI / 180);
    cout << grados << " grados equivalen a " << radianes << " radianes" << endl;
}

void radianes_a_grados() {
    double radianes;
    cout << "Ingrese el ángulo en radianes: ";
    cin >> radianes;
    double grados = radianes * (180 / M_PI);
    cout << radianes << " radianes equivalen a " << grados << " grados" << endl;
}

int main() {
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Suma de dos números\n";
        cout << "2. Resta de dos números\n";
        cout << "3. Multiplicación de dos números\n";
        cout << "4. División de dos números\n";
        cout << "5. Creación de números aleatorios de 0 a 1000\n";
        cout << "6. Suma de una lista de números\n";
        cout << "7. Cálculo de la raíz cuadrada de un número\n";
        cout << "8. Cálculo de una potencia\n";
        cout << "9. Cálculo del logaritmo en base 10\n";
        cout << "10. Cálculo del seno de un ángulo en radianes\n";
        cout << "11. Cálculo del coseno de un ángulo en radianes\n";
        cout << "12. Cálculo de la tangente de un ángulo en radianes\n";
        cout << "13. Conversión de grados a radianes\n";
        cout << "14. Conversión de radianes a grados\n";
        cout << "15. Salir del programa\n";

        int opcion;
        cin >> opcion;

        switch (opcion) {
            case 1:
                suma();
                break;
            case 2:
                resta();
                break;
            case 3:
                multiplicacion();
                break;
            case 4:
                division();
                break;
            case 5:
                random_number();
                break;
            case 6:
                suma_lista();
                break;
            case 7:
                raiz_cuadrada();
                break;
            case 8:
                potencia();
                break;
            case 9:
                logaritmo();
                break;
            case 10:
                seno();
                break;
            case 11:
                coseno();
                break;
            case 12:
                tangente();
                break;
            case 13:
                grados_a_radianes();
                break;
            case 14:
                radianes_a_grados();
                break;
            case 15:
                cout << "Saliendo del programa." << endl;
                return 0;
            default:
                cout << "Opción no válida. Por favor, elija una opción válida." << endl;
        }
    }

    return 0;
}