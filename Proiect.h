#include"Afacere.h"
class Proiect :public Afacere
{
private:

	string end_date = "";
	int finantare = 1;

public:

	Proiect()
	{
		cout << "Constr cu 0 parametrii Proiect" << endl;
	}

	Proiect(string, int);

	Proiect(const Proiect& order);

	Proiect(string, int, string, int, string, bool); // Constructor de initializare

	void set_end_date(string);
	string get_end_date();

	void set_finantare(int);
	int get_finantare();

	string description_Proiect();
	

};

