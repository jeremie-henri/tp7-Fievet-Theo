/**
 *
 * @file    TestFunctorAbstrait.cpp
 *
 * @authors M. Laporte, D. Mathieu
 *
 * @date    27/04/2010
 *
 * @version V1.0
 *
 * @brief   functor abstrait
 *
 **/
#include <iostream>
#include <string>
#include <cctype>               // ispunct(), islower(), isalpha()
                                // tolower(), toupper()
#include <cassert>
 
using namespace std;
 
namespace 
{
    class ToLower
    {
      public :
        virtual ~ToLower (void) {}
        virtual int operator () (int caract) const
        {
            return tolower (caract);
 
        } // operateur()
 
    }; // CToLower
 
    string & moulinette (string & str, const ToLower & transf)
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
 
        assert (minusc    == moulinette (ligne, ...));
        assert (majusc    == moulinette (ligne, ...));
        assert (sansPunct == moulinette (ligne, ...));
 
        cout << "OK\n";
 
    } // testFunctor ()
 
} // namespace anonyme
 
int main (void)
{
    /*      */    testFunctor ();     /*           */
 
    return 0;
 
} // main()
