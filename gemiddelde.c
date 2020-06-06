#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
	int aantal_periodes = get_int("Aantal periodes: "); //input number periodes
	
	float gemiddelde = 0;
	
	for (int i = 0; i < aantal_periodes; i++)  //asking for ciphers & weging
	{
		float cipher = get_float("SE%i: ", i + 1);
		
		int weging = get_int("Weging: ");
		
		gemiddelde = gemiddelde + (cipher * weging / 100); // updating gemiddelde : cipher * weging / 100
	}
	
	gemiddelde = (round(gemiddelde * 10)) / 10; // rounding gemidelde
	
	printf("Gemiddelde: %.1f\n", gemiddelde);
	
	return 0;
}