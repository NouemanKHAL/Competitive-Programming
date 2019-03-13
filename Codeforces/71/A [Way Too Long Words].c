#include <stdio.h>
#include <string.h>

int main(void) {
	// comme spécifié dans le problème, "The first line contains an integer n"
	// donc on lit l'entier n ( attention , il ne faut pas du tout printf : inserer un nombre etc ...)
	
	int n;
	scanf(" %d",&n);

	// "Each of the following n lines contains one word"
	// donc on lire n fois une chaine de caractere et la traiter
	// d'après l'énoncé "the lengths of from 1 to 100 characters." 
	// donc un tableau de taille 101 suffit (100+1 pour être sur au cas y'a le '\0' qui termine la chaine)
	
	char s[101];
	
	int i = 0;
	
	//  "All the words consist of lowercase Latin letters"
	// donc, il y'a pas d'espace on peut utiliser scanf pour lire la chaine
	for ( i = 0 ; i < n ; i++ ){
		scanf("%s",s);
		
		int  taille = strlen(s);
		// 1er cas : si la chaine est de longueur <= 10 ("strictly more than 10 characters"))
		if ( taille <= 10 ){
			printf("%s\n", s);
		}
		// 2eme cas
		else{
			// printf le 1er caractere
			printf("%c", s[0]);
			
			// printf la taille de la chaine - 2 ( 1er et dernier caractere ne doivent pas etre comptés)
			printf("%d", taille-2);
			
			// printf le derniere caractere (0 ... taille-1)
			printf("%c\n", s[taille-1]);
			
			// n'oubliez pas le retour à la ligne !, juste pour le dernier caractere
		}
	}

	return 0;
}
