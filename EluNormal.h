#ifndef ELUNORMAL_H_INCLUDED
#define ELUNORMAL_H_INCLUDED
#include "Personne.h"
class EluNormal : public Personne
{
    protected:
    int nombreMaxAssistant;
    static int const TAILLe = 500;
    int nb;
    Personne *ListeAssistant[TAILLe];
    public:
     EluNormal(string id = "" , string nom = "", string prenom = "", int nombreMaxAssistant = 0, int jour = 0, int mois = 0, int annee = 0): Personne(nom, prenom, id, jour, mois, annee)
     {
         this->nombreMaxAssistant = nombreMaxAssistant;
         this->nb = 0;
     }
//        EluNormal(const EluNormal & E)
//        {
//                this->id = E.id;
//                this->nom = E.nom;
//                this->prenom = E.prenom;
//                this->compteBancaire = E.compteBancaire;
//        }
      ~EluNormal()
      {
          delete date;
      }

        void affiche()
        {
            Personne::affiche();
            cout << "\t\t\t\t\t\t\tNombre d'assistant : " << this->nombreMaxAssistant << endl;
            this->date->affiche();
            cout << "\t\t\t\t\t\t\t***************"<< endl;
        }
        void afficheAssistants()
         {
            for(int i = 0; i < this->nb; i++)
           {
              ListeAssistant[i]->afficheAssistant();
           }
         }
       bool afficheUnAssistant(string id, int* indice)
       {
            for(int i(0); i < nb; i++)
            {
             if(ListeAssistant[i]->verifi_id(id))
             {    (*indice) = i; // pour reutiliser l'indice ailleur
                     // les parametre par defaut ne marche pas avec les pointeur
                      //l'orsqu'on ne transmet rien le pointeur qui pointe sur rien ne peut pas
                      // stocker la valeur de quelque chose
                  ListeAssistant[i]->afficheAssistant();
                 return false;
             }
            }
          return true;
       }
    void modifiNomAssistant(string nom, int indice)
    {
        ListeAssistant[indice]->set_nom(nom);
         cout << "Nom modifier avec succes " << endl;
    }
    void modifiPrenomAssistant(string prenom, int indice)
    {
       ListeAssistant[indice]->set_prenom(prenom);
        cout << "Prenom modifier avec succes " << endl;
    }
    bool modifiCodeAssistant(string id, int indice)
    {
       for(int i(0); i < nb; i++)
       {
           if(ListeAssistant[i]->verifi_id(id))
           {
               cout << "Desoler ce code existe deja " << endl;
               return true;
           }
       }
       ListeAssistant[indice]->set_id(id);
        cout << "Code modifier avec succes " << endl;
       return false;
    }
    bool embaucher(Personne *a)
    {

       if((EluNormal::TAILLe <= this->nb) or (this->nombreMaxAssistant <= nb))
         {
            cout << "Plus de place pour les assistant "<< endl;
            return true;
         }
        for(int i(0); i < this->nb; i++)
        {
            if(this->ListeAssistant[i]->verifi_id(a->get_id()))
            {
            cout << "Ce code existe deja " << endl;
            return true;
            }
        }
          this->ListeAssistant[nb] = a;
//         delete [] ListeAssistant[nb];
          nb++;
         cout<<"Assistant ajouter avec succes " << endl;
         return false;
    }

        bool licencier(string id)
      {
        int pos = -1;
        for(int i(0); i < this->nb; i++)
        {
            if(this->ListeAssistant[i]->get_id() == id)
            {
                pos = i;
                break;
            }
        }
        if((pos == -1))
        {
            cout << "Assistant introuvable " << endl;
            return true;
        }
        for(int i(pos); i < this->nb - 1; i++)
        {
            this->ListeAssistant[i] = this->ListeAssistant[i + 1];
        }
        this->nb--;
        cout << "Assistant virer avec succes " << endl;
        return true;
    }
    void trierAssistant(void)
    {
        bool trier = false;
        Personne *p = NULL;
        int nbcopie = this->nb;
        while(!trier)
        {
            trier = true;
            for(int i(0); i < (nbcopie - 1); i++)
            {
                if(this->ListeAssistant[i]->get_nom() > this->ListeAssistant[i + 1]->get_nom())
                {
                    p = this->ListeAssistant[i];
                    this->ListeAssistant[i] = this->ListeAssistant[i + 1];
                    this->ListeAssistant[i + 1] =  p;
                    trier = false;
                }else if(this->ListeAssistant[i]->get_nom() == this->ListeAssistant[i + 1]->get_nom() && this->ListeAssistant[i]->get_prenom() > this->ListeAssistant[i + 1]->get_prenom())
                {
                    p = this->ListeAssistant[i];
                    this->ListeAssistant[i] = this->ListeAssistant[i + 1];
                    this->ListeAssistant[i + 1] =  p;
                    trier = false;
                }
            }
            nbcopie--;
        }
    }
    bool faireDotationAvecLeCompte(double somme)
    {
        if(Personne::compteBancaire < somme)
        {
          return true;
        }
        this->dotation(somme);
        Personne::compteBancaire -= somme;
        return false;
    }
    void dotation(double somme)
    {
        for(int i(0); i < this->nb; i++)
        {
            this->ListeAssistant[i]->addSous(somme / this->nb);
        }
        cout << "Dotation distribuer avec succes " << endl;
    }

//        for(int i = 0 ; i < this->nb; i++)
//        {
//         delete [] ListeAssistant[i];
//        }
};

#endif // ELUNORMAL_H_INCLUDED
