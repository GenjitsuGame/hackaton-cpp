#ifndef HACKATON_CPP_TEAM_H
#define HACKATON_CPP_TEAM_H


#include <string>
#include "user.h"

class team {
public:
    team(std::string);

    void add_member(user &);

private:
    int nMembers;
    std::string name;
    int id;
    static int ID_GEN;
};


#endif //HACKATON_CPP_TEAM_H
