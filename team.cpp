//
// Created by Pascal Luttgens on 07/04/2017.
//

#include "team.h"

int team::ID_GEN = 0;

team::team(std::string name) {
    this->id = team::ID_GEN++;
    this->name = name;
    this->nMembers = 0;
}

void team::add_member(user &) {
    this->nMembers++;
}
