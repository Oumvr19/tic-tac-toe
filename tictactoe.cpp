// programme tic-tac-toe : 
#include<iostream>
#include<vector>
#include<limits>
using namespace std; 
// fonction systeme : 
void pause()
{
    cout<<"Appuyez sur une touche pour continuer ...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}
// fonction affectation  :
void affectercase(vector<vector<char>>& grille , int position , char symbole)
{
    // affecter le symbole a la case de la grille
    switch (position)
    {
        case 1: grille[0][0] = symbole; break;
        case 2: grille[0][1] = symbole; break;
        case 3: grille[0][2] = symbole; break;
        case 4: grille[1][0] = symbole; break;
        case 5: grille[1][1] = symbole; break;
        case 6: grille[1][2] = symbole; break;
        case 7: grille[2][0] = symbole; break;
        case 8: grille[2][1] = symbole; break;
        case 9: grille[2][2] = symbole; break;
    }
}
void affecterscore(vector<int>& score, bool tour)
{
    if (tour)
    {

        score[0]++;
    }
    else
    {
        score[1]++;
    }
}
void effacerGrille(vector<vector<char>>& grille)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            grille[i][j] = ' ';
        }
    }
}
// fonction qui affiche les menu du jeu : 
void afficherMenu()
{
    system("clear");
    cout<<"========================= Morpion ======================"<<endl;
    cout<<"Bienvenue dans le jeu du morpion !"<<endl;
    cout<<"1- Jouer"<<endl;
    cout<<"2- regles du jeu"<<endl;
    cout<<"3 - Affichage des positions de la grille"<<endl;
    cout<<"4- Quitter"<<endl;
    cout<<"========================================================="<<endl;
    cout<<"Veuillez choisir une option : ";
}
void MenuJouer()
{
    system("clear");
    cout<<"========================= Morpion ======================"<<endl;
    cout<<"veuillez selectionner la partie que vous voulez commencer !"<<endl;
    cout<<"1- Jouer contre un ami"<<endl;
    cout<<"2- Jouer contre l'ordinateur"<<endl;
    cout<<"3- Retour au menu principal"<<endl;
    cout<<"========================================================="<<endl;
    cout<<"Veuillez choisir une option : ";

}
// fonction messages du jeu : 
void ReglesJeu()
{
    system("clear");
    cout<<"========================= Morpion ======================"<<endl;
    cout<<"Le but du jeu est de former une ligne de trois symboles identiques."<<endl;
    cout<<"Les joueurs jouent a tour de role."<<endl;
    cout<<"Le premier joueur a placer trois symboles identiques gagne."<<endl;
    cout<<"Si la grille est remplie sans gagnant, le jeu est declare egal."<<endl;
    cout<<"Les joueurs peuvent choisir de jouer contre un ami ou contre l'ordinateur."<<endl;
    cout<<"=========================================================="<<endl;
}
void positionGrille()
{
    system("clear");
    cout<<"========================= Morpion ======================"<<endl;
    cout<<"Voici les positions de la grille : "<<endl;
    cout<<"---------"<<endl;
    cout<<"1 | 2 | 3 "<<endl;
    cout<<"---------"<<endl;
    cout<<"4 | 5 | 6 "<<endl;
    cout<<"---------"<<endl;
    cout<<"7 | 8 | 9 "<<endl;
    cout<<"---------"<<endl;
    cout<<"========================================================="<<endl;
}
void ErreurchoixMenu()
{
    system("clear");
    cout<<"========================= Morpion ======================"<<endl;
    cout<<"Erreur : choix de menu incorrect !"<<endl;
    cout<<"Veuillez choisir une option valide !"<<endl;
    cout<<"========================================================="<<endl;
}
void ErreurchoixGrille()
{
    system("clear");
    cout<<"================ Morpion ======================"<<endl;
    cout<<"Erreur : choix de position incorrect !"<<endl;
    cout<<"Veuillez choisir une position valide !"<<endl;
    cout<<"================================================="<<endl;
}
void ErreurchoixGrilleRemplie()
{
    system("clear");
    cout<<"Erreur : case deja remplie !"<<endl;
    cout<<"Veuillez choisir une case vide !"<<endl;
}
void nomJoeur1(string& pseudo1) 
{
    system("clear");
    cout<<"========================= Morpion ======================"<<endl;
    cout<<"Veuillez entrer le nom du joueur 1 : ";
    cin>>pseudo1;
    cout<<"========================================================="<<endl;
}
void nomJoeur2(string& pseudo2) 
{
    system("clear");
    cout<<"========================= Morpion ======================"<<endl;
    cout<<"Veuillez entrer le nom du joueur 2 : ";
    cin>>pseudo2;
    cout<<"========================================================="<<endl;
}
void JoeurSymbole(string& pseudo1, string& pseudo2, vector<char>& symbole)
{
    system("clear");
    cout<<"========================= Morpion ======================"<<endl;
    cout<<pseudo1<<"  a pour symbole : "<<symbole[0]<<endl;
    cout<<pseudo2<<"  a pour symbole : "<<symbole[1]<<endl;
    cout<<"========================================================="<<endl;
}
void MessageTour(bool tour, string pseudo1, string pseudo2)
{
    system("clear");
    cout<<"========================= Morpion ======================"<<endl;
    if (tour)
    {
        cout<<pseudo1<<" a votre tour !"<<endl;
    }
    else
    {
        cout<<pseudo2<<" a votre tour !"<<endl;
    }
    cout<<"========================================================="<<endl;
}
void afficherGrille(vector<vector<char>>& grille)
{
    system("clear");
    cout<<"========================= Morpion ======================"<<endl;
    cout<<"---------"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<grille[i][j]<<" | ";
        }
        cout<<endl;
        cout<<"---------"<<endl;
    }
    cout<<"========================================================="<<endl;
}
void positionJouer(int& position)
{
    cout<<"Veuillez choisir une position entre 1 et 9 : ";
    cin>>position;
}
void affichergagnant(string pseudo1, string pseudo2, vector<int>& score)
{
    system("clear");
    cout<<"========================= Morpion ======================"<<endl;
    cout<<"Felicitation ! "<<pseudo1<<" a gagne !"<<endl;
    cout<<"Score : "<<pseudo1<<" : "<<score[0]<<" | "<<pseudo2<<" : "<<score[1]<<endl;
    cout<<"========================================================="<<endl;
}
void afficherEgalite(string pseudo1, string pseudo2, vector<int>& score)
{
    system("clear");
    cout<<"========================= Morpion ======================"<<endl;
    cout<<"Egalite !"<<endl;
    cout<<"Score : "<<pseudo1<<" : "<<score[0]<<" | "<<pseudo2<<" : "<<score[1]<<endl;
    cout<<"========================================================="<<endl;
}

// fonction verification : 
bool verifierGrilleRemplie(vector<vector<char>>& grille)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grille[i][j] == ' ')
            {
                return false;
            }
        }
    }
    return true;
}
bool verifierGagnant(vector<vector<char>>& grille, char symbole)
{
    // verifier les lignes :
    for (int i = 0; i < 3; i++)
    {
        if (grille[i][0] == symbole && grille[i][1] == symbole && grille[i][2] == symbole)
        {
            return true;
        }
    }
    // verifier les colonnes :
    for (int j = 0; j < 3; j++)
    {
        if (grille[0][j] == symbole && grille[1][j] == symbole && grille[2][j] == symbole)
        {
            return true;
        }
    }
    // verifier les diagonales :
    if (grille[0][0] == symbole && grille[1][1] == symbole && grille[2][2] == symbole)
    {
        return true;
    }
    if (grille[0][2] == symbole && grille[1][1] == symbole && grille[2][0] == symbole)
    {
        return true;
    }
    return false;
}
//verifier si la case est vide ou pas : 
bool verifierCaseVide(vector<vector<char>>& grille, int position)
{
    switch (position)
    {
        case 1: return grille[0][0] == ' ';
        case 2: return grille[0][1] == ' ';
        case 3: return grille[0][2] == ' ';
        case 4: return grille[1][0] == ' ';
        case 5: return grille[1][1] == ' ';
        case 6: return grille[1][2] == ' ';
        case 7: return grille[2][0] == ' ';
        case 8: return grille[2][1] == ' ';
        case 9: return grille[2][2] == ' ';
    }
    return false;
}

int main()
{
    // declaration de variable : 
    vector<vector<char>> grille(3, vector<char>(3, ' ')); ; 
    vector<char> symbole(2);
    symbole[0] = 'X'; // symbole du joueur 1
    symbole[1] = 'O'; // symbole du joueur 2
    char joueurActuel ;
    int action ; 
    int position ; 
    // debut du jeu : 
    while(true)
    {
        // afficher le menu : 
        afficherMenu();
        cin>>action;
        switch (action)
        {
            case 1://cas ou l'on joue :
               {
                do {
                    MenuJouer();          // affiche ton menu « Jouer »
                    cin >> action;        // on lit le choix de l’utilisateur
                
                    if (action < 1 || action > 3) {
                        ErreurchoixMenu(); // affiche un message d’erreur si le choix est invalide
                    }
                } while (action < 1 || action > 3);
                 // creation des score : 
                   vector<int> score(2, 0); // tableau de score pour les deux joueurs
                    switch(action)
                    {
                        // joue contre un amie
                        case 1 : 
                        {
                          //declartion des variables : 
                            string joueur1, joueur2; bool tour=true;
                         // demander les pseudo des joeurs :
                          nomJoeur1(joueur1);
                          nomJoeur2(joueur2);
                          JoeurSymbole(joueur1, joueur2, symbole);
                          // boucle de jeu : 
                           while(true)
                           {
                             // affichage du joeur qui doit jouer : 
                                MessageTour(tour, joueur1, joueur2);
                             // affichage de la grille : 
                                afficherGrille(grille);
                             // demander la position a jouer : 
                                positionJouer(position);
                                // verifier si la position est valide :
                                if (position < 1 || position > 9)
                                {
                                    ErreurchoixGrille();
                                    continue;
                                }
                                // verifier si la case est vide :
                                if (!verifierCaseVide(grille, position))
                                {
                                    ErreurchoixGrilleRemplie();
                                    continue;
                                }
                                // affecter le symbole au joueur :
                                affectercase(grille, position, symbole[tour]);
                                // verifier si le joueur a gagne :
                                if (verifierGagnant(grille, symbole[tour]))
                                {
                                    afficherGrille(grille);
                                    affecterscore(score, tour);
                                    affichergagnant(joueur1, joueur2, score);
                                    pause();
                                    // effacer la grille :
                                    effacerGrille(grille);
                                    break;
                                }
                                // verifier si la grille est remplie :
                                if (verifierGrilleRemplie(grille))
                                {
                                    afficherGrille(grille);
                                    afficherEgalite(joueur1, joueur2, score);
                                    pause();
                                    // effacer la grille :
                                    effacerGrille(grille);
                                    break;
                                }
                                // changer de joueur :
                                tour = !tour;

                           }
                        }   
                        break;
                        //jouer contre l'ordinateur 
                        case 2 : 
                        {
                           // declaration des variables : 
                           string joueur1;bool tour=true;
                            string joueur2="bot";
                            // demander le pseudo du joeur :
                            nomJoeur1(joueur1);
                            // afficher le symbole du joeur :
                            JoeurSymbole(joueur1,joueur2, symbole);
                            // boucle de jeu :
                            while(true)
                            {
                                // afficher le joeur qui doit jouer : 
                                MessageTour(tour, joueur1, joueur2);
                                // afficher la grille : 
                                afficherGrille(grille);
                                // demander la position a jouer si c'est le joeur 1 :
                                if (tour)
                                {
                                    positionJouer(position);
                                    // verifier si la position est valide :
                                    if (position < 1 || position > 9)
                                    {
                                        ErreurchoixGrille();
                                        continue;
                                    }
                                    // verifier si la case est vide :
                                    if (!verifierCaseVide(grille, position))
                                    {
                                        ErreurchoixGrilleRemplie();
                                        continue;
                                    }
                                }
                                else
                                {
                                    // jouer contre l'ordinateur : 
                                    position = rand() % 9 + 1; // generer un nombre aleatoire entre 1 et 9
                                    while (!verifierCaseVide(grille, position))
                                    {
                                        position = rand() % 9 + 1; // generer un nombre aleatoire entre 1 et 9
                                    }
                                

                                }
                                // affecter le symbole au joueur :
                                affectercase(grille, position, symbole[tour]);
                                // verifier si le joueur a gagne :
                                if (verifierGagnant(grille, symbole[tour]))
                                {
                                    afficherGrille(grille);
                                    affecterscore(score, tour);
                                    affichergagnant(joueur1, joueur2, score);
                                    // effacer la grille :
                                    effacerGrille(grille);
                                    pause();
                                    break;
                                }
                                // verifier si la grille est remplie :
                                if (verifierGrilleRemplie(grille))
                                {
                                    afficherGrille(grille);
                                    afficherEgalite(joueur1, joueur2, score);
                                    pause();
                                    // effacer la grille :
                                    effacerGrille(grille);
                                    break;

                                }
                                // changer de joueur :
                                tour = !tour;
                            }

                        }
                        break;
                        case 3 :  //retour au menue principal 
                        break;
                    }
               }
               break;
            case 2:// cas ou l'on affiche les regles du jeu :
                ReglesJeu();
                pause();
                break;
            case 3: // cas ou l'on affiche les positions de la grille :
                positionGrille();
                pause();
                break; 
            case 4:// cas ou l'on quitte le jeu :
                cout<<"Merci d'avoir joue !"<<endl;
                cout<<"A bientot !"<<endl;
                pause();
                return 0;
            default:
                ErreurchoixMenu();
                pause();
                break;
                
        }
    }

}