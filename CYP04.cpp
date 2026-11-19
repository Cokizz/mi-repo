#include <stdio.h>

int main()
{
	double inicio, fin, paso;
	double x, suma, real, term;
	int termino;
	int i, n;

	scanf_s("%lf %lf %lf", &inicio, &fin, &paso);

	if (inicio == fin)
	{
		termino = 1;
	}
	else
	{
		if (paso <= 0)
		{
			termino = 0;
		}
		else
		{
			termino = (int)((fin - inicio) / paso + 1e-9) + 1;
		}
	}

	for (i = 0; i < termino; i++)
	{
		x = inicio + i * paso;

		suma = 1;
		term = 1;
		for (n = 1; n < termino; n++)
		{
			term = term * x / n;
			suma = suma + term;
		}

		real = 1;
		term = 1;
		for (n = 1; n < 100; n++)
		{
			term = term * x / n;
			real = real + term;
		}

		printf("%f %f %f\n", x, suma, real);
	}

}