//
// Created by giulia on 06/12/16.
//

#ifndef LEGENDS_OF_WESTEROS_BARATHEON_H
#define LEGENDS_OF_WESTEROS_BARATHEON_H

#include "SimpleTroop.h"
#include "MagicTroop.h"
#include "Army.h"

class Baratheon : public Army {
public:
    Baratheon();
    Baratheon(int nrw,int nk);
    string getName() override;
    Strategy getStrategy() override;

    static Strategy strategy; //estendo la classe army dove c'è la strategy, è static perchè più armate della
                              //stessa casata hanno la stessa strategia

};


#endif //LEGENDS_OF_WESTEROS_BARATHEON_H
