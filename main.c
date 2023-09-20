#include <stdio.h>


void input(int *p_dosse, float *p_tc) {
	printf("Entrer le dossard : ");
D:scanf("%d", p_dosse);
	printf("Entrer le temps : ");
E:scanf("%f", p_tc);

	if (*(p_dosse) < 0) {
		printf("ERR: Le numero doit etre positif.");
		printf("Reessayez svp : ");
		goto D;
	}
	if (*(p_tc) < 0.0) {
		printf("ERR: Le temps ne peut pas etre negatif.");
		printf("Reessayez svp : ");
		goto E;
	}
}


int main() {
	/* Main function */
	float mt1, mt2;
	float tc;
	int dossmt1, dossmt2;
	int dosse;

	printf("Vous entrez le numero du dossard et son temps reccord.\n");
	printf("+-----------------------------------------------------+\n");
	printf("| La saisie de ces deux informations se poursuit tant |\n");
	printf("| que vous n'entrez pas le chiffre 0 pour un dossard. |\n");
	printf("+-----------------------------------------------------+\n");
	printf("\n");

	input(&dosse, &tc);
	dossmt1 = dosse;
	mt1 = tc;

	while (dosse != 0) {
		if (tc < mt1) {
			mt2 = mt1;
			mt1 = tc;
			dossmt2 = dossmt1;
			dossmt1 = dosse;
		}
		else if (tc < mt2) {
			dossmt2 = dosse;
			mt2 = tc;
		}
		input(&dosse, &tc);
	}

	printf("* Le dossard vainqueur est %d\n", dossmt1);
	printf("  et son temps reccord est %.3f.\n", mt1);
	printf("* Le dossard en seconde place est %d\n", dossmt2);
	printf("  et son temps reccord est %.3f.\n", mt2);

  return 0;
}
