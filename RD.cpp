#include "RD.h"
RD::RD(int nr_persoane, int buget):Proiect("2020",15000)
{
	cout << "Constr cu 3 parametrii RD" << endl;

	this->nr_persoane = nr_persoane;
	this->buget = buget;
}

RD::RD(const RD& dezvoltare) :Proiect(dezvoltare)
{
	cout << "Constr de copiere RD" << endl;

	this->nr_persoane = dezvoltare.nr_persoane;
	this->buget = dezvoltare.buget;
}

RD::RD(int nr_persoane, int buget, string end_date, int finantare) :Proiect(end_date, finantare)
{
	cout << "Constr cu 6 parametrii RD" << endl;

	this->nr_persoane = nr_persoane;
	this->buget = buget;
}

void RD::set_nr_persoane(int nr_persoane)
{
	this->nr_persoane = nr_persoane;
}
int RD::get_nr_persoane()
{
	return this->nr_persoane;
}

void RD::set_buget(int buget)
{
	this->buget = buget;
}
int RD::get_buget()
{
	return this->buget;
}

string RD::description_RD()
{
	string text = "";

	text += "nr_persoane: " + to_string(this->nr_persoane) + "\n";
	text += "buget: " + to_string(this->buget) + "\n";

	return text;
}