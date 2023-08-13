#include<iostream>

using namespace std;

// Definición de la clase "Vehiculo"
class Vehiculo {
	private:
		// Atributos
		string marca;
		string modelo;
		string patente;
		string color;
		int anioFabricacion;
		int precio;
		float kilometraje;
	public:
		// Constructores
		Vehiculo(string marca, string modelo, string patente, string color, int anioFabricacion, int precio, float kilometraje) {
			this->marca = marca;
			this->modelo = modelo;
			this->patente = patente;
			this->color = color;
			this->anioFabricacion = anioFabricacion;
			this->precio = precio;
			this->kilometraje = kilometraje;
		}
		
		Vehiculo(string marca, string modelo, string patente, string color, int anioFabricacion, int precio) {
			this->marca = marca;
			this->modelo = modelo;
			this->patente = patente;
			this->color = color;
			this->anioFabricacion = anioFabricacion;
			this->precio = precio;
			this->kilometraje = 0;
		}
		
		// Getters
		string getMarca() { return this->marca; }
		string getModelo() {return this->modelo; }
		string getPatente() { return this->patente; }
		string getColor() { return this->color; }
		int getAnioFabricacion() { return this->anioFabricacion; }
		int getPrecio() { return this->precio; }
		float getKilometraje() { return this->kilometraje; }
		
		// Setters
		void setMarca(string marca) { this->marca = marca; }
		void setModelo(string modelo) { this->modelo = modelo; }
		void setPatente(string patente) { this->patente = patente; }
		void setColor(string color) { this->color = color; }
		void setAnioFabricacion(int anioFabricacion) { this->anioFabricacion = anioFabricacion;	}
		void setPrecio(int precio) { this->precio = precio; }
		float setKilometraje(int kilometraje) { this->kilometraje = kilometraje; }
};

int main() {
	
	Vehiculo *vehiculo1 = new Vehiculo("Fiat", "Argo", "AAAA11", "Rojo", 2001, 13000000, 100);
	
	Vehiculo *vehiculo2 = new Vehiculo("Fiat", "Cronos", "BBBB22", "Azul", 1999, 18000000);
		
	cout<<vehiculo1->getMarca()<<" "
		<<vehiculo1->getModelo()<<" "
		<<vehiculo1->getPatente()<<" "
		<<vehiculo1->getColor()<<" "
		<<vehiculo1->getAnioFabricacion()
		<<" "<<vehiculo1->getPrecio()<<endl;
		
	cout<<vehiculo2->getMarca()<<" "
		<<vehiculo2->getModelo()<<" "
		<<vehiculo2->getPatente()<<" "
		<<vehiculo2->getColor()<<" "
		<<vehiculo2->getAnioFabricacion()<<" "
		<<vehiculo2->getPrecio()<<endl;
	
	return 0;
}
