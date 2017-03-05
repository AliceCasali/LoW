//
// Created by giulia on 06/12/16.
//

#ifndef LEGENDS_OF_WESTEROS_REDWIZARD_H
#define LEGENDS_OF_WESTEROS_REDWIZARD_H


#include "MagicTroop.h"

class RedWizard : public MagicTroop {
public:
    RedWizard();
    float getMagic() override;

private:
    float attack;
    float defense;
    float magic;

};


#endif //LEGENDS_OF_WESTEROS_REDWIZARD_H
