#include "sesiune.h"

void Sesiune::InregistrareParticipant(const string& numeParticipant){
	_participanti.push_back(numeParticipant);
}

void Sesiune::PrezentareParticipanti() const{
	list<string>::const_iterator iter;
	cout << "Sesiunea: " <<_denumire << endl;
	cout<<"Moderator: " << _moderator << endl;
	cout << "Lista participanti" << endl;

	for(iter= _participanti.begin();iter != _participanti.end();iter++){
		cout << *iter << endl;
	}

}

