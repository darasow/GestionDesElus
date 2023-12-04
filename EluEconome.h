#ifndef ELUECONOME_H_INCLUDED
#define ELUECONOME_H_INCLUDED
#include "EluNormal.h"
class EluEconome : public EluNormal
{
    public:
    EluEconome(string id = "", string nom = "", string prenom = "", int nombreMaxAssistant = 0, int jour = 0, int mois = 0, int annee = 0):EluNormal(id, nom, prenom, nombreMaxAssistant, jour, mois, annee){}
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
            EluNormal::addSous((somme - this->nb * 1500));
        }
        cout << "Dotation distribuer avec succes " << endl;
    }

};



#endif // ELUECONOME_H_INCLUDED
