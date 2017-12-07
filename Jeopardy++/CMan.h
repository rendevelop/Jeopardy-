/**
 * Project Untitled
 */


#ifndef _CMAN_H
#define _CMAN_H

#include <list>
#include "CStudent.h"
#include "CGame.h"

class CMan {
public: 
    list<CStudent> stuPool;
    list<CGame> gamePool;
};

#endif //_CMAN_H