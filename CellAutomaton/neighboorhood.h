#ifndef NEIGHBOORHOOD_H
#define NEIGHBOORHOOD_H


class Neighborhood
{
public:
    Neighborhood();
    Neighborhood(int i, int j, int width, int height, bool** field);
    int getMooreCount();
    int getNeumanCount();
private:
    bool* n[8];
};

#endif // NEIGHBOORHOOD_H
