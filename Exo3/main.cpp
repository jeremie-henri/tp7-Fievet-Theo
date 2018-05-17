#include <iostream>
#include <string>
#include <cctype>               // ispunct(), islower(), isalpha()
                                // tolower(), toupper()
#include <cassert>

using namespace std;

namespace
{
    class ITraitCar {
    public :
        virtual ~ITraitCar() {}
        virtual int operator ()(int caract) const = 0;
    };//ITraitCar

    class ToLower : public ITraitCar
    {
      public :
        virtual ~ToLower () {}
        virtual int operator () (int caract) const
        {
            return tolower (caract);

        } // operateur()

    }; // CToLower


    class ToUpper : public ITraitCar {
    public:
        virtual ~ToUpper() {}
        virtual int operator () (int caract) const {return toupper(caract);}
    };//ToUpper

    class IgnPunct : public ITraitCar {
    public:
        virtual ~IgnPunct() {}
        virtual int operator () (int caract) const {
            if (ispunct(caract))
                return caract = ' ';
            return caract;
        }
    };//IgnPunct

    string & moulinette (string & str, const ITraitCar & transf)
    {
        for (string::size_type i (str.size ()); i--; )
            str [i] = transf (str [i]);

        return str;

    } // moulinette()

    void testFunctor (void)
    {
        cout << "Functor abstrait : ";

        string ligne     ("azert:;,.?GFDSQ");
        string minusc    ("azert:;,.?gfdsq");
        string majusc    ("AZERT:;,.?GFDSQ");
        string sansPunct ("AZERT     GFDSQ");

        // ToDo

        assert (minusc    == moulinette (ligne, ToLower()));
        assert (majusc    == moulinette (ligne, ToUpper()));
        assert (sansPunct == moulinette (ligne, IgnPunct()));

        cout << "OK\n";

    } // testFunctor ()

} // namespace anonyme

int main (void)
{
    /*      */    testFunctor ();     /*           */

    return 0;

} // main()
