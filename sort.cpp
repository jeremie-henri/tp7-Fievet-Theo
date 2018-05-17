template <typename Iter_t, typename T>
void selectSort (Iter_t deb, Iter_t fin, 
                 bool (* isInf) (const T &, const T &))
{
    if (fin <= deb) return;
 
    for ( ; deb < fin - 1; ++deb)
    {
        Iter_t rgMin = deb;
        for (Iter_t j (deb + 1); j < fin; ++j) 
            if (isInf (*j, *rgMin)) rgMin = j;
        swap (*deb, *rgMin);
    }
 
} // selectSort()
