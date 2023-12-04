#include "declaration.h"
int main()
{
 cout << "Date de compilation : " << __DATE__ << endl;
 cout << "Fichier compiler : " << __FILE__ << endl;
 anneeActuel();
menu:  menuGeneral();
       cin>>ch;
       choix = controleEntier(ch);
       if(choix == 0 or choix < 1 or choix > 8)
       {
           position(50, 11);cout<<"Faite un choix valide " << endl;
           netoyer();
           goto menu;
       }
       switch(choix)
       {
       case 1:
       system("cls");
    menuc:  menuCategorie();
       cin>>ch;
       choix = controleEntier(ch);
       if(choix == 0 or choix < 1 or choix > 5)
       {
           position(50, 11);cout<<"Faite un choix valide " << endl;
           netoyer();
           goto menuc;
       }
       switch(choix)
       {
       case 1:// Elu normal
        system("cls");
          position(50, 4); cout << "Ajout d'un elu normal " << endl;
    code: position(50, 5); cout << "Code sans espace : ";
          cin>>id;
        for(int i(0); i < nb; i++ )
        {
            if(listeElus[i]->verifi_id(id))
            {
                system("cls");
                position(50, 5);cout << "Le code " << id << " existe deja " << endl;
          rq:   position(50, 6); cout << "Tapez 1 pour ressayer ou 2 pour le menu des Elus : ";
                cin>>ch;
                choix = controleEntier(ch);
               if(choix == 0 or choix < 1 or choix > 2)
               {
                   position(50, 11);cout<<"Faite un choix valide " << endl;
                   netoyer();
                   goto rq;
               }

               if(choix == 1)
                {   system("cls");
                    goto code;
                }else
                {
                 system("cls");
                  goto menuc;
                }


            }
        }
       videBuffer();
       position(50, 6); cout << "Nom : "; getline(cin, nom);
       position(50, 7); cout << "Prenom : "; getline(cin, prenom);
    na: position(50, 8); cout << "Nombre maximun d'assistant: "; cin>>ch;
       nombreAssistant = controleEntier(ch);
       if(nombreAssistant == 0)
       {   system("cls");
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto na;
       }
      jrn: position(50, 9);cout << "Jour de naissance : ";
           cin>>ch;
           jour = controleEntier(ch);
         if(jour == 0)
        {  system("cls");
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto jrn;
        }
         moin: position(50, 10);cout << "Mois de naissance : ";
         cin>>ch;
         mois = controleEntier(ch);
         if(mois == 0)
        {  system("cls");
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto moin;
        }
        if(controleDateJour(jour, mois))
        {  system("cls");
           position(50, 11);cout<<"jour ou mois invalide" << endl;
           netoyer();
           goto moin;
        }
          ann: position(50, 11);cout << "Annee de naissance : ";
          cin>>ch;
         annee = controleEntier(ch);
         if(annee == 0)
        {  system("cls");
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto ann;
        }

        En = new EluNormal(id, nom, prenom, nombreAssistant, jour, mois, annee);
        listeElus[nb] = En;
        nb++;
        system("cls");
        position(50, 5); cout << "Elu normal ajouter avec succes " << endl;
        netoyer();
        goto menuc;

       case 2: // ajout d'un elu mafieux
          system("cls");
          position(50, 4); cout << "Ajout d'un elu mafieux " << endl;
    code1: position(50, 5); cout << "Code sans espace : ";
          cin>>id;
        for(int i(0); i < nb; i++ )
        {
            if(listeElus[i]->verifi_id(id))
            {
                system("cls");
                position(50, 5);cout << "Le code " << id << " existe deja " << endl;
          rq1:   position(50, 6); cout << "Tapez 1 pour ressayer ou 2 pour le menu des Elus : ";
                cin>>ch;
                choix = controleEntier(ch);
               if(choix == 0 or choix < 1 or choix > 2)
               {
                   position(50, 11);cout<<"Faite un choix valide " << endl;
                   netoyer();
                   goto rq1;
               }

               if(choix == 1)
                {   system("cls");
                    goto code1;
                }
               else if (choix == 2)
               {
                system("cls");
                  goto menuc;
               }

            }
        }
       videBuffer();
       position(50, 6); cout << "Nom : "; getline(cin, nom);
       position(50, 7); cout << "Prenom : "; getline(cin, prenom);
    na1: position(50, 8); cout << "Nombre maximun d'assistant: "; cin>>ch;
       nombreAssistant = controleEntier(ch);
       if(nombreAssistant == 0)
       {
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto na1;
       }
       jrnm: position(50, 9);cout << "Jour de naissance : ";
           cin>>ch;
           jour = controleEntier(ch);
         if(jour == 0)
        {  system("cls");
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto jrnm;
        }
         moinm: position(50, 10);cout << "Mois de naissance : ";
         cin>>ch;
         mois = controleEntier(ch);
         if(mois == 0)
        {  system("cls");
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto moinm;
        }
        if(controleDateJour(jour, mois))
        {  system("cls");
           position(50, 11);cout<<"jour ou mois invalide" << endl;
           netoyer();
           goto moinm;
        }
          annm: position(50, 11);cout << "Annee de naissance : ";
          cin>>ch;
         annee = controleEntier(ch);
         if(annee == 0)
        {  system("cls");
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto annm;
        }

        Em = new EluMafieux(id, nom, prenom, nombreAssistant, jour, mois, annee);
        listeElus[nb] = Em;
        nb++;
        system("cls");
        position(50, 5); cout << "Elu mafieux ajouter avec succes " << endl;
        netoyer();
        goto menuc;

       case 3: // ajout d'un elu Escro
          system("cls");
          position(50, 4); cout << "Ajout d'un elu Escro " << endl;
    code2: position(50, 5); cout << "Code sans espace : ";
          cin>>id;
        for(int i(0); i < nb; i++ )
        {
            if(listeElus[i]->verifi_id(id) == true)
            {
                system("cls");
                position(50, 5);cout << "Le code " << id << " existe deja " << endl;
          rq2:  position(50, 6); cout << "Tapez 1 pour ressayer ou 2 pour le menu des Elus : ";
                cin>>ch;
                choix = controleEntier(ch);
               if(choix == 0 or choix < 1 or choix > 2)
               {
                   position(50, 11);cout<<"Faite un choix valide " << endl;
                   netoyer();
                   goto rq2;
               }

               if(choix == 1)
                {   system("cls");
                    goto code2;
                }
               else
               {
                system("cls");
                  goto menuc;
               }

            }
        }
       videBuffer();
       position(50, 6); cout << "Nom : "; getline(cin, nom);
       position(50, 7); cout << "Prenom : "; getline(cin, prenom);
    na2: position(50, 8); cout << "Nombre maximun d'assistant: "; cin>>ch;
       nombreAssistant = controleEntier(ch);
       if(nombreAssistant == 0)
       {
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto na2;
       }
       jrne: position(50, 9);cout << "Jour de naissance : ";
           cin>>ch;
           jour = controleEntier(ch);
         if(jour == 0)
        {  system("cls");
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto jrne;
        }
         moine: position(50, 10);cout << "Mois de naissance : ";
         cin>>ch;
         mois = controleEntier(ch);
         if(mois == 0)
        {  system("cls");
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto moine;
        }
        if(controleDateJour(jour, mois))
        {  system("cls");
           position(50, 11);cout<<"jour ou mois invalide" << endl;
           netoyer();
           goto moine;
        }
          anne: position(50, 11);cout << "Annee de naissance : ";
          cin>>ch;
         annee = controleEntier(ch);
         if(annee == 0)
        {  system("cls");
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto anne;
        }

        Ees = new EluEscro(id, nom, prenom, nombreAssistant, jour, mois, annee);
        listeElus[nb] = Ees;
        nb++;
        system("cls");
        position(50, 5); cout << "Elu Escro ajouter avec succes " << endl;
        netoyer();
        goto menuc;
       case 4: // ajout d'elu econome
          system("cls");
          position(50, 4); cout << "Ajout d'un elu Econome " << endl;
    code3: position(50, 5); cout << "Code sans espace : ";
          cin>>id;
        for(int i(0); i < nb; i++ )
        {
            if(listeElus[i]->verifi_id(id))
            {
                system("cls");
                position(50, 5);cout << "Le code " << id << " existe deja " << endl;
          rq3:  position(50, 6); cout << "Tapez 1 pour ressayer ou 2 pour le menu des Elus : ";
                cin>>ch;
                choix = controleEntier(ch);
               if(choix == 0 or choix < 1 or choix > 2)
               {
                   position(50, 11);cout<<"Faite un choix valide " << endl;
                   netoyer();
                   goto rq3;
               }

               if(choix == 1)
                {   system("cls");
                    goto code3;
                }
                else
               {
                system("cls");
                  goto menuc;
               }

            }
        }
       videBuffer();
       position(50, 6); cout << "Nom : "; getline(cin, nom);
       position(50, 7); cout << "Prenom : "; getline(cin, prenom);
    na3: position(50, 8); cout << "Nombre maximun d'assistant: "; cin>>ch;
       nombreAssistant = controleEntier(ch);
       if(nombreAssistant == 0)
       {
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto na3;
       }

       jrnee: position(50, 9);cout << "Jour de naissance : ";
           cin>>ch;
           jour = controleEntier(ch);
         if(jour == 0)
        {  system("cls");
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto jrnee;
        }
         moinee: position(50, 10);cout << "Mois de naissance : ";
         cin>>ch;
         mois = controleEntier(ch);
         if(mois == 0)
        {  system("cls");
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto moinee;
        }
        if(controleDateJour(jour, mois))
        {  system("cls");
           position(50, 11);cout<<"jour ou mois invalide" << endl;
           netoyer();
           goto moinee;
        }
          annee: position(50, 11);cout << "Annee de naissance : ";
          cin>>ch;
         annee = controleEntier(ch);
         if(annee == 0)
        {  system("cls");
           position(50, 11);cout<<"Enter un entier" << endl;
           netoyer();
           goto annee;
        }
        Eec = new EluEconome(id, nom, prenom, nombreAssistant, jour, mois, annee);
        listeElus[nb] = Eec;
        nb++;
        system("cls");
        position(50, 5); cout << "Elu Econome ajouter avec succes " << endl;
        netoyer();
        goto menuc;
       case 5:
        system("cls");
        goto menu;
       }// fin switch categorie

       case 2: //liste des elu
           system("cls");
           if(nb == 0)
           {
            position(50, 2);cout << "Pas d'elu" << endl;
            netoyer();
            goto menu;
           }
           menuAffiche: sousMenuAffichage();
               cin>>ch;
               choix = controleEntier(ch);
               if(choix == 0 or choix < 1 or choix > 3)
               {
                   position(50, 11);cout<<"Faite un choix valide " << endl;
                   netoyer();
                   goto menuAffiche;
               }
               switch(choix)
               {
             case 1: // par categori
                 system("cls");
                while(cpt <= 3)
               {
                switch(cpt)
                {
                    case 0:
                        cout << "\t\t\t\t\t\t\tLes elus normaux" << endl;
                        type = typeid(*En).name();
                        break;
                    case 1:
                        cout << "\t\t\t\t\t\t\tLes elus maficuex" << endl;
                        type = typeid(*Em).name();
                        break;
                    case 2:
                        cout << "\t\t\t\t\t\t\tLes elus escro" << endl;
                        type = typeid(*Ees).name();
                        break;
                    case 3:
                        cout << "\t\t\t\t\t\t\tLes elus econome" << endl;
                        type = typeid(*Eec).name();
                        break;
                }
                for(int i(0); i < nb; i++) if(typeid(*listeElus[i]).name() == type)
                                            {
                                             listeElus[i]->affiche();
                                             cout << "\t\t\t\t\t\t\t"<<typeid(*listeElus[i]).name()<< endl;
                                             cout << "\t\t\t\t\t\t\t***********************" << endl;
                                            }
            cpt++;
          }
            netoyer();
            cpt = 0;
            goto menuAffiche;
                case 2:
                    system("cls");
                    for(int i(0); i < nb; i++)
                    {
                     listeElus[i]->affiche();
                     cout << "\t\t\t\t\t\t\t***********************" << endl;
                    }
            netoyer();
            goto menuAffiche;
                case 3:
                  system("cls");
                  goto menu;
        }// fin affichage
        case 3: // Gestion des elus
            system("cls");
           if(nb == 0)
           {
            position(50, 2);cout << "Pas d'elu" << endl;
            netoyer();
            goto menu;
           }
           position(50, 2); cout << "Code de l'elu : ";
           cin>>id;
           for(int i(0); i < nb; i++)
           {
               if(listeElus[i]->verifi_id(id))
               {
                 pos = i;
                 break;
               }
           }
           if(pos == -1)
           {
               cout << "Desoler cet elu n'existe pas " << endl;
               netoyer();
               goto menu;
           }
            system("cls");
            ge:  gestionElu();
            cin>>ch;
             choix = controleEntier(ch);
           if(choix == 0 or choix < 1 or choix > 9)
           {
               position(50, 11);cout<<"Faite un choix valide " << endl;
               netoyer();
               goto ge;
           }
           switch(choix)
           {
           case 1: // embaucher un Assistant
            system("cls");
            position(50, 2);cout << "Nom assistant : "; cin>>nom;
            videBuffer();
            position(50, 3);cout << "Prenom assistant : "; getline(cin, prenom);
            position(50, 4);cout << "Id assistant : "; getline(cin, id);
            assistant = new EluNormal(id, nom, prenom);
            if(listeElus[pos]->embaucher(assistant))
            {
                netoyer();
                goto ge;
            }
            yaAssistant = true;
            netoyer();
            goto ge;
           case 2: // licencier un assistant
           system("cls");
           if(!yaAssistant)
           {
               position(50, 2); cout << "Auccun assistant n'es embaucher " << endl;
               netoyer();
               goto ge;
           }
           position(50, 2);cout << "Id de l'assistant a licencier : "; cin>>id;
           if(listeElus[pos]->licencier(id))
           {
                netoyer();
                goto ge;
           }
            netoyer();
            goto ge;
           case 3: // Faire une dotation par le compte
            system("cls");
             if(!yaAssistant)
           {
               position(50, 2); cout << "Auccun assistant n'es embaucher " << endl;
               netoyer();
               goto ge;
           }
           dot: position(50, 2);cout << "Montant a distrubier aux assistant : "; cin>>ch;
           choix = controleEntier(ch);
            if(choix == 0 or choix < 0)
            {
                position(50, 3);cout << "Entrez une valeure numerique : " << endl;
                cdot:  position(50, 4); cout << "Tapez 1 pour ressayer ou 2 pour le menu gestion : ";
                cin>>ch;
                choix = controleEntier(ch);
               if(choix == 0 or choix < 1 or choix > 2)
               {   system("cls");
                   position(50, 11);cout<<"Faite un choix valide " << endl;
                   netoyer();
                   goto cdot;
               }
               system("cls");
               if(choix == 1)
               {
                goto dot;
               }
               else
               {
                   goto ge;
               }
            }
             if(listeElus[pos]->faireDotationAvecLeCompte(choix))
             {
                 system("cls");
                 position(50, 2); cout << "Vous n'avez pas ce montant " << endl;
             }
             netoyer();
             goto ge;
           case 4: // Faire une dotation sans le compte
            system("cls");
           if(!yaAssistant)
           {
               position(50, 2); cout << "Auccun assistant n'es embaucher " << endl;
               netoyer();
               goto ge;
           }
           scmpt: position(50, 2);cout << "Montant a distrubier aux assistant : "; cin>>ch;
           choix = controleEntier(ch);
            if(choix == 0 or choix < 0)
            {
                position(50, 3);cout << "Entrez une valeure numerique : " << endl;
                csc:  position(50, 4); cout << "Tapez 1 pour ressayer ou 2 pour le menu gestion : ";
                cin>>ch;
                choix = controleEntier(ch);
               if(choix == 0 or choix < 1 or choix > 2)
               {   system("cls");
                   position(50, 11);cout<<"Faite un choix valide " << endl;
                   netoyer();
                   goto csc;
               }
               system("cls");
               if(choix == 1)
               {
                goto scmpt;
               }
               else
               {
                   goto ge;
               }
            }
             listeElus[pos]->dotation(choix);
             netoyer();
             goto ge;
           case 5:// Faire un depot
            system("cls");
           adds: position(50, 2);cout << "Montant a ajouter dans le compte : "; cin>>ch;
            choix = controleEntier(ch);
            if(choix == 0 or choix < 0)
            {
                position(50, 3);cout << "Entrez une valeure numerique : " << endl;
                c:  position(50, 4); cout << "Tapez 1 pour ressayer ou 2 pour le menu gestion : ";
                cin>>ch;
                choix = controleEntier(ch);
               if(choix == 0 or choix < 1 or choix > 2)
               {
                   position(50, 11);cout<<"Faite un choix valide " << endl;
                   netoyer();
                   goto c;
               }
               system("cls");
               if(choix == 1)
               {
                goto adds;
               }
               else
               {
                   goto ge;
               }
            }
            listeElus[pos]->addSous(choix);
            position(50, 4);cout << "Dépôt effectuer avec succes : " << endl;
            netoyer();
            goto ge;
           case 6: // Voir tout les assistants
               system("cls");
               if(!yaAssistant)
               {   system("cls");
                   position(50, 2); cout << "Auccun assistant n'es embaucher " << endl;
                   netoyer();
                   goto ge;
               }
               listeElus[pos]->afficheAssistants();
               netoyer();
               goto ge;
           case 7: // voir un assistant
            system("cls");
             if(!yaAssistant)
               {   system("cls");
                   position(50, 2); cout << "Auccun assistant n'es embaucher " << endl;
                   netoyer();
                   goto ge;
               }
            position(50, 2); cout << "Code de l'assistant : ";
            cin>>id;
            if(listeElus[pos]->afficheUnAssistant(id, &cpt))
            {
                position(50, 3); cout << "Desoler cet assistant n'existe pas " << endl;
                netoyer();
                goto ge;
            }
            netoyer();
            goto ge;
           case 8: // modifier un assistant
               system("cls");
                if(!yaAssistant)
               {   system("cls");
                   position(50, 2); cout << "Auccun assistant n'es embaucher " << endl;
                   netoyer();
                   goto ge;
               }
               position(50, 2); cout << "Code de l'assistan : ";cin>>id;
               if(listeElus[pos]->afficheUnAssistant(id, &cpt))
               {
                  position(50, 3); cout << "Desoler cet assistant n'existe pas " << endl;
                  netoyer();
                  goto ge;
               }
               modif: modication();
               cin>>ch;
               choix = controleEntier(ch);
               if(choix == 0 or choix < 1 or choix > 4)
               {
                   system("cls");
                   position(50, 11);cout<<"Faite un choix valide " << endl;
                   netoyer();
                   goto modif;
               }
               switch(choix)
               {
               case 1:
                system("cls");
                position(50, 2); cout << "Nouveau nom : ";cin>>nom;
                listeElus[pos]->modifiNomAssistant(nom, cpt);
                netoyer();
                goto modif;
               case 2:
                system("cls");
                position(50, 2); cout << "Nouveau Prenom : ";cin>>prenom;
                listeElus[pos]->modifiPrenomAssistant(prenom, cpt);
                netoyer();
               goto modif;
               case 3:
               system("cls");
               position(50, 2); cout << "Nouveau code : ";cin>>id;
               if(listeElus[pos]->modifiCodeAssistant(id, cpt))
               {
                   netoyer();
                   goto modif;
               }
               netoyer();
               goto modif;
               case 4:
                system("cls");
                goto ge;
               }// fin modification Assistant
            case 9:
                system("cls");
                listeElus[pos]->trierAssistant();
                position(50, 2);cout << "Les assistants sont tries avec succes " << endl;
                netoyer();
                goto ge;
            case 10: // retour menu gestion
            system("cls");
            goto menu;
           }// fin gestion
            case 4: // supprimer un elu
            system("cls");
            if(nb == 0)
           {
            position(50, 2);cout << "Pas d'elu" << endl;
            netoyer();
            goto menu;
           }
           position(50, 2); cout << "Code de l'elu : ";
           cin>>id;
           for(int i(0); i < nb; i++) if(listeElus[i]->verifi_id(id))
                                       {
                                         pos = i;
                                         break;
                                       }
           if(pos == -1)
           {
               cout << "Desoler cet elu n'existe pas " << endl;
               netoyer();
               goto menu;
           }
               for(int i(pos); i < nb - 1; i++) listeElus[i] = listeElus[i + 1];
               nb--;
               position(50, 4); cout << "Elu supprimer avec succes " << endl;
               netoyer();
               goto menu;

            case 5: // trier les elu par ordre aphabetique des nom si egalite par prenom
                system("cls");
               if(nb == 0)
               {
                position(50, 2);cout << "Pas d'elu" << endl;
                netoyer();
                goto menu;
               }
                 cpt = nb;
                trier = false;
              while(!trier)
              {
                  trier = true;
                  for(int i(0); i < cpt - 1; i++)
                  {
                      if(listeElus[i]->get_nom() > listeElus[i + 1]->get_nom())
                      {
                        p = listeElus[i];
                        listeElus[i] = listeElus[i + 1];
                        listeElus[i + 1] = p;
                        trier = false;
                      }else if(listeElus[i]->get_nom() == listeElus[i + 1]->get_nom())
                      {
                        if(listeElus[i]->get_prenom() > listeElus[i + 1]->get_prenom())
                        {
                           p = listeElus[i];
                           listeElus[i] = listeElus[i + 1];
                           listeElus[i + 1] = p;
                           trier = false;
                        }

                      }
                  }
                  cpt--;
              }
              position(50, 4); cout << " Tri effectuer avec succes " << endl;
              netoyer();
              goto menu;

            case 6:
             system("cls");
               if(nb == 0)
               {
                position(50, 2);cout << "Pas d'elu" << endl;
                netoyer();
                goto menu;
               }
            for(int i(0); i < nb; i++)
            {
                 listeElus[i]->affiche();
                 cout << "\t\t\t\t\t\t\t*****************" << endl;
                if(yaAssistant) listeElus[i]->afficheAssistants();
                else cout << "\t\t\t\t\t\t\tCet elu n'as pas d'assistant " << endl;
                cout << "\t\t\t\t\t\t\t*****************" << endl;
            }
           netoyer();
           goto menu;
            case 7:
                imin = 0;
                imax = nb;
                im = (imin + imax) / 2;
               system("cls");
               if(nb == 0)
               {
                position(50, 2);cout << "Pas d'elu" << endl;
                netoyer();
                goto menu;
               }
            position(50, 2); cout << "Code de l'elu : ";
            cin>>id;

//            for(int i(0); i < nb; i++) if(listeElus[i]->verifi_id(id))
//                                        {
//                                          pos = i;
//                                          break;
//                                        }
              while(j < nb && !listeElus[im]->verifi_id(id))
              {
                  if(listeElus[im]->get_id() > id)
                  {
                      imax = im - 1;
                      im = (imin + imax) / 2;
                  }else if(listeElus[im]->get_id() < id)
                  {
                      imin = im + 1;
                      im = (imin + imax) / 2;
                  }
                  j++;
              }
              if(j < nb)
              {
                  pos = im;
              }
               if((pos == -1))
               {
                   system("cls");
                   position(50, 2);cout << "Cet Elu n'existe pas " << endl;
                   netoyer();
                   goto menu;
               }
             listeElus[pos]->affiche();
             netoyer();
             goto menu;
            case 8:
                system("cls");
                position(50, 5); cout << "Merci d'avoir utiliser notre application" << endl;
                exit(0);
}// switch general

        for(int i(0); i < nb; i++)
        {
         delete [] listeElus[i];
        }
        delete p;
    return 0;
}
