# BSQ - Biggest Square

## Table des matières
1. [Objectif du programme](#objectif-du-programme)
2. [Format de la carte](#format-de-la-carte)
3. [Structure du projet](#structure-du-projet)
4. [Structures de données](#structures-de-données)
5. [Flux d'exécution](#flux-dexécution)
6. [Détail de chaque fonction](#détail-de-chaque-fonction)
7. [L'algorithme du plus grand carré (Programmation Dynamique)](#lalgorithme-du-plus-grand-carré)
8. [Exemple complet](#exemple-complet)
9. [Gestion des erreurs](#gestion-des-erreurs)

---

## Objectif du programme

Le but de **BSQ** (*Biggest Square*) est de trouver le **plus grand carré possible** sur une carte 2D, **sans toucher d'obstacles**.

- Le programme lit une carte depuis un fichier (ou depuis l'entrée standard `stdin`).
- Il identifie la plus grande zone carrée vide.
- Il remplace les caractères "vides" de cette zone par le caractère "plein" et affiche la carte modifiée.
- En cas d'égalité, on choisit le carré **le plus en haut**, puis **le plus à gauche**.

---

## Format de la carte

### Première ligne (entête)
Elle contient 4 informations séparées par des espaces :
```
<nombre_de_lignes> <caractère_vide> <caractère_obstacle> <caractère_plein>
```

Exemple :
```
9 . o B
```
- `9` → la carte fait 9 lignes
- `.` → caractère "vide"
- `o` → caractère "obstacle"
- `B` → caractère "plein" (utilisé pour dessiner la solution)

### Lignes suivantes
Elles représentent la carte, composée uniquement de caractères `vide` et `obstacle`.
Toutes les lignes doivent avoir **la même longueur**.

---

## Structure du projet

```
BSQ/
├── bsq.h        → définitions des structures et prototypes
├── bsq.c        → logique principale (lecture, algorithme, affichage)
├── main.c       → point d'entrée (gestion des arguments)
├── map.txt      → exemple de carte
└── subject.txt  → énoncé du sujet
```

---

## Structures de données

Définies dans `bsq.h:20-41` :

### `t_elements` — Informations de l'entête
```c
typedef struct s_elements {
    int  n_lines;   // nombre de lignes de la carte
    char empty;     // caractère représentant le vide
    char obstacle;  // caractère représentant un obstacle
    char full;      // caractère utilisé pour remplir la solution
} t_elements;
```

### `t_map` — La carte elle-même
```c
typedef struct s_map {
    char** grid;    // tableau de chaînes (lignes de la carte)
    int    width;   // largeur (en colonnes)
    int    height;  // hauteur (en lignes)
} t_map;
```

### `t_square` — Position et taille du plus grand carré
```c
typedef struct s_square {
    int size;  // taille du côté
    int i;     // ligne du coin haut-gauche
    int j;     // colonne du coin haut-gauche
} t_square;
```

---

## Flux d'exécution

```
main()
  │
  ├── argc == 1 → execute_bsq(stdin)
  │
  └── argc > 1  → pour chaque argument :
                    convert_file_pointer(argv[i])
                       └── fopen → execute_bsq(file) → fclose

execute_bsq(file)
  │
  ├── 1. loadElements()     → lit et valide l'entête
  ├── 2. loadMap()          → lit et valide la grille
  ├── 3. find_big_square()  → trouve le plus grand carré (DP)
  ├── 4. print_filled_square() → remplit et affiche
  └── 5. free_map()         → libère la mémoire
```

---

## Détail de chaque fonction

### `main` (`main.c:15`)
Point d'entrée. Deux modes :
- **Sans argument** : lit la carte depuis `stdin`.
- **Avec arguments** : chaque argument est un chemin de fichier carte. Entre deux cartes, on affiche une ligne vide.

En cas d'erreur, affiche `"map error\n"` sur `stderr`.

---

### `convert_file_pointer` (`bsq.c:243`)
Ouvre le fichier en lecture, appelle `execute_bsq()`, puis ferme le fichier.
Retourne `-1` si l'ouverture échoue.

---

### `execute_bsq` (`bsq.c:224`)
Orchestre toutes les étapes :
1. Lit l'entête (`loadElements`).
2. Charge la carte (`loadMap`).
3. Initialise un `t_square` vide.
4. Calcule le plus grand carré (`find_big_square`).
5. L'affiche rempli (`print_filled_square`).
6. Libère la mémoire (`free_map`).

---

### `loadElements` (`bsq.c:15`)
Lit la première ligne avec `fscanf("%d%c%c%c", ...)`.

**Validations effectuées :**
- `fscanf` doit avoir lu exactement 4 champs.
- `n_lines > 0`.
- Les 3 caractères doivent être **tous différents**.
- Chaque caractère doit être imprimable (entre `32` et `126` ASCII).

Retourne `-1` en cas de problème.

> ⚠️ Note : le `%c` consomme **n'importe quel caractère**, y compris les espaces. Le format `"%d%c%c%c"` lit donc directement : nombre, espace, vide, espace, obstacle, espace, plein... mais ici on lit le nombre puis 3 caractères. Comme les caractères sont séparés par des espaces dans l'entête, on récupère `' '`, `vide`, `' '` etc. — cela fonctionne car `fscanf` est utilisé en mode très permissif et la validation ASCII filtrera ensuite.

---

### `ft_substr` (`bsq.c:36`)
Copie une portion d'une chaîne (de `start` sur `len` caractères) dans une nouvelle allocation. Utilisé pour copier chaque ligne lue par `getline` dans la grille (sans le `\n` final).

---

### `free_map` (`bsq.c:56`)
Libère un tableau de chaînes terminé par `NULL` : libère chaque ligne, puis le tableau lui-même.

---

### `element_control` (`bsq.c:71`)
Vérifie qu'aucun caractère de la carte n'est **différent** du caractère vide ou du caractère obstacle. Si oui → carte invalide.

---

### `loadMap` (`bsq.c:88`)
Lit la grille ligne par ligne avec `getline()`.

**Étapes :**
1. Alloue `grid` de taille `height + 1` (la dernière entrée est `NULL` sentinelle pour `free_map`).
2. Consomme la fin de la première ligne (entête) avec un premier `getline`.
3. Pour chaque ligne attendue :
   - `getline` → lit la ligne.
   - Vérifie qu'elle se termine par `\n` (sinon → erreur).
   - Retire le `\n` et copie avec `ft_substr`.
   - Vérifie que toutes les lignes ont **la même largeur**.
4. Appelle `element_control` pour s'assurer qu'aucun caractère inattendu n'est présent.

---

### `find_min` (`bsq.c:161`)
Retourne le minimum de 3 entiers. Utilisé par l'algorithme DP.

---

### `find_big_square` (`bsq.c:172`)
**Cœur de l'algorithme.** Voir section dédiée [ci-dessous](#lalgorithme-du-plus-grand-carré).

---

### `print_filled_square` (`bsq.c:205`)
1. Modifie la grille pour remplacer le carré trouvé par le caractère `full`.
2. Affiche chaque ligne de la grille avec `fputs` + `\n`.

---

## L'algorithme du plus grand carré

C'est un classique de **programmation dynamique** (DP).

### Idée
On construit une matrice `matrix[i][j]` de la même taille que la carte. Chaque cellule contient :

> *La taille du plus grand carré dont le coin **bas-droit** se trouve en `(i, j)`.*

### Règles de remplissage

Pour chaque cellule `(i, j)` :

1. **Si c'est un obstacle** : `matrix[i][j] = 0` (aucun carré ne peut finir ici).
2. **Si c'est sur la première ligne ou la première colonne** : `matrix[i][j] = 1` (au mieux un carré 1x1).
3. **Sinon** :
   ```
   matrix[i][j] = 1 + min( matrix[i-1][j],      // haut
                           matrix[i-1][j-1],    // diagonale haut-gauche
                           matrix[i][j-1] )     // gauche
   ```

### Intuition
Pour qu'un carré de taille `k` se termine en `(i, j)`, il faut que les 3 voisins (haut, diagonale, gauche) puissent **chacun** terminer un carré d'au moins `k - 1`. Le **min** des trois + 1 donne le carré le plus grand possible.

### Mise à jour du meilleur résultat
À chaque cellule, si `matrix[i][j] > square->size`, on met à jour :
- `square->size = matrix[i][j]`
- `square->i = i - size + 1`  ← ligne du **coin haut-gauche**
- `square->j = j - size + 1`  ← colonne du **coin haut-gauche**

Comme on parcourt **de haut en bas et de gauche à droite** avec un test strict (`>` et non `>=`), on garde automatiquement le **premier** plus grand carré trouvé → celui qui est **le plus en haut, puis le plus à gauche**, conformément à l'énoncé.

### Complexité
- **Temps** : `O(height × width)`
- **Espace** : `O(height × width)` (matrice DP en VLA sur la pile)

---

## Exemple complet

### Entrée (`map.txt`)
```
9 . o B
...........................
....o......................
............o..............
...........................
....o......................
...............o...........
...........................
......o..............o.....
..o.......o................
```

### Sortie attendue
Le programme trouve un carré 7×7 et le remplit avec `B` :
```
.....BBBBBBB...............
....oBBBBBBB...............
.....BBBBBBBo..............
.....BBBBBBB...............
....oBBBBBBB...............
.....BBBBBBB...o...........
.....BBBBBBB...............
......o..............o.....
..o.......o................
```

### Compilation et exécution
```bash
cc -Wall -Wextra -Werror main.c bsq.c -o bsq
./bsq map.txt
# ou via stdin :
cat map.txt | ./bsq
```

---

## Gestion des erreurs

Le programme affiche `"map error"` sur `stderr` (puis `\n`) dans les cas suivants :

| Cas | Détecté par |
|-----|-------------|
| Entête mal formée (moins de 4 champs) | `loadElements` |
| `n_lines <= 0` | `loadElements` |
| Deux caractères identiques parmi vide/obstacle/plein | `loadElements` |
| Caractère non imprimable | `loadElements` |
| Fichier introuvable | `convert_file_pointer` |
| Ligne manquante | `loadMap` (`getline == -1`) |
| Ligne sans `\n` final | `loadMap` |
| Lignes de longueurs différentes | `loadMap` |
| Caractère inattendu dans la grille | `element_control` |
| Échec d'allocation mémoire | partout (`malloc` retourne `NULL`) |

En présence de plusieurs cartes en arguments, une erreur sur une carte n'arrête pas le programme : on passe à la suivante (`main.c:24-30`).

---

## Points techniques notables

- **`getline`** alloue automatiquement le buffer `line` et le réutilise à chaque appel. Il faut le `free` une seule fois à la fin.
- **Le `grid[height] = NULL`** sentinelle permet à `free_map` de parcourir le tableau sans connaître sa taille.
- **VLA (Variable Length Array)** : `int matrix[map->height][map->width]` est alloué sur la pile, ce qui peut poser problème pour de très grandes cartes (risque de stack overflow).
- Le bloc commenté `bsq.c:140-148` proposait de vérifier qu'il n'y a pas de ligne en trop après la carte — laissé désactivé.
