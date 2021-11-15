#include"RD.h"

class Aplicare :public Afacere
{
private:
	
	string sediu = "";
	string tara = "";

public:

	Aplicare()
	{
		cout << "Constr cu 0 parametrii Aplicare" << endl;
	}

	Aplicare(string,string);
	
	Aplicare(const Aplicare& product);

	Aplicare(string, string, string, int, string, bool);

	void set_sediu(string);
	string get_sediu();

	void set_tara(string);
	string get_tara();

	string description_Aplicare();



};

