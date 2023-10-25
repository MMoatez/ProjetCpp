#include <iostream>
#include <string>
#include "Compte.h"
using namespace std;

int main()
{
    Compte C, C1;
    float val, somme;

    C.saisir();

    cout << "Quelle est la somme que vous voulez retirer : ";
    cin >> val;
    C.retirerArgent(val);

    cout << "Quelle est la quantité que vous voulez ajouter : ";
    cin >> somme;
    C.deposerArgent(somme);

    C.transfererArgent(C1);

    return 0;
}
