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

/*
    #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct r_rate{
    double x;
};
int main()
{
    struct r_rate bm1[5]={101,0,20,65,73};
    struct r_rate bm2[5]={49,39,59,51,43};
    double mew1 = (bm1[0].x+bm1[1].x+bm1[2].x+bm1[3].x+bm1[4].x)/5;
    double mew2 = (bm2[0].x+bm2[1].x+bm2[2].x+bm2[3].x+bm2[4].x)/5;
    double n=0,x=0,sum1=0,sum2=0;
   for(int i=0;i<5;i++){
            n=bm1[i].x - mew1;
            x=n*n;
            sum1=sum1+x;

            n=bm2[i].x - mew2;
            x=n*n;
            sum2=sum2+x;
    }
    double sigma1 = sqrt( sum1/5 );
    double sample1 = sqrt( sum1/4 );
    double sigma2 = sqrt( sum2/5 );
    double sample2 = sqrt( sum2/4 );
    if(sigma1<sigma2){
        printf("Batman No 01 is the best player. Stanfard Deviation of his runs are %lf\n",sigma1);
                printf("Which is the lowest Stanford deviation.\nwhile the Stanfard Deviation of other player is %lf\n",sigma2);
    }
    else{
        printf("Batman No 02 is the best player. Stanfard Deviation of his runs are %lf\n",sigma2);
        printf("Which is the lowest Stanford deviation.\nwhile the Stanfard Deviation of other player is %lf\n",sigma1);
    }


    return 0;
}







*/













/*



    #include<stdio.h>
#include<math.h>
struct cricketer{
      char name[50];
      long long int score[5];
    };
int main()
{
    struct cricketer cricketer1,cricketer2;
    scanf("%s",cricketer1.name);
    int i;
    double sum = 0,temp=0;
    for(i=0;i<5;i++){
        scanf("%lld",&cricketer1.score[i]);
        sum = sum + cricketer1.score[i];
    }
    sum = sum/5;
    for(i=0;i<5;i++){
        temp = temp + (sum-cricketer1.score[i])*(sum-cricketer1.score[i]);
    }
    temp = sqrt(temp/2);
    scanf("%s",cricketer2.name);
    sum = 0;
    double temp2=0;
    for(i=0;i<5;i++){
        scanf("%lld",&cricketer2.score[i]);
        sum = sum + cricketer2.score[i];
    }
    sum = sum/5;
    for(i=0;i<5;i++){
        temp2 = temp2 + (sum-cricketer2.score[i])*(sum-cricketer2.score[i]);
    }
    temp2 = sqrt(temp2/2);
    if(temp>temp2){
        printf("More consistant player is %s",cricketer2.name,temp2,temp);
    }
    else if(temp<temp2){
        printf("More consistant player is %s",cricketer1.name,temp,temp2);
    }
    else{
        printf("Both cricketer are equally consistant");
    }

    return 0;
}



*/
