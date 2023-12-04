#ifndef ELUESCRO_H_INCLUDED
#define ELUESCRO_H_INCLUDED
#include "EluNormal.h"
class EluEscro : public EluNormal
{
    protected:
     double compteSuisse;
public:
  EluEscro(string id = "" , string nom = "" , string prenom = "", int nombreMaxAssistant = 0, int jour = 0, int mois = 0, int annee = 0):EluNormal(id, nom, prenom, nombreMaxAssistant, jour, mois, annee)
  {this->compteSuisse = 0;}
   void dotation(double somme)
    {
        if(somme <= this->nb * 1500)
        {
            for(int i(0); i < this->nb; i++)
            {
            EluNormal::ListeAssistant[i]->addSous(somme / this->nb);
            }
        }else
        {
            for(int i(0); i < this->nb; i++)
            {
            EluNormal::ListeAssistant[i]->addSous(1500);
            }
            this->compteSuisse += (somme - this->nb * 1500);
        }
        cout << "Dotation distribuer avec succes " << endl;
    }
    void affiche()
    {
        EluNormal::affiche();
        cout << "\t\t\t\t\t\t\tCompte Suisse : " << this->compteSuisse << endl;
    }

};


#endif // ELUESCRO_H_INCLUDED
