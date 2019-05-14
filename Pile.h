#ifndef Pile_hpp
#define Pile_hpp

#include <ostream>

// Forward declarations
template <typename T> class Pile;
template <typename T> std::ostream& operator<<( std::ostream& os,
                                               const Pile<T>& p);

// Type Pile
template <typename T>
class Pile {
  friend std::ostream& operator<< <>( std::ostream& os,
                                     const Pile<T>& p);

public:
  using value_type = T;
  using pointer = value_type*;
  using reference = value_type&;
  using const_reference = const value_type&;

private:
  pointer donnees; //INT* donnees
  size_t taille;
  const size_t CAPACITE;

public:
  Pile(size_t _capacite) : CAPACITE(_capacite)
  {
    donnees = new T[CAPACITE];
    taille = 0;
  }

  ~Pile()
  {
    delete[] donnees;
    donnees = nullptr;
  }

  Pile(const Pile& other) : CAPACITE(other.CAPACITE)
  {
    donnees = new T[CAPACITE];
    taille = 0;
    for(size_t i = 0; i < other.taille; ++i){
      donnees[i] = (other.donnees)[i];
    }
    taille = other.taille;
  }

  void empiler(const value_type& v)
  {
    if(taille != CAPACITE){
      donnees[taille] = v;
      ++taille;
    }//pas de gestion d'erreur dans ce laboratoire
  }

  void depiler()
  {
    if(taille!= 0)
      --taille;
    //pas de gestion d'erreur dans ce laboratoire
  }

  const_reference sommet() const
  {
    if(taille != 0){
      return donnees[taille-1];
    }else{
      return NULL; //retourne null si la pile est vide 
    }
  }

};

// ne pas modifier
template <typename T>
std::ostream& operator<<( std::ostream& os,
                         const Pile<T>& p)
{
  os << "Pile(" << p.taille << "/" << p.CAPACITE << "): ";
  size_t i = p.taille;
  while(i > 0)
    os << p.donnees[--i] << " ";
  return os;
}

#endif /* Pile_hpp */
