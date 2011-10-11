#include <set>
#include <map>
#include <iostream>

class Territory
 {
  public:
   void setNeighbor(Territory &t)
    {
     if(adjacent.insert(&t).second)
      t.adjacent.insert(this); // If we already have them, they should already have us.

    }

   void printInfo() const
    {
     std::cout << this << " linked to: ";

     for(std::set<Territory *>::const_iterator c = adjacent.begin(); c != adjacent.end(); ++c)
      std::cout << *c << ' ';

     std::cout << std::endl;
    }

  protected:
   std::set<Territory *> adjacent;
 };

std::map<int, Territory> territory;

int connections[][2] = {{0, 1},
                       {1, 2},
                       {2, 0}}; // Three teritories connected in a triangle.


int main(int argc, char *argv[])
 {
  for(int c = 0; c < sizeof connections / sizeof *connections; ++c)
   territory[connections[c][0]].setNeighbor(territory[connections[c][1]]);

  // Show the connections.

  for(std::map<int, Territory>::const_iterator c = territory.begin(); c != territory.end(); ++c)
   c->second.printInfo();
 }
