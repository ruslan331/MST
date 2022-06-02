#pragma once
#ifndef DELAUNAY_TRIANGULATIONS_MINIMUMSPANNINGTREE_H
#define DELAUNAY_TRIANGULATIONS_MINIMUMSPANNINGTREE_H

#include <vector>
#include <map>

#include "GraphEdge.h"

using namespace std;

template <class V>
class MinimumSpanningTree {
public:
    MinimumSpanningTree();

    // return pair of mst edges and summary length of edges in mst
    template <typename D>
    pair<vector<GraphEdge<V, D>>, D> getMST(vector<GraphEdge<V, D>> edges);

private:

    class DisjointSetUnion {
    public:
        DisjointSetUnion() = default;

        bool connectVertexes(V v, V u);

        bool isVertexesConnected(V v, V u);

        V getParent(V v);

    private:
        map<V, V> parent;
    };

    DisjointSetUnion dsu;
};



#endif //DELAUNAY_TRIANGULATIONS_MINIMUMSPANNINGTREE_H