// g = cost moving from start to current node
// h = cost moving from current to end

initialize open list
starting node inside open list

initialize closed list

while open list is not empty{
    q  = node with least value F on the open list
    
    pop q off open list
    
    generate q 8 successors and set their parent to q

    for each successor {
        if successor is goal {
            stop search
            successor.g = q.g + distance(q to successor)
            successor.h = distance(successor to goal)
            successor.f = successor.g + successor.h
        }

        if a node with same position as successor in Open list and has lower f{
            skip this successor
        }

        if a node with same position as successor in closed list and has lower f{
            skip this successor, add the node to open list
        }
    }

    push q on closed list
}