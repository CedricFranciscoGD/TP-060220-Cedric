#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Capoue
	{
		char storyC[150];
		int goldC;
		int lifePointC;
		int chapitreC[3];
	};
	typedef struct Capoue capoue;

struct Athenes
{
	char storyA[150];
	int goldA;
	int lifePointA;
	int chapitreA[3];

};
typedef struct Athenes athenes;


int main (){

	/*capoue histoire = {"Bienvenue a Capoue jeune gladiateur, vous combattrez a present pour nous, voici vos cadeaux de bienvenue:"};
	capoue gold = {100};
	capoue pv= {100};
	capoue chapitre= {1};
	*/

	capoue persoC ={"Bienvenue a Capoue jeune gladiateur, vous combattrez a present pour nous, voici vos cadeaux de bienvenue:", 10, 10,  1 };
	athenes persoA ={"Bienvenue a Athenes jeune gladiateur, vous combattrez a present pour nous, faites honneur a notre deesse Athena ! Voici vos cadeaux de bienvenue:", 20, 12,  1 };
	
	//choix premiere destination
	int choixDest=0;
	//confirmation du choix
	int nvChoix=0;
	//choix du chapitre 
	int choixChap=0;

	int chapitre[10];

	chapitre[0]=1;
	chapitre[1]=2;
	chapitre[2]=3;
	chapitre[3]=4;
	chapitre[4]=5;
	chapitre[5]=6;
	chapitre[6]=7;
	chapitre[7]=8;
	chapitre[8]=9;
	chapitre[9]=10;
	
	//Jauge de vie de depart
	int pointDevie=100;
	//Pecule d'or de depart
	int bourseDor=10;

	
	printf("Choisissez votre destination:\nTapez '1' pour vous rendre a Capoue ou tapez '2' pour vous rendre a Athenes \n");
	scanf("%d", &choixDest);
	if (choixDest== 1){
		printf("Voici les chapitres qui vous attendent:\n");
		printf("Chapitre Capoue 1\n");
		printf("Chapitre Capoue 2\n");
		printf("Chapitre Capoue 3\n");
	}
	else if (choixDest==2){
		printf("Voici les chapitres qui vous attendent:\n");
		printf("Chapitre Athenes 1\n");
		printf("Chapitre Athenes 2\n");
		printf("Chapitre Athenes 3\n");
	}

	printf("Souhaitez vous deserter et changer de camp ? (attention ce choix est irreversible)\n");
	printf("Tapez '1' pour changer de destination ou tapez '0' pour valider votre premier choix\n");
	scanf("%d", &nvChoix);
	if (nvChoix == 1){
		printf("Choisissez votre destination:\nTapez '1' pour vous rendre a Capoue ou tapez '2' pour vous rendre a Athenes \n");
		scanf("%d", &choixDest);
	if (choixDest== 1){
		printf("Felicitation vous venez d'arriver a Capoue\n");
		printf("%s, %d piece d'or, %d point de vie, vous commencez au chapitre %d \n", persoC.storyC, persoC.goldC, persoC.lifePointC, persoC.chapitreC);
		bourseDor += persoC.goldC;
		printf("Vous avez %d or \n", bourseDor );	
		printf("Vous avez %d points de vie \n",pointDevie );	
	/*	printf("%s \n", histoire.storyC );
		printf("Voici %d piece d'or \n", gold.goldC );
		printf("Vous avez %d point de vie \n", pv.lifePointC);
		printf("Vous commencez au chapitre %d \n", chapitre.chapitreC );
	*/	
	}
	else if (choixDest==2){
		printf("Felicitation vous venez d'arriver a Athenes\n");
		printf("%s, %d piece d'or, %d point de vie, vous commencez au chapitre %d \n", persoA.storyA, persoA.goldA, persoA.lifePointA, persoA.chapitreA);
		bourseDor += persoA.goldA;
		printf("Vous avez %d or \n", bourseDor );	
		printf("Vous avez %d points de vie \n",pointDevie );
	}
	}
	else if (nvChoix==0)
	{
		printf("Tant mieux nous n'aimons pas les traitres !\n");
		if (choixDest==1)
		{
			printf("Felicitation vous venez d'arriver a Capoue\n");
			printf("%s, %d piece d'or, %d point de vie, vous commencez au chapitre %d \n", persoC.storyC, persoC.goldC, persoC.lifePointC, persoC.chapitreC);
			bourseDor += persoC.goldC;
			printf("Vous avez %d or \n", bourseDor );	
			printf("Vous avez %d points de vie \n",pointDevie );
		}		
		else if (choixDest==2)
		{
			printf("Felicitation vous venez d'arriver a Athenes\n");
			printf("%s, %d piece d'or, %d point de vie, vous commencez au chapitre %d \n", persoA.storyA, persoA.goldA, persoA.lifePointA, persoA.chapitreA);
			bourseDor += persoA.goldA;
			printf("Vous avez %d or \n", bourseDor );	
			printf("Vous avez %d points de vie \n",pointDevie );
		}
	

	}	

		printf("Souhaitez vous changer de chapitre ?\n");
		printf("Tapez le numero correspondant au chapitre qui vous interesse: \n");
		printf("\n");
		printf("Chapitre [1] \n");
		printf("Chapitre [2] \n");
		printf("Chapitre [3] \n");
		printf("Chapitre [4] \n");
		printf("Chapitre [5] \n");
		printf("Chapitre [6] \n");
		printf("Chapitre [7] \n");
		printf("Chapitre [8] \n");
		printf("Chapitre [9] \n");
		printf("Chapitre [10] \n");

		scanf ("%d", &choixChap);


		while(choixChap>10)
		{
		
			printf("Vous ne pouvez pas vous rendre a ce chapitre car il n'existe pas ou n'a pas encore ete decouvert\n ");
			printf("Veuillez choisir un chapitre valide:\n");
			scanf ("%d", &choixChap);
		}

		while (pointDevie > 0){


		if (choixChap ==1 )
		{
			printf("Vous vous rendez au chapitre numero %d \n", choixChap);
			printf("Vous tombez dans un gouffre et trouvez un tresor\n");
			pointDevie -= 20;
			bourseDor += 25;
			printf("Vous avez %d point de vie\n", pointDevie);
			printf("Vous avez %d piece d'or\n", bourseDor);
			printf("Choisissez un nouveau chapitre\n");
			scanf ("%d", &choixChap);
		}

		else if (choixChap ==2 )
		{
			printf("Vous vous rendez au chapitre numero %d \n", choixChap);
			printf("Vous tombez sur une charette abandonnée \n");
			pointDevie += 0;
			bourseDor += 5;
			printf("Vous avez %d point de vie\n", pointDevie);
			printf("Vous avez %d piece d'or\n", bourseDor);
			printf("Choisissez un nouveau chapitre\n");
			scanf ("%d", &choixChap);
		
		}
		else if (choixChap ==3 )
		{
			printf("Vous vous rendez au chapitre numero %d \n", choixChap);
			printf("Le chef de votre Ludus vous recompense pour vos recentes victoires \n");
			pointDevie += 0;
			bourseDor += 50;
			printf("Vous avez %d point de vie\n", pointDevie);
			printf("Vous avez %d piece d'or\n", bourseDor);
			printf("Choisissez un nouveau chapitre\n");
			scanf ("%d", &choixChap);
		}
		else if (choixChap ==4 )
		{
			printf("Vous vous rendez au chapitre numero %d \n", choixChap);
			printf("Vous tombez sur un voleur \n");
			pointDevie -= 5;
			bourseDor -= 40;
			printf("Vous avez %d point de vie\n", pointDevie);
			printf("Vous avez %d piece d'or\n", bourseDor);
			printf("Choisissez un nouveau chapitre\n");
			scanf ("%d", &choixChap);
		}
		else if (choixChap ==5 )
		{
			printf("Vous vous rendez au chapitre numero %d \n", choixChap);
			printf("Vous remportez un combat \n");
			pointDevie -= 5;
			bourseDor += 15;
			printf("Vous avez %d point de vie\n", pointDevie);
			printf("Vous avez %d piece d'or\n", bourseDor);
			printf("Choisissez un nouveau chapitre\n");
			scanf ("%d", &choixChap);
		}
		else if (choixChap ==6 )
		{
			printf("Vous vous rendez au chapitre numero %d \n", choixChap);
			printf("Vous trouvez une fiole de soin \n");
			pointDevie += 20;
			bourseDor += 0;
			printf("Vous avez %d point de vie\n", pointDevie);
			printf("Vous avez %d piece d'or\n", bourseDor);
			printf("Choisissez un nouveau chapitre\n");
			scanf ("%d", &choixChap);
		}
		else if (choixChap ==7)
		{
			printf("Vous vous rendez au chapitre numero %d \n", choixChap);
			printf("Vous etes invite a un banquet \n");
			pointDevie += 10;
			bourseDor -= 15;
			printf("Vous avez %d point de vie\n", pointDevie);
			printf("Vous avez %d piece d'or\n", bourseDor);
			printf("Choisissez un nouveau chapitre\n");
			scanf ("%d", &choixChap);
		}
		else if (choixChap ==8)
		{
			printf("Vous vous rendez au chapitre numero %d \n", choixChap);
			printf("Vous tombez sur un chasseur de prime \n");
			pointDevie -= 70;
			bourseDor -= 0;
			printf("Vous avez %d point de vie\n", pointDevie);
			printf("Vous avez %d piece d'or\n", bourseDor);
			printf("Choisissez un nouveau chapitre\n");
			scanf ("%d", &choixChap);
		}
		else if (choixChap ==9 )
		{
			printf("Vous vous rendez au chapitre numero %d \n", choixChap);
			printf("Vous rencontrez un riche donnateur \n");
			pointDevie += 0;
			bourseDor += 500;
			printf("Vous avez %d point de vie\n", pointDevie);
			printf("Vous avez %d piece d'or\n", bourseDor);
			printf("Choisissez un nouveau chapitre\n");
			scanf ("%d", &choixChap);
		}
		else if (choixChap ==10 )
		{
			printf("Vous vous rendez au chapitre numero %d \n", choixChap);
			printf("Vous tombez dans un piege confectionne par un ennemis de l'autre cite \n");
			pointDevie -= 100;
			bourseDor -= 0;
			printf("Vous avez %d point de vie\n", pointDevie);
			printf("Vous avez %d piece d'or\n", bourseDor);
			printf("Choisissez un nouveau chapitre\n");
			scanf ("%d", &choixChap);
		}
		}
		if (pointDevie=<0)
		{
			printf("Vous etes mort, l'empire recupere votre bourse.\n");
		}

	return 0;
}

/*



		*/