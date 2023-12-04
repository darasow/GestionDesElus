#ifndef ELUMAFIEUX_H_INCLUDED
#define ELUMAFIEUX_H_INCLUDED
#include "EluNormal.h"
class EluMafieux : public EluNormal
{
   public:
   EluMafieux(string id = "", string nom = "", string prenom = "", int nombreMaxAssistant = 0 , int jour = 0, int mois = 0, int annee = 0) : EluNormal(id, nom, prenom, nombreMaxAssistant, jour, mois, annee){}
   bool embaucher(Personne *a)
    {
        if((EluNormal::TAILLe <= this->nb) or (this->nombreMaxAssistant <= nb))
        {
            cout << "Plus de place pour les assistant " << endl;
            return false;
        }
        if((a->get_nom() != this->get_nom()))
        {
            cout << "Nom saisi: " << a->get_nom() << endl;
            cout << "Nom Elu: " << EluNormal::get_nom() << endl;
            cout << "Je n'embauche que les menbres de ma famille " << endl;
            return true;
        }
        for(int i(0); i < this->nb; i++)
        {
            if(EluNormal::ListeAssistant[i]->verifi_id(a->get_id()))
            {
                cout << "Ce code existe deja " << endl;
                return true;
            }
        }
         EluNormal::ListeAssistant[nb] = a;
         nb++;
         cout<<"Assistant ajouter avec succes " << endl;
         return false;
    }
     void modifiNomAssistant(string nom, int indice)
    {
        if(this->get_nom() != nom)
        {
             cout << "Desoler je n'embauche que les menbre de ma famille " << endl;
            return;
        }
        ListeAssistant[indice]->set_nom(nom);
         cout << "Nom modifier avec succes " << endl;
    }

};




#endif // ELUMAFIEUX_H_INCLUDED
