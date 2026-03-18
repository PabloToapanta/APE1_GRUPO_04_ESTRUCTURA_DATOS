#include <iostream>
#include <string>

using namespace std;

// =====================================================================
//                 ZONA DEL EQUIPO 1: LISTA SIMPLE
// =====================================================================

// 1. Plantilla del Nodo Simple
template <typename T>
class Nodo {
public:
    T info;
    Nodo<T>* siguiente;

    Nodo(T valor) {
        info = valor;
        siguiente = 0;
    }
};

// 2. Plantilla de la Lista Simple
template <typename T>
class ListaSimple {
private:
    Nodo<T>* primero;
    Nodo<T>* ultimo;

public:
    ListaSimple() {
        primero = 0;
        ultimo = 0;
    }

    void insertarInicio(T valor) {
        // TODO Equipo 1: Lógica aquí
    }

    void insertarFinal(T valor) {
        // TODO Equipo 1: Lógica aquí (Actualizar puntero 'ultimo')
    }

    bool buscar(T valor) {
        // TODO Equipo 1: Lógica aquí
        return false;
    }

    void eliminar(T valor) {
        // TODO Equipo 1: Lógica aquí
    }

    void mostrarLista() {
        // TODO Equipo 1: Lógica aquí
    }

    void consultarPrimeroUltimo() {
        if (primero != 0 && ultimo != 0) {
            cout << "Primero: " << primero->info << " | Ultimo: " << ultimo->info << endl;
        } else {
            cout << "La lista esta vacia." << endl;
        }
    }
};


// =====================================================================
//                 ZONA DEL EQUIPO 2: LISTA DOBLE
// =====================================================================

// 3. Plantilla del Nodo Doble
template <typename T>
class NodoDoble {
public:
    T info;
    NodoDoble<T>* sig;
    NodoDoble<T>* ant;

    NodoDoble(T valor) {
        info = valor;
        sig = 0;
        ant = 0;
    }
};

// 4. Plantilla de la Lista Doble
template <typename T>
class ListaDoble {
private:
    NodoDoble<T>* primero;
    NodoDoble<T>* ultimo;

public:
    ListaDoble() {
        primero = 0;
        ultimo = 0;
    }

    void insertarInicio(T valor) {
        // TODO Equipo 2: Lógica aquí
    }

    void insertarFinal(T valor) {
        // TODO Equipo 2: Lógica aquí
    }

    bool buscar(T valor) {
        // TODO Equipo 2: Lógica aquí
        return false;
    }

    void eliminar(T valor) {
        // TODO Equipo 2: Lógica aquí
    }

    void mostrarInicioAFin() {
        // TODO Equipo 2: Lógica aquí usando 'sig'
    }

    void mostrarFinAInicio() {
        // TODO Equipo 2: Lógica aquí usando 'ant' empezando desde 'ultimo'
    }

    void consultarPrimeroUltimo() {
        if (primero != 0 && ultimo != 0) {
            cout << "Primero: " << primero->info << " | Ultimo: " << ultimo->info << endl;
        } else {
            cout << "La lista esta vacia." << endl;
        }
    }
};


// =====================================================================
//                 ZONA DE PRUEBAS (MAIN)
// =====================================================================

int main() {
    cout << "=== GESTOR DE PLAYLISTS MUSICALES ===" << endl;



    cout << "\nEjecucion finalizada correctamente." << endl;
    return 0;
}
