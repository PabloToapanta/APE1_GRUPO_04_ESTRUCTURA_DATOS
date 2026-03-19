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
    	
    	//Si primero es nulo, entonces la lista esta vacia
    	if(primero==0){
    		cout <<"La lista esta vacia";
    		return;
		}else if(primero->info==valor){//Si el valor es el primero
			if(primero->sig==0){//solo hay un nodo
			delete primero;
			primero=0; //liberamos memoria
			ultimo=0;
			}else{//Hay mas nodos
			Nodo<T>* curr2 = primero ->sig; //Nodo auxiliar que apunte al elemento siguiente
			primero->sig->ant=0;//reasignamos el anterior del nodo siguiente a cero
			delete primero;//eliminamos el nodo primero
			primero=curr2;//reasignamos el puntero primero
			}
		}else if(ultimo->info==valor){//Si el valor es el ultimo
			Nodo<T> *curr3 = ultimo->ant;
        	ultimo->ant->sig=0;
        	delete ultimo;
        	ultimo=curr3;
    	}else{//El valor este en medio de la lista

    		Nodo<T>* curr = primero;
    		while(curr!= 0 ){
    			if(curr->info == valor){
    				Nodo<T>* prev = curr->ant;
    				Nodo<T>* next = curr->sig;
    				
    				prev->sig=next;
    				next->ant=prev;
    				
    				curr->sig=0;
    				curr->ant=0;
    				
    				delete curr;
    				return;
				}
				curr=curr->sig;
			}

				cout<<"El valor no existe en la lista"<<endl;
				
			
		}
	}

    void mostrarInicioAFin() {
        // Verificamos si la lista está vacía
        if (primero == 0) {
            cout << "La lista esta vacia\n";
            return;
        }

        Nodo<T>* curr = primero;
        cout << "Inicio -> Fin: ";
        
        // Recorremos usando 'sig'
        while (curr != 0) {
            cout << curr->info;
            if (curr->sig != 0) {
                cout << " <-> "; // Separador visual para listas dobles
            }
            curr = curr->sig;
        }
        cout << endl;
    }

    void mostrarFinAInicio() {
        // Verificamos si la lista está vacía
        if (ultimo == 0) {
            cout << "La lista esta vacia\n";
            return;
        }

        Nodo<T>* curr = ultimo;
        cout << "Fin -> Inicio: ";
        
        // Recorremos usando 'ant'
        while (curr != 0) {
            cout << curr->info;
            if (curr->ant != 0) {
                cout << " <-> "; // Separador visual para listas dobles
            }
            curr = curr->ant;
        }
        cout << endl;
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
