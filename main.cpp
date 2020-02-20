#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> enteros;
    string op;

    while (true) {
        cout << "1) Agregar final" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Inicializar" << endl;
        cout << "4) Frente" << endl;
        cout << "5) Ultimo" << endl;
        cout << "6) Ordenar" << endl;
        cout << "7) Insertar" << endl;
        cout << "8) Eliminar" << endl;
        cout << "9) Eliminar último" << endl;
        cout << "0) Salir" << endl;
        getline(cin, op);

        if (op == "1") {
            int x;

            cout << "entero: ";
            cin >> x; cin.ignore();

            enteros.push_back(x);
        }
        else if (op == "2") {
            for (size_t i = 0; i < enteros.size(); i++) {
                cout << enteros[i] << ", ";
            }
            cout << endl;
        }
        else if (op == "3") {
            size_t n;
            int x;

            cout << "tam: ";
            cin >> n;
            cout << "x: ";
            cin >> x; cin.ignore();

            enteros = vector<int>(n, x);
        }
        else if (op == "4") {
            if (enteros.empty()) {
                cout << "vector vacío" << endl;
            }
            else {
                cout << enteros.front();
            }
        }
        else if (op == "5") {
            if (enteros.empty()) {
                cout << "vector vacío" << endl;
            }
            else {
                cout << enteros.back();
            }
        }
        else if (op == "6") {
//            sort(enteros.begin(), enteros.end()); //ascendente
            sort(enteros.begin(), enteros.end(), greater<int>());
        }
        else if (op == "7") {
            size_t p;
            int x;

            cout << "posicion: ";
            cin >> p;
            cout << "x: ";
            cin >> x; cin.ignore();

            if (p >= enteros.size()) {
                cout << "posición no válida" << endl;
            }
            else {
                enteros.insert(enteros.begin()+p, x);
            }
        }
        else if (op == "8") {
            size_t p;

            cout << "posición: ";
            cin >> p; cin.ignore();

            if (p >= enteros.size()) {
                cout << "posición no válida" << endl;
            }
            else {
                enteros.erase(enteros.begin()+p);
            }
        }
        else if (op == "9") {
            if (enteros.empty()) {
                cout << "vector vacío" << endl;
            }
            else {
                enteros.pop_back();
            }
        }
        else if (op == "0") {
            break;
        }
    }

    return 0;
}
