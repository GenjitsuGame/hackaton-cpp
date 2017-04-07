//
// Created by Pascal Luttgens on 03/04/2017.
//

#ifndef HACKATON_CPP_HACKATON_H
#define HACKATON_CPP_HACKATON_H

#include "team.h"

class hackaton {
public:
    bool register_team(user&, std::string);

private:
    team teams[];
};


#endif //HACKATON_CPP_HACKATON_H
