#include "Afacere.h"

Afacere::Afacere(string tip, int vechime, string oras, bool bursa)
{
	cout << "Eu sunt constrcutorul cu patru paramterii al bazei"<<endl;
	this->tip = tip;
	this->vechime = vechime;
	this->oras = oras;
	this->bursa = bursa;
}

Afacere::Afacere(const Afacere& business)
{
	cout << "Constr de copiere baza" << endl;

	this->tip = business.tip;
	this->vechime = business.vechime;
	this->oras = business.oras;
	this->bursa = business.bursa;
}

void Afacere::set_tip(string tip)
{
	this->tip = tip;
}
string Afacere::get_tip()
{
	return this->tip;
}

void Afacere::set_vechime(int vechime)
{
	this->vechime = vechime;
}
int Afacere::get_vechime()
{
	return this->vechime;
}

void Afacere::set_oras(string oras)
{
	this->oras = oras;
}
string Afacere::get_oras()
{
	return this->oras;
}

void Afacere::set_bursa(bool bursa)
{
	this->bursa = bursa;
}
bool Afacere::get_bursa()
{
	return this->bursa;
}

string Afacere::description_Afacere()
{
	string text = "";

	text += "tip: " + this->tip + "\n";
	text += "vechime: " + to_string(this->vechime) + "\n";
	text += "Oras: " + this->oras + "\n";
	text += "bursa: " + to_string(this->bursa) + "\n";

	return text;
}

string Afacere::to_save()
{
	string text = "";

	text += this->tip + " ";
	text += to_string(this->vechime) + " ";
	text += this->oras + " ";
	text += to_string(this->bursa);

	return text;
}