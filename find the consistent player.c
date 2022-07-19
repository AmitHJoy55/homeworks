#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
struct run_rate
{
    double z;
};
int main()
{
    struct run_rate BatMan_X[5]= {96,3,11,61,77};
    struct run_rate BatMan_Y[5]= {48,37,57,46,41};
    double M1 = (BatMan_X[0].z+BatMan_X[1].z+BatMan_X[2].z+BatMan_X[3].z+BatMan_X[4].z)/5;
    double M2 = (BatMan_Y[0].z+BatMan_Y[1].z+BatMan_Y[2].z+BatMan_Y[3].z+BatMan_Y[4].z)/5;
    double n=0,a=0,sum1=0,sum2=0;
    for(int j=0; j<5; j++)
    {
        n = BatMan_X[j].z - M1;
        a = n*n;
        sum1 = sum1 + a; //this is the summation
        n = BatMan_Y[j].z - M2;
        a = n*n;

        sum2 = sum2 + a; //this is the summation
    }
    double xhi1 = sqrt( sum1/5 );
    double xhi2 = sqrt( sum2/5 );
    if(xhi1<xhi2){
        printf("Player No-01 is consistent player.Because ,His Stanfard Deviation is %lf Which is the lowest Stanford deviation.\n Another player's Stanfard Deviation is %lf\n",xhi1,xhi2);

    }
    else{
        printf("Player No-02 is consistent player.Because ,His Stanfard Deviation is %lf Which is the lowest Stanford deviation.\n Another player's Stanfard Deviation is %lf\n",xhi2,xhi1);
    }
    return 0;
}

