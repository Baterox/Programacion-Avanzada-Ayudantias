#include<iostream>

using namespace std;

class Pelicula {
	private:
		// Atributos
		string nombre;
		string director;
		string genero;
		int duracion;
	public:
		// Constructor
		Pelicula(string nombre, string director, string genero, int duracion) {
			this->nombre = nombre;
			this->director = director;
			this->genero = genero;
			this->duracion = duracion;
		}
		
		// Getters
		string getNombre() { return this->nombre; }
		string getDirector() { return this->director; }
		string getGenero() { return this->genero; }
		int getDuracion() { return this->duracion; }
		
		// Setters
		void setNombre( string nombre ) { this->nombre = nombre; }
		void setDirector( string director ) { this->director = director; }
		void setGenero( string genero ) { this->genero = genero; }
		void setDuracion( int duracion ) { this->duracion = duracion; }
		
		// Método informacionPelicula	
		void informacionPelicula() {
			cout<<"Nombre: "<<this->nombre<<endl;
			cout<<"Director: "<<this->director<<endl;
			cout<<"Genero: "<<this->genero<<endl;
			cout<<"Duracion: "<<this->duracion<<endl<<endl;
		}
};

class Nesflis {
	private:
		// Atributos
		Pelicula *peliculas[5];
	public:
		// Contructor
		Nesflis() {
			for(int i = 0; i < 5; i++) {
				this->peliculas[i] = NULL;
			}
		}
		
		// Método que contea y retorna las peliculas en cartelera
		int contarPeliculas() {
			int conteo = 0;
			
			for(int i = 0; i < 5; i++) {
				if(this->peliculas[i] != NULL) {
					conteo++;
				}
			}
			
			return conteo;
		}
		
		// Método que agrega una pelicula a la cartelera
		void agregarPelicula(Pelicula *nuevaPelicula) {
			if(this->contarPeliculas() < 5) {
				for(int i = 0; i < 5; i++) {
					if(this->peliculas[i] == NULL) {
						this->peliculas[i] = nuevaPelicula;
						break;
					}
				}
			}
			else {
				cout<<"La pelicula no pudo ser subida"<<endl;
			}
		}
		
		// Método que borra una pelicula de cartelera
		void eliminarPelicula(int index) {
			if(index >= 0 && index < 5) {
				this->peliculas[index] = NULL;
			}
		}
		
		// Método que retorna una pelicula dentro de cartelera
		Pelicula *obtenerPelicula(int index) {
			if(index >= 0 && index < 5) {
				return this->peliculas[index];
			}
		}
		
		// Método que muestra todas las peliculas en la cartelera
		void mostrarPeliculas() {
			for(int i = 0; i < 5; i++) {
				if(this->peliculas[i] != NULL) {
					this->peliculas[i]->informacionPelicula();
				}
			}
		}
		
		// Método que retorna true en caso de que la cartelera esté llena. En caso contrario retorna false
		bool carteleraLlena() {
			if(this->contarPeliculas() == 5) {
				return true;
			}
			else {
				return false;
			}
		}
};

int main() {
	
	Nesflis *nesflis = new Nesflis();
	Pelicula *p1 = new Pelicula("Django", "Tarantino", "Drama", 165);
	Pelicula *p2 = new Pelicula("Your Name", "Makoto Shinkai", "Anime", 106);
	Pelicula *p3 = new Pelicula("Me Before You", "Thea Sharrock", "Romance", 110);
	Pelicula *p4 = new Pelicula("Jojo Rabbit", "Taika Waititi", "Satira", 108);
	Pelicula *p5 = new Pelicula("This is the end", "Seth Rogen", "Comedia", 107);
	Pelicula *p6 = new Pelicula("Karate Kid", "John G. Avildsen", "Accion", 126);
	
	nesflis->agregarPelicula( p1 );
	nesflis->agregarPelicula( p2 );
	nesflis->agregarPelicula( p3 );
	nesflis->agregarPelicula( p4 );
	nesflis->agregarPelicula( p5 );
	
	nesflis->eliminarPelicula(2);
	
	nesflis->agregarPelicula( p6 );

	cout<<nesflis->contarPeliculas();
	
	nesflis->mostrarPeliculas();
	
	return 0;
}
