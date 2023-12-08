#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    string apellido;
    string direccion;
    string telefono;
    int edad;
    string estado_civil;
    int numero_control;
};

int main() {
    vector<Persona> personas;
    int numero_control = 0;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Agregar personas\n";
        cout << "2. Mostrar lista de personas\n";
        cout << "3. Salir\n";

        int opcion;
        cin >> opcion;

        if (opcion == 1) {
            int personas_a_agregar;
            cout << "Ingrese cuántas personas desea agregar: ";
            cin >> personas_a_agregar;

            for (int i = 0; i < personas_a_agregar; i++) {
                Persona persona;
                cout << "Ingrese el nombre: ";
                cin >> persona.nombre;
                cout << "Ingrese el apellido: ";
                cin >> persona.apellido;
                cout << "Ingrese la dirección: ";
                cin >> persona.direccion;
                cout << "Ingrese el número de teléfono: ";
                cin >> persona.telefono;
                cout << "Ingrese la edad: ";
                cin >> persona.edad;
                cout << "Ingrese el estado civil: ";
                cin >> persona.estado_civil;

                persona.numero_control = numero_control;
                numero_control++;

                personas.push_back(persona);

                cout << "Persona agregada con número de control: " << persona.numero_control << endl;
            }
        } else if (opcion == 2) {
            cout << "\nLista de Personas Registradas:\n";
            for (const auto& persona : personas) {
                cout << "Número de Control: " << persona.numero_control << "\n";
                cout << "Nombre: " << persona.nombre << "\n";
                cout << "Apellido: " << persona.apellido << "\n";
                cout << "Dirección: " << persona.direccion << "\n";
                cout << "Número de Teléfono: " << persona.telefono << "\n";
                cout << "Edad: " << persona.edad << "\n";
                cout << "Estado Civil: " << persona.estado_civil << "\n\n";
            }
        } else if (opcion == 3) {
            cout << "Saliendo del programa.\n";
            break;
        } else {
            cout << "Opción no válida. Por favor, elija una opción válida.\n";
        }
    }

    return 0;
}