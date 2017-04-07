//
// Created by Pascal Luttgens on 07/04/2017.
//

#ifndef HACKATON_CPP_TEAM_H
#define HACKATON_CPP_TEAM_H


#include <string>
#include <jmorecfg.h>
#include "user.h"

class Team {
public:
    Team(std::string);
    boolean add_member(user&);

private:
    int nMembers;
    std::string name;
};


#endif //HACKATON_CPP_TEAM_H
