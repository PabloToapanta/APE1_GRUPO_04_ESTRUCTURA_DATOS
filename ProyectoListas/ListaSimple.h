#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include <iostream>
using namespace std;

// Plantilla del Nodo para Lista Simplemente Enlazada
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

// Plantilla de la Lista Simplemente Enlazada
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

    // --- MÉTODOS A IMPLEMENTAR POR EL EQUIPO 1 ---

    void insertarInicio(T valor) {
        // TODO: Programar lógica aquí
    }

    void insertarFinal(T valor) {
        // TODO: Programar lógica aquí (recuerden actualizar 'ultimo')
    }

    bool buscar(T valor) {
        // TODO: Programar lógica aquí
        return false; 
    }

    void eliminar(T valor) {
        // TODO: Programar lógica aquí
    }

    void mostrarLista() {
        // TODO: Programar lógica aquí
    }

    void consultarPrimeroUltimo() {
        
    }
};

#endif
