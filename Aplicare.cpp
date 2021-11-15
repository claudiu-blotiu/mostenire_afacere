#include "Aplicare.h"

Aplicare::Aplicare(string sediu, string tara) :Afacere("AUTO",45,"Berlin",0) //apleaza Constructorul"Persoana"cu parametrii
{
	cout << "Constr cu 3 parametrii Aplicare" << endl;
	this->sediu = sediu;
	this->tara = tara;
	
}

Aplicare::Aplicare(const Aplicare& product):Afacere(product)
{
	cout << "Constr copiere Aplicare" << endl;

	this->sediu = product.sediu;
	this->tara = product.tara;
}

Aplicare::Aplicare(string sediu, string tara, string tip, int vechime,string oras,bool bursa) :Afacere(tip,vechime,oras,bursa)
{
	cout << "Constr cu 6 parametrii Aplicare" << endl;

	this->sediu = sediu;
	this->tara = tara;
}

void Aplicare::set_sediu(string sediu)
{
	this->sediu = sediu;
}
string Aplicare::get_sediu()
{
	return this->sediu;
}

void Aplicare::set_tara(string tara)
{
	this->tara = tara;
}
string Aplicare::get_tara()
{
	return this->tara;
}

string Aplicare::description_Aplicare()
{
	string text = "";

	text += "sediu: " + this->sediu + "\n";
	text += "tara: " + this->tara + "\n";

	return text;
}