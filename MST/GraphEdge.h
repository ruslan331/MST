#pragma once
#ifndef DELAUNAY_TRIANGULATIONS_GRAPHEDGE_H
#define DELAUNAY_TRIANGULATIONS_GRAPHEDGE_H

template <typename Vertex, typename Length>
class GraphEdge {
public:
    GraphEdge(Vertex _from, Vertex _to, Length _length) :
        from(_from), to(_to), length(_length) {
    }

    GraphEdge& operator=(const GraphEdge& other) = default;

    const Vertex& getFrom() const {
        return from;
    }

    const Vertex& getTo() const {
        return to;
    }

    const Length& getLength() const {
        return length;
    }


private:
    Vertex from;
    Vertex to;
    Length length;
};

#endif //DELAUNAY_TRIANGULATIONS_GRAPHEDGE_H