    void testLessThanAbstrGen (void)
    {
        cout << "LessThanAbstrGen&nbsp;: \n";
 
        typedef vector <Pers> CVPers;
        typedef CVPers::size_type IndPers_t;
        CVPers vPers;
 
        vPers.push_back (Pers ("Charlotte", 21));
        vPers.push_back (Pers ("Alfred",    12));
        vPers.push_back (Pers ("Jean",      42));
        vPers.push_back (Pers ("Noemie",    11));
        vPers.push_back (Pers ("Berthe",    99));
        vPers.push_back (Pers ("Agathe",    29));
        vPers.push_back (Pers ("Sylvain",   42));
        vPers.push_back (Pers ("Pierre",    75));
 
        cout << "\nTri par age croissant\n\n";
 
        selectSort (vPers.begin(), vPers.end(), TriParAgeAsc());
 
        for (const Pers & personne : vPers)
            cout << personne << '\n';
 
        cout << "\nTri par nom decroissant\n\n";
 
        selectSort (vPers.begin (), vPers.end (), TriParNomDesc ());
 
        for (const Pers & personne : vPers)
            cout << personne << '\n';
 
    } // testLessThanAbstrGen()
