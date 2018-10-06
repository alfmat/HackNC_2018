#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

const int array_size = 3;
const int upperbound = ceil(3+array_size/log(array_size));

class Rect{
private:
    int l,w,use; //int use: 0=haven't used, 1=using, 2=never use again
    int coords[4]; //tlx,tly,brx,bry
public:
    Rect(){l=0;w=0;use=0;for(int i=0;i<4;i++){coords[i]=-1;}}
    void setL(int l){this->l=l;}
    void setW(int w){this->w=w;}
    void setUse(int use){this->use=use;}
    void setCoords(int coords[]){for(int i=0;i<4;i++){this->coords[i]=coords[i];}}
    int getL(){return l;}
    int getW(){return w;}
    int getArea(){return l*w;}
    int getUse(){return use;}
    int *getCoords(){return coords;}
    bool isCorner();
};

class Rboard{
private:
    bool coords[array_size][array_size];
    bool inRange(int coords[4]);
    bool rectAtLoc(int coords[4]);
    bool canUse(Rect n);
    int difference;
public:
    Rboard(){difference=upperbound;}
    Rect poss[array_size*array_size];
    void RInsert(Rect n);
    void RRemove(Rect n);
    int getDifference(){return difference;}
    int getIndex(int l, int w){for(int i=0;i<pow(array_size,2);i++){if(}
};

bool Rboard::inRange(int coords[4]){
    for(int i=0;i<4;i++){
        if((coords[i]>=array_size)||(coords[i]<0)){
            return false;
        }
    }
    return true;
}

void Rboard::RInsert(Rect n){

}
