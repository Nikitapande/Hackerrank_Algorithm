/*
  Alice and Bob each created one problem for HackerRank Compare the Triplets. 
  A reviewer rates the two challenges, awarding points on a scale from 1 to 100 for three categories:
    problem clarity, originality, and difficulty.

We define the rating for Alice’s challenge to be the triplet A=(a0,a1,a2), and the rating for Bob’s challenge
  to be the triplet B=(b0,b1,b2). 
  */
  #include<iostream>
using namespace std;

int main()
{
		int aliceResult = 0;
        int bobResult = 0;
        int alicePoints[3],bobPoints[3];
        for(int i = 0;i<3;i++){
            cin>>alicePoints[i];
        }
        
        for(int i = 0;i<3;i++){
            cin>>bobPoints[i];
        }
        
 
        for(int i = 0;i<3;i++){
            if(alicePoints[i]>bobPoints[i]){
                aliceResult++;
            }else if(alicePoints[i]<bobPoints[i]){
                bobResult++;
            }
        }
 
        
        cout<<aliceResult<<" "<<bobResult;
 
   	return 0;
}
