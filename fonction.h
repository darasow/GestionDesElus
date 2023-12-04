#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#include <windows.h>
#include <cstdlib>
#include <stdio.h>
#include <cstring>
#include <ctime>
//#include <string.h>
//#include <conio.h>
#include <iostream>
using namespace std;
int controleEntier(char ch[])
 {   unsigned int cpt = 0;
     int n = atoi(ch);
     int val(n);
     while ( val != 0)
     {
         cpt++;
         val /= 10;
     }
     if(strlen(ch) != cpt) n = 0;
     return n;
 }
  void videBuffer()
  {
       scanf ("%*[^\n]");
       getchar();
  }
 void position(int x, int y)
{
      HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD c;
      c.X = x;
      c.Y = y;
      SetConsoleCursorPosition(h,c);

}

void menuGeneral()
{
position(50, 1); cout << "||******************** Menu ********************||" << endl;
position(50, 2); cout << "||1---------------  Ajouter un elu   -----------||" << endl;
position(50, 3); cout << "||2---------------  Affichage        -----------||" << endl;
position(50, 4); cout << "||3---------------  Gestion des elus -----------||" << endl;
position(50, 5); cout << "||4---------------  Supprimer un elu -----------||" << endl;
position(50, 6); cout << "||5---------------  Trier les elu    -----------||" << endl;
position(50, 7); cout << "||6---------------  Liste des assistant par elu-||" << endl;
position(50, 8); cout << "||7---------------  Chercher un elu  -----------||" << endl;
position(50, 9); cout << "||8---------------     Quitter       -----------||" << endl;
position(50, 10); cout <<"||**********************************************||" << endl;
position(50, 11); cout << "Choix : ";
}

void sousMenuAffichage()
{
    position(50, 1); cout << "||******************   Affichage *****************||" << endl;
    position(50, 2); cout << "||1---------------  Par categori      ------------||" << endl;
    position(50, 3); cout << "||2---------------  La liste des elus ------------||" << endl;
    position(50, 4); cout << "||3---------------       Retour       ------------||" << endl;
    position(50, 5); cout << "||************************************************||" << endl;
    position(50, 6); cout << "Choix : ";
}
void gestionElu()
{
position(50, 1); cout << "||******************* Gestion ******************||" << endl;
position(50, 2); cout << "||1----------  Embaucher un assistant  ---------||" << endl;
position(50, 3); cout << "||2----------  Licencier un assistant  ---------||" << endl;
position(50, 4); cout << "||3---Faire une dotation par le compte ---------||" << endl;
position(50, 5); cout << "||4---Faire une dotation sans le compte---------||" << endl;
position(50, 6); cout << "||5----------   Faire un depot         ---------||" << endl;
position(50, 7); cout << "||6---------- Voir tout les assistants ---------||" << endl;
position(50, 8); cout << "||7---------- Voir un assisatant       ---------||" << endl;
position(50, 9); cout << "||8---------- Modifier un assistant    ---------||" << endl;
position(50, 10); cout <<"||9---------- Trier les assistant      ---------||" << endl;
position(50, 11); cout <<"||10----------       Retour            ---------||" << endl;
position(50, 12); cout <<"||**********************************************||" << endl;
position(50, 13); cout << "Choix : ";
}
void modication()
{
    position(50, 8); cout << "||********** Modifier *********||" << endl;
    position(50, 9); cout << "||1---------  Nom     ---------||" << endl;
    position(50, 10); cout << "||2---------  Prenom  ---------||" << endl;
    position(50, 11); cout << "||3---------  Id      ---------||" << endl;
    position(50, 12); cout << "||4---------  Retour  ---------||" << endl;
    position(50, 13); cout << "||*****************************||" << endl;
    position(50, 14); cout << "Choix : ";
}
void menuCategorie()
{
position(50, 1); cout << "||********************  Elu ********************||" << endl;
position(50, 2); cout << "||1------------------ Normal  ------------------||" << endl;
position(50, 3); cout << "||2------------------ Mafieux ------------------||" << endl;
position(50, 4); cout << "||3------------------ Escro   ------------------||" << endl;
position(50, 5); cout << "||4------------------ Econome ------------------||" << endl;
position(50, 6); cout << "||5------------------ Retour  ------------------||" << endl;
position(50, 7); cout << "||**********************************************||" << endl;
position(50, 8); cout << "Choix : ";
}

bool controleDateJour(int jour, int mois)
{
    if(jour > 31 || jour <= 0) return true;
    switch(mois)
    {
    case 2 : if(jour > 28) return true; else return false;
    case 1 :
    case 3 :
    case 5 :
    case 7 :
    case 8 :
    case 10 :
    case 12 : if(jour > 31) return true; else return false;
    case 4 :
    case 6 :
    case 9 :
    case 11 : if(jour > 30) return true; else return false;
    default : return true;
    }
}

void anneeActuel()
{
    time_t t = time(0);
    tm* tme = localtime(&t);
    cout << "mois : "<<tme->tm_mon + 1 << endl;
    cout << "Jour : "<< tme->tm_mday << endl;
    cout << "Heure :"<< tme->tm_hour << endl;
    cout << "minutes :"<< tme->tm_min << endl;
    cout << "Seconde :"<< tme->tm_sec << endl;
    cout << "Annee : " << tme->tm_year + 1900 << endl;
}

void netoyer()
{
    system("pause");
    system("cls");
}

#endif // FONCTION_H_INCLUDED
