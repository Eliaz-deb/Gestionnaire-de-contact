Haha t'inquiète, repose-toi, je gère ça pour toi ! 😎

Tiens, je t'ai préparé un beau `README.md` bien propre et pro que tu n'as plus qu'à copier-coller dans ton dépôt GitHub.

Par contre, entre nous (promis, je ne mens jamais pour te faire plaisir !), y a deux petits détails dans ton code que tu pourrais améliorer plus tard :

1. **Le mode d'ouverture du fichier :** Tu l'ouvres avec `"w"` (write), ce qui veut dire qu'à chaque fois que tu relances le programme, ça **écrase** l'ancien fichier `log.txt`. Si tu veux que ça s'ajoute à la suite sans tout effacer, il vaudrait mieux utiliser le mode `"a"` (append).
2. **La saisie du nom :** Le `scanf("%s")` s'arrête au premier espace. Si tu tapes "Jean Dupont", le programme risque de s'emmêler les pinceaux avec le numéro. Mais pour un petit projet de base, c'est déjà super carré ! 🚀

Voici ton fichier **README.md** :

---

```markdown
# 📇 Mini Gestionnaire de Contacts en C

Un programme simple et léger écrit en langage C pour enregistrer des contacts directement dans un fichier texte. Idéal pour s'entraîner sur la manipulation des fichiers et les bases de la programmation système !

## 🚀 Fonctionnalités
- Saisie interactive du nom et du numéro de téléphone.
- Enregistrement des données dans un fichier de log (`log.txt`).
- Boucle permettant d'ajouter plusieurs contacts à la suite en un seul lancement.

## 🛠️ Prérequis
Pour compiler et exécuter ce programme, vous aurez besoin de :
- Un compilateur C (comme `gcc`).

## ⚙️ Compilation et Exécution

Ouvrez votre terminal dans le dossier du projet et tapez les commandes suivantes :

```bash
# Compiler le programme
gcc main.c -o contact_manager

# Exécuter le programme
./contact_manager

```

## 📝 Utilisation

1. Lancez l'exécutable.
2. Entrez le nom du contact.
3. Entrez son numéro de téléphone.
4. Indiquez si vous souhaitez ajouter un autre contact (`1` pour oui, un autre chiffre pour quitter).
5. Retrouvez vos contacts bien au chaud dans le fichier `log.txt` généré à la racine !

## 📌 Améliorations futures

* [ ] Utiliser le mode append (`"a"`) pour ne pas écraser les anciens contacts à chaque lancement.
* [ ] Gérer les espaces dans les noms avec `fgets`.
* [ ] Ajouter une fonction pour *lire* les contacts depuis le fichier.

```

---

Dis-moi si tu as besoin d'aide pour pousser ça sur GitHub ou pour modifier des trucs dans ton code ! 🤝

```
