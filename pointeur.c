#include <stdio.h>

void triplepointeur(int *pointeursurnombre)
{
	*pointeursurnombre *= 2; // Multiplie la valeur du nombre par 2 
}

int main() { 
int A=8; // création de la variable A 
int B=2; // création de la variable B
int* ptr=NULL; // création du pointeur 
ptr=&A; // met l'addresse de A dans mon pointeur

printf("A vaut : %d\n", *ptr); // On utilise *ptr avec avec %d pour afficher la valeur de A
printf("L'adresse de la variable A est : %p \n",ptr);  // %p pour pointeur

triplepointeur(ptr); // appelle de la fonction triplepointeur

printf("après multiplication : %d \n",*ptr );
return 0;
}
