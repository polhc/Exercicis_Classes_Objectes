#include <iostream>
#include <string>
using namespace std;

/*using namespace std;
class Persona {
	private:
		string nom;
		int edad;
public:
	Persona(string n, int e) {
		nom = n;
		edad = e;
	}
	void mostrar_dades() {
		cout << "el nom es: " << nom << endl;
		cout << "l'edad es: " << edad << endl;
	}
	bool major_edad() {
		if (edad >= 18) {
			return true;
		}
		return false;
	}
};

int ej_1() {
	string nom;
	int edad;
	cout << "introdueix el nom" << endl;
	cin >> nom;
	cout << "introdueix l'edad" << endl;
	cin >> edad;
	Persona person(nom, edad);
	person.mostrar_dades();
	if (person.major_edad() == true) {
		cout << "major edad" << endl;
	}
	else {
		cout << "menor ";
	}
}*/






/*

class Rectangulo {
private:
	double altura;
	double amplitud;
public:
	Rectangulo(double al, double am) {
		altura = al;
		amplitud = am;
	}
	void mostrar(){
		cout << "la altura es: " << altura << endl;
		cout << "la amplitud es: " << amplitud << endl;
	}
	double calculo_area() {
		return altura * amplitud;
	}

	double calculo_perimetro() {
		return (altura * 2) + (amplitud * 2);
	}
};

int main() {
	double altura;
	double amplitud;
	cout << "introduce altura: " << endl;
	cin >> altura;
	cout << "introduce amplitud: " << endl;
	cin >> amplitud;
	Rectangulo figura(altura, amplitud);
	figura.mostrar();
	cout << "el area es: " << figura.calculo_area() << endl;
	cout << "el area es: " << figura.calculo_perimetro() << endl;
} */



/*using namespace std;
class Llum {
private:
	bool estat;
public:
	Llum() {
		estat = false;
	}
	void encendre() {
		estat=true;
	}

	void apagar() {
		estat = false;
	}

	bool consultar() {
		return estat;
	}
};

int main() {
	Llum bombilla;
	bombilla.encendre();
	if (bombilla.consultar() == true) {
		cout << "esta encessa" << endl;
	}
	else {
		cout << "esta apagada" << endl;
	}

	bombilla.apagar();
	if (bombilla.consultar() == true) {
		cout << "esta encessa" << endl;
	}
	else {
		cout << "esta apagada" << endl;
	}
} */





/*using namespace std;

class Termometre {
private:
	double temperatura;
public:
	Termometre(double t) {
		temperatura = t;
	}
	void consultar() {
		cout << "la temperatura es: " << temperatura << endl;
	}

	bool modificar(double num) {
		if (num<61 && num>-51) {
			temperatura = num;
			cout << "la nova temperatura es: " << num << endl;
			return true;
		}
		else {
			cout << "Error, elige un numero mayor que -50 y menor que 60" << endl;
		}
	}

};

int main() {
	int condicion = 0;
	double num;
	Termometre termostato(0);
	while (condicion == 0) {
		cout << "introduzca su temperatura nueva: ";
		cin >> num;
		termostato.modificar(num);
		termostato.consultar();

	}
} */




/*class Jugador {
private:
	string nom;
	double punts;
	double vides;
public:
	Jugador(string n, double p, double v) {
		nom = n;
		punts = p;
		vides = v;
	}
	void consultar_punts() {
		cout << "Tens: " << punts << " punts" << endl;
	}
	void consultar_vides() {
		cout << "Tens: " << vides << " vides" << endl;
	}
	double pedre_vides() {
		vides--;
		return vides;
	}
	double sumar_punts(double puntuació) {
		punts = punts + puntuació;
		return punts;
	}
	bool consultar_estat() {
		if (vides > 0) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main() {
	string nombre;
	double punts=0;
	double vida=10;
	double condicio = 0;
	double condicio_1 = 0;
	cout << "nom:";
	cin >> nombre;
	double punts_nous;
	Jugador player(nombre, punts, vida);
	while (condicio == 0) {
		player.consultar_punts();
		player.consultar_vides();
		cout << "introdueix els punts guanyats: ";
		cin >> punts_nous;
		cout << "Els punts totals son: " << player.sumar_punts(punts_nous) << endl;
		cout << "El total de vides son: " << player.pedre_vides() << endl;
		if (player.consultar_estat() == true) {
			cout << "esta viu" << endl;
		}
		else {
			cout << "esta mort" << endl;
		}
	}
} */



/*using namespace std;

class Producte {
private:
	string nom;
	double preu;
	double Estoc;
public:
	Producte(string n, double p, double e) {
		nom = n;
		preu = p;
		Estoc = e;
	}
	void consultar_preu(){
		cout << "El preu es: " << preu << endl;
	}
	double modificar_preu(double nou_preu) {
		preu = nou_preu;
		return preu;
	}
	double afegir_estoc(double nou_Estoc) {
		Estoc = Estoc + nou_Estoc;
		return Estoc;
	}
	bool Vendre_unitat() {
		if (Estoc > 0) {
			Estoc--;
			return true;
		}
		else {
			cout<<"no hi ha suficient Estoc"<<endl;
			return false;
		}
	}
};

int main() {
	string nombre;
	double preu=0;
	double estoc = 0;
	double nou_preu;
	double nou_estoc;
	double condicio = 0;
	cout << "El nom del producte es: ";
	cin >> nombre;
	cout << "El preu del producte es: ";
	cin >> preu;
	cout << "L'estoc inicial del producte es: ";
	cin >> estoc;
	Producte product(nombre, preu, estoc);

	while (condicio == 0) {
		product.consultar_preu();
		cout << "El nou preu es: ";
		cin >> nou_preu;
		cout << "El nou preu es: " << product.modificar_preu(nou_preu) << endl;
		cout << "El nou estoc es: ";
		cin >> nou_estoc;
		cout << "El nou estoc es: " << product.afegir_estoc(nou_estoc) << endl;
		if (product.Vendre_unitat() == true) {
			cout << "l'Estoc ha baixat una unitat" << endl;
		}
	}
} */





class Reserva {
private:
	string nom_client;
	double num_nits;
	double preu_nit;
	bool estat_reserva;
public:
	Reserva(string nom, double num, double preu) {
		nom_client = nom;
		num_nits = num;
		preu_nit = preu;
		estat_reserva = true;
	}
	void consulta_nom() {
		cout << "El nom del client es: " << nom_client << endl;
	}
	double canviar_num_nits(double num_nits_nou) {
		if (estat_reserva == true) {
			num_nits = num_nits_nou;
			return num_nits;
		}
		else {
			cout << "Error, reserva cancel·lada";
		}
	}
	double calcular_preu(double preu_total) {
		preu_total = preu_total + (num_nits * preu_nit);
		return preu_total;

	}
	bool cancel·lar_reserva() {
		if (estat_reserva == true) {
			estat_reserva = false;
			return false;
		}
		else {
			estat_reserva = true;
			return true;
		}
	}
	void consultar_estat() {
		if (estat_reserva == false) {
			cout << "la reserva esta cancel·lada" << endl;
		}
		else {
			cout << "la reserva esta acceptada" << endl;
		}
	}
};

int main() {
	string nom;
	double num;
	double preus;
	bool estat;
	double nou_num;
	double preu_total = 0;
	double condicio = 0;
	cout << "Nom client: ";
	cin >> nom;
	cout << "numero de nits: ";
	cin >> num;
	cout << "Preu per nit: ";
	cin >> preus;
	Reserva hotel(nom, num, preus);

	while (condicio == 0) {
		hotel.consulta_nom();
		cout << "Nou numero de nits: ";
		cin >> nou_num;
		cout << "El nou numero de nits es: " << hotel.canviar_num_nits(nou_num) << endl;
		cout << "El preu total es: " << hotel.calcular_preu(preu_total) << endl;
		if (hotel.cancel·lar_reserva() == false) {
			cout << "Canvi fet";
		}
		else {
			cout << "Canvi fet";
		}
		hotel.consultar_estat();
	}
}

