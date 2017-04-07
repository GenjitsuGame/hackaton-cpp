#ifndef HACKATON_CPP_APPLICATION_H
#define HACKATON_CPP_APPLICATION_H


#include <string>
#include "hackaton.h"

class application {
public:
    bool create_hackaton(std::string s);


private:
    hackaton hackatons[100];
};


#endif //HACKATON_CPP_APPLICATION_H
