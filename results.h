#ifndef HACKATON_CPP_RESULTS_H
#define HACKATON_CPP_RESULTS_H


class results {
public:
    results(int);

    double &operator[](const int &);

    double operator[](const int &) const;

private:
    int teamIds[];
    double scores[];
    int nTeams;
    int nResults;

    int get_position_from_id(const int &) const;
};


#endif //HACKATON_CPP_RESULTS_H
