#include <stdio.h>
#include <stdlib.h>
typedef int matrice[50][50];
void saisie( matrice  M){
    int nbLigne = 0 ;
    int nbColonnes = 0 ;
    int i = 0 ;
    int j = 0 ;
    int c = 0 ;
printf("donner le nbre des ligne %d et le nbre de colonnes %d", nbLigne ,nbColonnes);
scanf("%d %d",&nbLigne,&nbColonnes);
// la premiere dimension correspond au lignes et la deuxieme au colonne
for (i=1 ; i<= nbLigne ; i++){
        for (j= 1 ; j<= nbColonnes; j++){
    printf("El�ment[%d][%d] : ",i,j);
    scanf("%d",&M[i][j]);}
}}
void affichage (int nbLigne , int nbColonnes, matrice M){
    int i,j= 0;
    if (nbColonnes < 20 ){
        for (i=1 ; i<= nbLigne ; i++){
        for (j=1 ; j<= nbColonnes ; j++){
            printf ("%7d",M [i][j]);
            printf("\n");
        }}}}
void mettreaZero (int nbLigne , int nbColonnes ,matrice m ){
    int i,j= 0 ;
for (i=0;i<nbLigne;i++)
	{
		for (j=0;j<nbColonnes;j++)
			{
				m[i][j]=0;
			}
	}
//Calcul}
void zeroo (int nbLigne , matrice M){
int i,j = 0 ;
for (i=1; i<= nbLigne; i++){
        for (j=1 ;j<= i ; j++){
    M[i][j]= 0 ;}}}
void transpose(matrice M ,int nbLigne, int nbColonnes, matrice B){
int i,j = 0 ;
 /* Affectation de la matrice transpos�e � B */
 for (i=0; i<nbLigne; i++)
     for (j=0; j<nbColonnes ; j++)
          B[j][i]=M[i][j];
 /* Affectation de la matrice transpos�e � B */
 for (i=0; i<nbLigne; i++)
     for (j=0; j<nbColonnes; j++)
          B[j][i]=M[i][j];
  /* Edition du r�sultat */
 /* Attention: maintenant le r�le de nbLigne et nbcolonnes est invers�. */
  printf("Matrice r�sultat :\n");
 for (i=0; i<nbColonnes; i++){
     for (j=0; j<nbLigne; j++)
     printf("%7d", B[i][j]);
     printf("\n");}}
void multiple (int nbLigne , int nbColonnes , matrice M , matrice mult ){
int j,x,i = 0 ;
printf ("donner l'entier %d",x);
scanf ("%d",&x);
for (i=0 ; i<= nbLigne ; i++){
    for (j= 0 ; j<= nbColonnes ; j++){
        mult[i][j] = x*M[i][j] ;
    }
}
void somme (int nbLigne , int nbColonnes , matrice M1 , matrice M2, matrice sum){
int i,j=0 ;
for (i=0 ; i<= nbLigne ; i++){
    for (j= 0 ; j<= nbColonnes ; j++){
        sum[i][j]= M1[i][j]+M2[i][j] ;
    }
}}
void multiplication (){
{
	int i,j,k;
	int N,M,P;
	int mat[30][30],mat1[30][30],mat2[30][30];

	printf ("Donner le nombre de lignes de la premiere matrice : ");
        flushall(); scanf ("%d",&N);
	printf ("\nDonner la dimension commune aux 2 matrices : ");
	scanf ("%d",&M);
	printf ("\nDonner le nombre de colonnes de la deuxieme matrice : ");
	scanf ("%d",&P);

//Remplissage de la premiere matrice--------------------------------------------

	printf ("\nDonner les elements de la premiere matrice :\n");
	for (i=0;i<N;i++)
	{
		for (j=0;j<M;j++)
			{
			printf ("ligne %d, colonne %d : ",i+1,j+1);
			scanf ("%d",&mat1[i][j]);
			}
	}

//Remplissage de la seconde matrice---------------------------------------------

	printf ("\nDonner les elements de la seconde matrice :\n");
	for (i=0;i<M;i++)
	{
		for (j=0;j<P;j++)
			{
			printf ("ligne %d, colonne %d : ",i+1,j+1);
			scanf ("%d",&mat2[i][j]);
			}
	}

//Initialisation de la matrice r�sultante---------------------------------------

	for (i=0;i<N;i++)
	{
		for (j=0;j<P;j++)
			{
				mat[i][j]=0;
			}
	}
//Calcul de la matrice r�sultante-----------------------------------------------
	for (i=0;i<N;i++)
	{
		for (j=0;j<P;j++)
		{
			for (k=0;k<M;k++)
			{
				mat[i][j]=mat1[i][k]*mat2[k][j]+mat[i][j];
			}
		}
	}

//Affichage de la matrice r�sultante--------------------------------------------

	printf ("\nProduit matriciel :\n");
	for (i=0;i<N;i++)
	{
		for (j=0;j<P;j++)
			{
				printf ("ligne %d,colonne %d : ",i+1,j+1);
				printf ("%d\n",mat[i][j]);
			}
	}
	getch();
}}
int AffichageMenu()
{
     int choixMenu;

     printf("---Menu---\n");
     printf("1.saisir une matrice\n");
     printf("2.Mettre a zero la diagonale d une matrice\n");
     printf("3.calculer la transposee\n");
     printf("4.la somme de deux matrice\n");
     printf("5.la multiplication de deux matrices\n");
      printf("6.afficher une matrice\n");
     printf("\nVotre choix?\n\n");
     scanf("%d", &choixMenu);
     return choixMenu ;
}
int choixmat () {
    int choixmat;
printf("1.matrice A \n");
printf("2.matrice B \n ");
printf("3.mettre la matrice A a zero \n");
printf("4.mettre la matrice B a zero \n");
printf("5.mettre la matrice C a zero \n");
scanf("%d", &choixmat);
     return choixmat ;
}
int mettreAzero () {
    int mettreAzero;
printf("1.mettre la diagonale de la matrice A a zero \n");
printf("2.mettre la diagonale de la matrice B a zero \n");
printf("3.mettre la diagonale de la matrice C a zero \n");
scanf("%d", &mettreAzero);
     return mettreAzero ;
}
int transposee () {
    int transposee;
printf("1.la transposee de A \n");
printf("2.la transposee de B \n");
printf("3. la transposee de C \n");
scanf("%d", &transposee);
     return transposee ;
}
int afficher () {
    int afficher;
printf("1.afficher A \n");
printf("2.afficher B \n");
printf("3.afficher C \n");
scanf("%d", &afficher);
     return afficher ;
}

int main(int argc, char *argv[])
{matrice A ;
matrice B ;
matrice C ;

    switch(AffichageMenu())
    {
                     case 1:
                          switch (choixmat()){
                          case 1 :saisie (A); break ;
                          case 2 : saisie (B); break ;
                          case 3 : mettreaZero (nbLigne,nbColonnes,A); break;
                          case 4 : mettreaZero (nbLigne,nbColonnes,B); break;
                          case 5 : mettreaZero (nbLigne,nbColonnes,C); break;
                           }
                          break;
                     case 2:
                         switch (mettreAzero()){
                         case 1 : zeroo(nbLigne , A); break ;
                         case 2 : zeroo(nbLigne , B); break ;
                         case 3 : zeroo(nbLigne , C); break ;
                         }
                          break;
                     case 3:
                         switch (transposee()){
                         case 1 :transpose(A,nbLigne,nbColonnes,M); break ;
                         case 2 :transpose(B,nbLigne,nbColonnes,M); break ;
                         case 3 :transpose(C,nbLigne,nbColonnes,M); break ; }
                          break;
                     case 4:
                          somme(nbLigne, nbColonnes , A,B,C);
                          break;
                     case 5 :
                        multiplication () ;
                        break ;
                     case 6 :
                        switch (afficher()){
                        case 1 : affichage (nbLigne , nbColonnes , A); break ;
                        case 2 : affichage (nbLigne , nbColonnes , B); break ;
                        case 3 : affichage (nbLigne , nbColonnes , C); break ;}
                     default:
                             printf("Vous ne ferez rien du tout!");
                             break;
    }

  system("PAUSE");
  return 0;
  }

