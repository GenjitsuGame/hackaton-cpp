#ifndef HACKATON_CPP_TEAM_H
#define HACKATON_CPP_TEAM_H


#include <string>
#include <jmorecfg.h>
#include "user.h"

class team {
public:
    team(std::string);

    bool add_member(user &);

private:
    int nMembers;
    std::string name;
};


#endif //HACKATON_CPP_TEAM_H
