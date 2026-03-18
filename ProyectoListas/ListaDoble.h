#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include <iostream>
using namespace std;

// Plantilla del Nodo para Lista Doblemente Enlazada
template <typename T>
class NodoDoble {
public:
    T info;
    NodoDoble<T>* sig;
    NodoDoble<T>* ant; // Puntero extra para la lista doble

    NodoDoble(T valor) {
        info = valor;
        sig = 0;
        ant = 0;
    }
};

// Plantilla de la Lista Doblemente Enlazada
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

    // --- MÉTODOS A IMPLEMENTAR POR EL EQUIPO 2 ---

    void insertarInicio(T valor) {
        // TODO: Programar lógica aquí
    }

    void insertarFinal(T valor) {
        // TODO: Programar lógica aquí
    }

    bool buscar(T valor) {
        // TODO: Programar lógica aquí
        return false;
    }

    void eliminar(T valor) {
        // TODO: Programar lógica aquí
    }

    void mostrarInicioAFin() {
        // TODO: Programar lógica aquí usando el puntero 'sig'
    }

    void mostrarFinAInicio() {
        // TODO: Programar lógica aquí usando el puntero 'ant' empezando desde 'ultimo'
    }

    void consultarPrimeroUltimo() {
        
    }
};

#endif
