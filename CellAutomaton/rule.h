#ifndef RULE_H
#define RULE_H

#include <QVector>


class Rule
{
public:
    Rule(QVector<int> b, QVector<int> s);
    bool apply(const bool& cell, int neighbors);
    void changeBorn(QVector<int> newB);
    void changeSurvive(QVector<int> newS);
private:
    QVector<int> born;
    QVector<int> survive;
};

#endif // RULE_H
