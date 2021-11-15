#include"Proiect.h"
class RD:public Proiect
{
private:

	int nr_persoane = 1;
	int buget = 1;

public:

	RD()
	{
		cout << "Constr cu 0 parametrii RD" << endl;
	}

	RD(int, int);

	RD(const RD& cumparaturi);

	RD(int, int, string, int);

	void set_nr_persoane(int);
	int get_nr_persoane();

	void set_buget(int);
	int get_buget();

	string description_RD();

};

