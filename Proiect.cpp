#include "Proiect.h"

Proiect::Proiect(string end_date, int finantare):Afacere("Stock",10,"Sibiu",1)
{
	cout << "Constr cu 3 parametrii Proiect" << endl;
	this->end_date = end_date;
	this->finantare = finantare;
}

Proiect::Proiect(const Proiect& project) :Afacere(project)
{
	cout << "Constr de copiere Proiect" << endl;
	this->end_date = project.end_date;
	this->finantare = project.finantare;
}

Proiect::Proiect(string end_date, int finantare, string tip, int vechime, string oras, bool bursa) : Afacere(tip, vechime, oras, bursa)
{
	cout << "Constr cu 7 parametrii Proiect" << endl;

	this->end_date = end_date;
	this->finantare = finantare;
}


void Proiect::set_end_date(string end_date)
{
	this->end_date = end_date;
}
string Proiect::get_end_date()
{
	return this->end_date;
}

void Proiect::set_finantare(int finantare)
{
	this->finantare = finantare;
}
int Proiect::get_finantare()
{
	return this->finantare;
}


string Proiect::description_Proiect()
{
	string text = "";

	text += "end_date: " + this->end_date + "\n";
	text += "finantare: " + to_string(this->finantare) + "\n";
	
	return text;
}


