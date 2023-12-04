#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
#include <iostream>
using namespace std;
class Date
{
protected:
    int annee;
    int mois;
    int jour;
public:
    Date(int jour = 0, int mois = 0, int annee = 0)
    {
        this->annee = annee;
        this->mois = mois;
        this->jour = jour;
    }
    void affiche()
    {
        cout<< "\t\t\t\t\t\t\t Date de naissance : " << this->jour << "/" << this->mois << "/" << this->annee << endl;
    }
};
class Personne{
     public:
     Personne(string nom = "" , string prenom = "", string id = "", int jour = 0, int mois = 0, int annee = 0)
     {
     this->nom = nom;
     this->prenom = prenom;
     this->id = id;
     this->compteBancaire = 0;
     date = new Date(jour, mois, annee);
     }
     virtual ~Personne()
     {
         delete this;
     }
      void addSous(int montant = 0)
     {
        this->compteBancaire = this->compteBancaire + montant;
     }
      virtual void affiche()
      {
        cout << "\t\t\t\t\t\t\tId : " << this->id << endl;
        cout << "\t\t\t\t\t\t\tNom : " << this->nom << endl;
        cout << "\t\t\t\t\t\t\tPrenom : " << this->prenom << endl;
        cout << "\t\t\t\t\t\t\tCompte Bancaire : " << this->compteBancaire << endl;
      }
      void afficheAssistant()
      {
        cout << "\t\t\t\t\t\t\tId : " << this->id << endl;
        cout << "\t\t\t\t\t\t\tNom : " << this->nom << endl;
        cout << "\t\t\t\t\t\t\tPrenom : " << this->prenom << endl;
        cout << "\t\t\t\t\t\t\tCompte Bancaire : " << this->compteBancaire << endl;
        cout << "\t\t\t\t\t\t\t***************"<< endl;
      }
         virtual bool verifi_id(string id)
         {
          return (this->id == id);
         }
          virtual bool embaucher(Personne *p) = 0;
          virtual bool licencier(string) = 0;
          virtual void dotation(double) = 0;
          virtual bool faireDotationAvecLeCompte(double) = 0;
          virtual void afficheAssistants() = 0;
          virtual bool afficheUnAssistant(string, int*) = 0;
          virtual void modifiNomAssistant(string, int) = 0;
          virtual void modifiPrenomAssistant(string, int) = 0;
          virtual bool modifiCodeAssistant(string, int) = 0;
          virtual void trierAssistant(void) = 0;
          string get_id()
          {
            return this->id;
          }
          string get_nom()
          {
            return this->nom;
          }
          string get_prenom()
          {
            return this->prenom;
          }
          void set_id(string id)
          {
            this->id = id;
          }
          void set_nom(string nom)
          {
            this->nom = nom;
          }
          void set_prenom(string prenom)
          {
            this->prenom = prenom;
          }
         protected:
         string id;
         string nom;
         string prenom;
         double compteBancaire; // montant de son compte F
         Date *date;

 };


#endif // PERSONNE_H_INCLUDED
