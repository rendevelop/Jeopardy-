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
    std::list<CStudent> stuPool;
    std::list<CGame> gamePool;
};

#endif //_CMAN_H