#pragma once

#include <set>
#include <stdio.h>
#include <vector>
#include "Predicate.h"
#include "Rule.h"

using namespace std;

class DatalogProgram
{
private:
    vector<Predicate*> schemes;
    vector<Predicate*> facts;
    vector<Rule*> rules;
    vector<Predicate*> queries;
    set<string> domain;
    
public:
    void AddScheme(Predicate* scheme);
    void AddFact(Predicate* fact);
    void AddRule(Rule* rule);
    void AddQuery(Predicate* query);
    
    string ToString() const;
};
