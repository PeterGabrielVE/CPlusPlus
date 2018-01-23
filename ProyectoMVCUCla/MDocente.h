
#ifndef MDOCENTE_H_
#define MDOCENTE_H_
#include <string>

using namespace std;

class MDocente
{
private:
	string cedula;
	string nombre;
	int tipo;
	float sueldo;

public:
	MDocente();
	void SetCedula(string c);
    void SetNombre(string n);
	void SetSueldo(float s);
	void SetTipo(int t);
	string GetCedula();
    string GetNombre();
    float GetSueldo();
    int GetTipo();


};

#endif /* MDOCENTE_H_ */
