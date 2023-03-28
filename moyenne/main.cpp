//
// Created by namex on 28/03/2023.
//
#include <iostream>
#include <string>
using namespace std;

int moyenne, reponse, n;
int main(){
    cout << "Combien de notes voulez-vous entrer ?" << endl;
    cin >> n;
    int *number = new int[n];
    for (int i = 0; i < n; i++){
        cout << "Entrez la note " << i+1 << endl;
        cin >> number[i];
        moyenne += number[i];
    }
    delete [] number;
    cout << "Le total : " << moyenne << endl;
}