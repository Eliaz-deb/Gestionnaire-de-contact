#include "stdio.h"
#include "stdlib.h"
#include "string.h"


struct Contact {
	char nom[50];
	char telephone[15];
};

int main() {
	struct Contact c;
	int choix = 1;
	
	FILE *fichier = fopen("log.txt", "w");
	
	if(fichier == NULL) {
		printf("Erreur lors de l'ouverture du fichier ! \n");
		return 1;}
		

	while (choix == 1){
	printf("tapez le nom de votre contact : ");
	scanf("%49s", c.nom);
	printf("tapez le numéro de téléphone de votre contact : ");
	scanf("%14s", c.telephone);
	fprintf(fichier, "%s - %s\n", c.nom, c.telephone);
	printf("Voulez-vous ajouter un autre contact ?\n");
	scanf("%d", &choix);
}
	
	fclose(fichier);
	printf("Fichier écrit avec succes ! \n");
	return 0;
}
	
