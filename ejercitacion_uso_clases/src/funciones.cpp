#include <vector>
#include "algobot.h"

using namespace std;

/* Ejercicio 1 de la clase. Vector */

pair<vector<int>, vector<int>> pares_e_impares(vector<int> s){
    pair<vector<int>, vector<int>> paresEimpares;
    vector<int> pares;
    vector<int> impares;

    for(int i = 0; i < s.size(); i++){
        if(s[i] % 2 == 0){
            /* El elemento es par */
            pares.push_back(s[i]);
        } else {
            /* El elemento es impar */
            impares.push_back(s[i]);
        }
    }
    /* Una vez colocados todos los elementos segun su paridad, devuelvo la tupla */
    paresEimpares = make_pair(pares, impares);
    return paresEimpares;
}

/* Ejercicio 2 de la clase. Interseccion utilizando conjuntos */

vector<int> interseccion(vector<int> a, vector<int> b){
    vector<int> inter;
    set<int> conjuntoA;

    /* Pasamos todos los elementos del vector "a" al conjunto "conjuntoA" */
    for(int i = 0; i < a.size(); i++){
        conjuntoA.insert(a[i]);
    }

    /* Por ultimo, vemos que elementos del vector "b" se encuentra en el conjunto "conjuntoA" */
    for(int j = 0; j < b.size(); j++){
        if(conjuntoA.count(b[j]) == 1){
            inter.push_back(b[j]);
        }
    }
    return inter;
}


// Ejercicio 1
vector<int> quitar_repetidos(vector<int> s) {
    return vector<int>();
}

// Ejercicio 2
vector<int> quitar_repetidos_v2(vector<int> s) {
    return vector<int>();
}

// Ejercicio 3
bool mismos_elementos(vector<int> a, vector<int> b) {
    return true;
}

// Ejercicio 4
bool mismos_elementos_v2(vector<int> a, vector<int> b) {
    return true;
}

// Ejercicio 5
map<int, int> contar_apariciones(vector<int> s) {
    return map<int, int>();
}

// Ejercicio 6
vector<int> filtrar_repetidos(vector<int> s) {
    return vector<int>();
}

// Ejercicio 7
set<int> interseccion(set<int> a, set<int> b) {
    return set<int>();
}

// Ejercicio 8
map<int, set<int>> agrupar_por_unidades(vector<int> s) {
    return map<int, set<int>>();
}

// Ejercicio 9
vector<char> traducir(vector<pair<char, char>> tr, vector<char> str) {
    return vector<char>();
}

// Ejercicio 10
bool integrantes_repetidos(vector<Mail> s) {
    return true;
}

// Ejercicio 11
map<set<LU>, Mail> entregas_finales(vector<Mail> s) {
  return map<set<LU>, Mail>();
}
