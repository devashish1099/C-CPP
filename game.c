#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

float distance (int ptz[], int pt[],int j){
    float d ;
    int i;
    float ptd[100];
    float sum = 0;
    for ( i = 0; i < j; i++)
    {
        if (ptz[i] - pt[i] > 0)
        {
            ptd[i] = ptz[i] - pt[i];
        }else
        {
            ptd[i] = pt[i] - ptz[i];
        }
        
        sum = sum + (ptd[i] * ptd[i]);
    }

    d = sqrt(sum);    
    return d;
}

int main(){
    

    float dist ;
    int pt[100];
    int i = 0;
    int j = 2;
    int z = 1;
    int k = 0;
    int ptz[100];
    int m = 1;
 p1 :   

    srand(time(0));
    
    for ( k = 0; k < j; k++)
    {
        ptz[k] = rand() % 100;
    }
    

    // int x = rand() % 100 ;
    // int y = rand() % 100 ;

    while (z)
    {
        printf("enter %dd coordinates with max value of each be less than 100 and greater than 0 ;",j);
        // scanf("%d %d",pt[i],pt[i+1]);

        for ( k = 0; k < j; k++)
        {   
            scanf("%d",&pt[k]);
        }

        for ( k = 0; k< j; k++)
        {
            if (ptz[k] == pt[k])
            {
                m = 1;
            }else
            {
                m = 0;
            }
        }
        
        

        if(m){
            printf("you are pretty clever , but you will not out wit me next time\n");
            printf("to try next level press 1 , to exit press 0;");
            scanf("%d",&z);
            if (z == 1)
            {   
                j++;
                goto p1;
            }else
            {
                break;
            }
        }else
        {
            dist = distance(ptz,pt,j);
            printf("you are %f units away from target; \n",dist);
        }
    }
}