#include "rule.h"

Rule::Rule(QVector<int> b, QVector<int> s):born(b), survive(s)
{
}

bool Rule::apply(const bool& cell, int neighbors)
{
    if(cell){
        if(survive.indexOf(neighbors) != -1)
            return true;
        else
            return false;
    }
    else{
        if(born.indexOf(neighbors) != -1)
            return true;
        else
            return false;
    }
}

void Rule::changeBorn(QVector<int> newB){
    born = newB;
}

void Rule::changeSurvive(QVector<int> newS){
    survive = newS;
}
