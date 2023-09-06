#include <iostream>
using namespace std;
int main(){

int  N,i;
 cout <<"Enter the array size: ";
    cin >> N;
     int DATA[N];
    for (i=1;i<=N;i++)
        cin>> DATA[i];
    for(int i=1;i<=N;i++)
       cout<<"DATA["<<i<<"]: "<<DATA[i]<<endl;

   int ITEM;
    cout<<"Enter the search ITEM: ";
    cin>>ITEM;

int BEG=1;
int END=N;
int MID=((BEG+END)/2);

while(BEG<=END && DATA[MID] !=ITEM){
    if (ITEM<DATA[MID])
        END=MID-1;
     else
                BEG=MID+1;


     MID=((BEG+END)/2);
}
int LOC;
if(ITEM==DATA[MID]){
        LOC=MID;
        cout<<"The location is: "<<LOC;}
else{
 LOC=NULL;
 cout<<"location not found!";}
}

