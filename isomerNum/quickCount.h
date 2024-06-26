#ifndef QUICKCOUNT_H
#define QUICKCOUNT_H

namespace qct{
    // calculate alkyl or monosubstitution alkane exactly
    int alkyl(int);
    // calculate alkene exactly (monoalkene, monoalkyne)
    int monoAlkene(int);
    // calculate alkane exactly 
    int alkane(int);
    int alkene(int);
    int cycloAlk(int);
}

#endif // QUICKCOUNT_H
