#include
void BackTrack(int j){

            for(int i=X[j-1]+1; i<=n-k+j; i++){

                        X[j]=i;

                        if(j==k)

                                    print();

                        else

                                    BackTrack(j+1);

            }

     return;

}