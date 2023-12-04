#ifndef DECLARATION_H_INCLUDED
#define DECLARATION_H_INCLUDED
#include <typeinfo>
#include "EluNormal.h"
#include "EluEscro.h"
#include "EluMafieux.h"
#include "EluEconome.h"
#include "fonction.h"
      Personne *listeElus[500], *p = new EluNormal();
      int j = 0;
      int choix, nb = 0, cpt = 0,pos = -1,jour, mois, annee, nombreAssistant,imin,imax,im = 0;char ch[50];
      EluNormal *En = new EluNormal();
      EluEconome *Eec = new EluEconome();
      EluEscro *Ees = new EluEscro();
      EluMafieux *Em = new EluMafieux();
      Personne *assistant = new EluNormal();
      Date *date = new Date();
      string nom, prenom, id,type;
      bool yaAssistant = false, trier = false;
#endif // DECLARATION_H_INCLUDED
