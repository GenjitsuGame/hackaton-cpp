#ifndef HACKATON_CPP_HACKATON_H
#define HACKATON_CPP_HACKATON_H

#include "team.h"
#include "step.h"
#include "results.h"

class hackaton {
public:
    bool register_team(user &, std::string);

    team &get_team(int);

private:
    team teams_[100];
    step steps_[20];
    results results_;
};


#endif //HACKATON_CPP_HACKATON_H
