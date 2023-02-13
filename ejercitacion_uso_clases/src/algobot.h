#include <iostream>
#include <string>
#include <set>
#include <map>
#include <tuple>

using Fecha = unsigned int;

using namespace std;

/* Ejercicio 1 de la clase */
pair<vector<int>, vector<int>> pares_e_impares(vector<int> s);

/* Ejercicio 2 de la clase */
vector<int> interseccion(vector<int> a, vector<int> b);


class LU {
public:
  int numero() const;
  int anio() const;
  bool operator==(const LU& o) const;
  bool operator<(const LU& o) const;

  // Constructor
  LU(std::string str);

private:
  int _num;
  int _a;
};

class Mail {
public:
  std::string asunto() const;
  Fecha fecha() const;
  bool adjunto() const;
  set<LU> libretas() const;

  // Constructor
  Mail(std::string asunto, Fecha fecha, bool adjunto);
  Mail();

  bool operator==(const Mail& o) const;

private:
  std::string _asunto;
  Fecha _fecha;
  bool _adjunto;
};

