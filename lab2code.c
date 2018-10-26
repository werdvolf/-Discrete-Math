
#include<stdio.h>

int main(void)
{
    //масив 1
    int n, k;
    do {
    printf("Кількість елементів в множині (1)");
    scanf("%d", &n);
    }
    while(n<0);
    int p[n];
    for (int i=0;i<n;i++) {
    do{
        k=0;
        scanf("%d", &p[i]);
        for(int j=0;j<i;j++){
            if(p[i]==p[j])
                k++;
    }
    }
    while (k>0);
    }
    //Масив 2
    int m;
    do {
    printf("Кількість елементів в множині (2)");
    scanf("%d", &m);
    }
    while(m<0);
    int t[m];
    for (int i=0;i<m;i++) {
    do{
        k=0;
        scanf("%d", &t[i]);
        for(int j=0;j<i;j++){
            if(t[i]==t[j])
                k++;
    }
    }
    while (k>0);
    }

    //переріз
    printf("Переріз { ");
    int a=0;
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            if (p[j]==t[i]){
                printf("%d ", t[i]);
                a++;
            }
        }
    }
    printf("}\n");
    printf("Потужність перерізу (%d)", a);
    //об'єднання
    printf("Об'єдняння = {");
    for (int i = 0; i < m; i++) {
        int c = 1;
            for (int j = 0; j < n; j++){
        if (p[i] == t[j])
          c = 0;
            }
    if (c == 1)
      printf("%d ", p[i]);
    }
    for (int j = 0; j < n; j++) {
    printf("%d ", t[j]);
    }
printf("}\n");

}
