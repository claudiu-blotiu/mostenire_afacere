#include<iostream>
#include<string>
using namespace std;

class Afacere
{
private:

	string tip = "";
	int vechime = 1;
	string oras = "";
	bool bursa = false;

public:

	Afacere()
	{
		cout << "Eu sunt constructorul fara parametrii al bazei"<<endl;
	}

	Afacere(string, int, string, bool);

	Afacere(const Afacere& business);

	void set_tip(string);
	string get_tip();

	void set_vechime(int);
	int get_vechime();

	void set_oras(string);
	string get_oras();

	void set_bursa(bool);
	bool get_bursa();

	string description_Afacere();

	string to_save();

	












};

