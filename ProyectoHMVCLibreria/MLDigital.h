/*
 * Author: Pedro Gabriel Leal
 */
#ifndef MLDIGITAL_H_
#define MLDIGITAL_H_
#include "MLibro.h"

class MLDigital : public MLibro
{
private:
		float mbytes;
public:
	MLDigital();
	void SetMBytes(float mb);
	float GetMBytes();
	float Hosting();
	float CostoNeto1();
	float Ganancia1();
};

#endif /* MLDIGITAL_H_ */
