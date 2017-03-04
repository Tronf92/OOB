#include "sesiune.h"

int main(){
	Sesiune oop("Programare orientata obiect" , "Mircea Preda" );
	oop.InregistrareParticipant("Daniel Popescu");
	oop.InregistrareParticipant("Maria Marinescu");

	oop.PrezentareParticipanti();

	Sesiune pp("Programare procedurala" , "Cristian Ionescu" );

	pp.InregistrareParticipant("Paul Ionesc");
	pp.InregistrareParticipant("Daniela Iliescu");

	pp.PrezentareParticipanti();

	system("pause");
	return 0;
}