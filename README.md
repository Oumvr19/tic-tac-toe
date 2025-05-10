# 🎮 Morpion (Tic-Tac-Toe) en C++ (Terminal)

Un petit jeu de morpion codé en C++ pour jouer directement dans ton terminal.  
Tu peux jouer contre un ami ou contre l’ordinateur, consulter les règles, voir les positions de chaque case, et suivre le score !

---

## 🔹 Fonctionnalités

1. **Menu principal**  
   - **1 – Jouer** : ouvre le sous-menu pour choisir ton mode de jeu  
   - **2 – Règles du jeu** : affiche les règles et fait une pause jusqu’à ce que tu appuies sur Entrée  
   - **3 – Positions de la grille** : montre la correspondance case ↔ numéro (1 à 9)  
   - **4 – Quitter** : termine le programme  

2. **Sous-menu “Jouer”**  
   - **1 – Contre un ami**  
   - **2 – Contre l’ordinateur**  
   - **3 – Retour au menu principal**  

3. 📋 **Affichage de la grille**  
   - L’écran est nettoyé (`system("clear")`) à chaque tour pour donner l’impression d’une grille unique qui se met à jour.  

4. ⏱️ **Pause écran**  
   - À chaque étape importante (règles, scores, erreurs), le jeu t’invite à “Appuyez sur une touche pour continuer…” grâce à la fonction `pause()`.  

5. ✅ **Vérifications et erreurs**  
   - Le programme vérifie si tu as choisi une case valide (1–9) et si elle est libre, sinon il affiche un message d’erreur et te redemande.  

6. 🏆 **Scores**  
   - Le score des deux joueurs est conservé et affiché à chaque victoire ou match nul.  

---

## 🚀 Installation & Compilation

1. Place `tictactoe.cpp` dans un dossier.  
2. Ouvre un terminal à cet emplacement.  
3. Tape la commande suivante pour compiler :

   ```bash
   g++ -std=c++11 -o morpion tictactoe.cpp
