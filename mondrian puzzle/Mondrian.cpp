#include "mondrianTemps.h"
using namespace std;

/*Fit non-congruent rectangles into a n*n square grid.
What is the smallest difference possible between the areas of the largest and the smallest rectangles?*/
class Rsort{
private:
    vector<Rboard> allBoards;
public:
    Rsort();
    int getbestDiff();
};

Rsort::Rsort(){
    Rboard first;
    allBoards.push_back(first);
    /*algorithm*/
}

int Rsort::getbestDiff(){
    int best=allBoards[0].getDifference();
    for(int i=0;i<allBoards.size();i++){
        if(allBoards[i].getDifference()<best){
            best=allBoards[i].getDifference();
        }
    }
    return best;
}

int main(){
    Rsort t;
    cout<<t.getbestDiff()<<endl;
    return 0;
}
