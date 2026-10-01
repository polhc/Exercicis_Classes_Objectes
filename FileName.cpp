#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
	string nom;
	int edad;
public:
	Persona(string n, int e) {
		nom = n;
		edad = e;
	}

	void Mostrar_Dades() {
		cout << "El nom es: " << nom << endl;
		cout << "L'edat es: " << edad << endl;
	}

	bool Major_Edat() {
		if (edad >= 18) {
			return true;
		}
		return false;
	}
};

int ej_1() {
	string Nom;
	int Edad;

	cout << "introdueix el nom:";
	cin >> Nom;

	cout << "introdueix l'edad:";
	cin >> Edad;

	Persona person (Nom, Edad);

	cout << "Dades de la persona:" << endl;
	person.Mostrar_Dades();

	if (person.Major_Edat()) {
		cout << "Es major d'edad" << endl;
	}
	else {
		cout<<"Es menor d'edad"<<endl;
	}

}



class Rectangle {
private:
	double amplada;
	double alçada;
public:
	Rectangle(double am, double al) {
		amplada = am;
		alçada = al;
	}

	void Mostrar_parametres() {
		cout << "l'alçada es " << alçada << endl;
		cout << "l'amplada es " << amplada << endl;
	}

	double Calcul_area() {
		return amplada * alçada;
	}

	double Calcul_perimetre() {
		return (amplada * 2) + (alçada * 2);
	}
};

int main() {
	double Amplada;
	double Alçada;

	cout << "introdueix l'amplada:";
	cin >> Amplada;

	cout << "introdueix l'alçada:";
	cin >> Alçada;

	Rectangle forma (Amplada, Alçada);
	cout << "les dades son: "<< endl;
	forma.Mostrar_parametres();

	cout << "l'Area es: "<< forma.Calcul_area() << endl;
	cout << "El perimetre es: "<< forma.Calcul_perimetre() << endl;
	
}


class Llum {
private:
	bool encesa;
public: 

};
