//
// Created by acasali on 27/11/16.
//

#ifndef LEGENDS_OF_WESTEROS_ARMYFACTORY_H
#define LEGENDS_OF_WESTEROS_ARMYFACTORY_H


class Army {
public:
    virtual ~Army() {}

    virtual float getPower() = 0;
  // virtual getDefense() = 0;

};


#endif //LEGENDS_OF_WESTEROS_ARMYFACTORY_H
