#include<iostream>

using namespace std;

// Declaraci�n de la clase
class Punto {
	private:
		// Atributos Privados
		int x;
		int y;
		
	public:
		// Constructor
		Punto(int x, int y) {
			this->x = x;
			this->y = y;
		}
		
		// M�todos Getters
		int getX() { return this->x; }
		
		int getY() { return this->y; }
		
		// M�todos Setters
		void setX(int x) { this->x = x;	}
		
		void setY(int y) { this->y = y; }
		
		// Otros M�todos
		void mostrarPunto() {
			cout<<"("<<this->x<<","<<this->y<<")"<<endl;;
		}
};

int main() {
	
	// Declaraci�n e Inicializaci�n de un objeto Punto
	Punto *punto1 = new Punto(1,1);
	
	// Llamada al metodo mostrarPunto
	punto1->mostrarPunto();
	
	// Se cambia el atributo X por el valor 5
	punto1->setX(5);
	
	// Llamada al metodo mostrarPunto
	punto1->mostrarPunto();
	
	return 0;
}
