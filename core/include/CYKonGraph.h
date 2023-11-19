#pragma once
#include <iostream>
#include <vector>
#include <set>
#include <fstream>
#include <limits.h>

class Rule {
    public:
        int type;
        int left;
        std::vector<int> right1; // used if right side is 2 non-terminals
        std::string right0; // used if right side is terminal
};

check_presence(int& initial, std::vector<std::string>& nonterm, std::string b)

void input_rule(int i, std::vector<std::string>& nonterminals, std::vector<Rule>& rules, 
                                    std::ifstream& fin, int& initial);

void input_V_names(std::vector <std::string>& V_names, 
                                    std::vector<std::pair<int, std::pair<int, std::string> > >& edges, 
                                    std::ifstream& fin, int V, int E);

void dfs(int i, std::vector<std::set<int> >& G, std::vector<int>& visited, int component, 
                                    std::vector<int>& topsort);

void find_rtdg(std::vector<std::vector<int> >& RTDG, std::vector<std::string>& nonterminals, 
                                    std::vector<int>& topsort, std::vector<Rule>& rules);

void arranging_rules_to_edges(int i, int& eps, std::vector<std::pair<int, std::pair<int, std::string> > >& edges, 
                                    std::vector<std::vector<std::vector<int> > >& g, 
                                    std::vector<std::vector<std::vector<std::string> > >& g_l, int& initial, 
                                    std::vector<std::vector<std::vector<std::pair<int, std::pair<int, int> > > > >& last, 
                                    std::vector<Rule>& rules, int V);

int not_null(std::vector<std::vector<int> >& A);

std::vector<std::vector<int> > mult(std::vector<std::vector<int> >& A,  std::vector<std::vector<int> >& B, int num, 
                                    int numA, int numB, 
                                    std::vector<std::vector<std::vector<std::pair<int, std::pair<int, int> > > > >& last);

std::vector<std::vector<int> > razn(std::vector<std::vector<int> >& A, std::vector<std::vector<int> >& B);

std::vector<std::vector<int> > sum (std::vector<std::vector<int> >& A, std::vector<std::vector<int> >& B);

void transitive_closure(int& flag, std::vector<std::vector<std::vector<int> > >& delta,
                                    std::vector<std::vector<int> >& RTDG, std::vector<std::vector<std::vector<int> > >& g, 
                                    int i, int k, 
                                    std::vector<std::vector<std::vector<std::pair<int, std::pair<int, int> > > > >& last, 
                                    std::vector<Rule>& rules);

std::vector<int> path_find(std::vector<std::vector<std::vector<std::string> > >& g_l, int begin, int end, 
                                    int nont, 
                                    std::vector<std::vector<std::vector<std::pair<int, std::pair<int, int> > > > >& last);

void print_results(int test, int ans, std::vector<std::vector<std::vector<int> > >& g, 
                                    std::vector <std::string>& V_names, 
                                    std::vector<std::vector<std::vector<std::string> > >& g_l, int& initial, 
                                    std::vector<std::vector<std::vector<std::pair<int, std::pair<int, int> > > > >& last);

int count_ans(std::vector<std::vector<std::vector<int> > >& g, int initial);