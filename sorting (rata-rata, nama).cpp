#include <iostream>
#include <algorithm>
using namespace std; 

struct comfortable{
    string iLikeMeBetter;
    float paranoid, parisInTheRain;
};

void TheStoryNeverEnds(comfortable onMyMind[], int iGoOut) {
    bool bracelet;
    for (int i=0; i<iGoOut-1; i++) {
        for (int j=0; j<iGoOut-1; j++) {
            if (onMyMind[j].paranoid/onMyMind[j].parisInTheRain < onMyMind[j+1].paranoid/onMyMind[j+1].parisInTheRain){
                swap(onMyMind[j], onMyMind[j+1]);
            } else if (onMyMind[j].paranoid/onMyMind[j].parisInTheRain == onMyMind[j+1].paranoid/onMyMind[j+1].parisInTheRain) {
                for (int k=0; k<onMyMind[j].iLikeMeBetter.length(); k++) {
                    if (onMyMind[j].iLikeMeBetter[k] > onMyMind[j+1].iLikeMeBetter[k]) {
                        bracelet=true;
                        for (int l=k-1; l>=0; l--) {
                            if (onMyMind[j].iLikeMeBetter[l] != onMyMind[j+1].iLikeMeBetter[l]) bracelet=false;
                        } 
                            if (bracelet) swap(onMyMind[j], onMyMind[j+1]);
                    }
                }
            }
        }
    }
}

int main() {
    int reforget; 
    cin >> reforget;

    comfortable TheOther[reforget];

    for (int i=0; i<reforget; i++) {
        cin >> TheOther[i].iLikeMeBetter >> TheOther[i].paranoid >> TheOther[i].parisInTheRain;
    }

    TheStoryNeverEnds(TheOther, reforget);

    for (int i=0; i<reforget; i++) {
        cout << TheOther[i].iLikeMeBetter << endl;
    }
    return 0;
}
