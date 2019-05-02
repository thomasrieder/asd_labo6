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
  pointer donnees;
  size_t taille;
  const size_t CAPACITE;

public:
  Pile(size_t _capacite)
  // a completer
  {
    // a completer
  }

  ~Pile()
  {
    // a completer
  }

  Pile(const Pile& other)
  // a completer
  {
    // a completer
  }

  void empiler(const value_type& v)
  {
    // a completer
  }

  void depiler()
  {
    // a completer
  }

  const_reference sommet() const
  {
    // a completer
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
