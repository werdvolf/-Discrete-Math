//
//  dus3.c
//  
//
//  Created by Vadim on 11/16/18.
//

#include<stdio.h>

int main (void)
{
    int size;
    printf("How much numbers in arrays - ");
    scanf("%d", &size);
    int a[size], b[size];
    for(int i=0;i<size;i++){
        printf(" A[%d]=", i);
        scanf("%d", & a[i]);
    }
    for(int i=0;i<size;i++){
        printf(" B[%d]=", i);
        scanf("%d", & b[i]);
    }
    int ab[size][size];
    for (int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if (a[i]*a[i]<b[j])
                ab[i][j]=1;
            else (ab[i][j]=0);
            printf(" %d", ab[i][j]);
            if(j==size-1){
                printf("\n");
            }
        }
    }
    //reflexive
    int flag1=0;
    for(int i=0; i<size; i++){
        flag1=ab[i][i]+flag1;
    }
    if(flag1==size){
        printf(" is reflexive.\n");
    }
    else if(flag1==0){
        printf(" antireflexive.\n");
    }
    else {
        printf(" not reflexive and antireflexive.\n");
    }
    
    //symmetric
    int flag2=1,flag3=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if((i!=j) && (ab[i][j]!=ab[j][i]))
                flag2 = 0;
            if((i!=j) && (ab[i][j]==ab[i][j]))
                flag3 = 1;
        }
    }
    
    if(flag2==1)
        printf(" is symmetric\n");
    else if(flag2==0)
        printf(" not symmetric\n");
    if(flag3==0)
        printf(" antisymmetric\n");
    else if(flag3==1)
        printf(" not antisymmetric\n");
    //transitivity
    int flag4 = 1;
    for(int i = 0;i < size; i++){
        for(int j = 0;j < size; j++){
            for(int m = 0 ;m < size;m++){
                if(ab[i][j] == 1 && ab[j][m] == 1 && ab[i][m] == 0)
                    flag4 = 0;
                if (ab[i][j] == 1 && ab[j][m] == 1 && ab[i][m] == 1 )
                    flag4 = 2;
            }
        }
    }
    if (flag3==0)
        printf(" antitransitive.\n");
    else if (flag3==2)
        printf(" transitive.\n");
    else if (flag3==1)
        printf(" not transitive and not antitransitive.\n");
}
