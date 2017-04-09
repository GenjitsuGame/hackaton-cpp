#include <stdexcept>
#include "results.h"

results::results(int nTeams) {
    if (nTeams <= 0) throw new std::invalid_argument("nTeams must be greater than 0");
    this->nTeams = nTeams;
    this->nResults = 0;
}

double &results::operator[](const int &id) {
    const int pos = get_position_from_id(id);

    if (pos < 0) throw std::invalid_argument("Invalid team id.");

    return this->scores[pos];
}

double results::operator[](const int &id) const {
    const int pos = get_position_from_id(id);

    if (pos < 0) throw std::invalid_argument("Invalid team id.");

    return this->scores[pos];
}

int results::get_position_from_id(const int & id) const {
    int pos = -1;

    for (int i = 0; i < this->nTeams; i++) {
        if (this->teamIds[i] == id) {
            pos = i;
            break;
        }
    }

    return pos;
}
