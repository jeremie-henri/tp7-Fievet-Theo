#ifndef TYPESBASE_HPP
#define TYPESBASE_HPP

#include <cstdint>

namespace std {

template <class T>
class TypeBase {
    T myVal;

public:
    explicit TypeBase(T t = T()) { myVal = t;}
    operator T & () {return myVal;}

};//TypeClass

typedef TypeBase<int16_t> Short;
typedef TypeBase<int32_t> Integer;
typedef TypeBase<uint8_t> Character;


}//namespace

#endif // TYPESBASE_HPP
