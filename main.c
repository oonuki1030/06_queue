#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[100];
    int x,i,j=0;
    int que[100];
    
    for(i=0;i<100;i++)
    {
        que[i]=\0;   
    }
    
    while(fgets(str, sizeof(str), stdin))
    {
        x=atoi(str);
        
        if(x==0)
        {
          for(i=0;i<j;i++)
          {
              printf("%d,",que[i]);
          }
            printf("\n");
        }  
        else if(x==-1)
        {
            printf("%d\n",que[0]);
             for(i=0;i<j;i++)
                 a[i]=a[i+1];
             a[j-1]='\0';
             j--;
        }
        else
        {
                x=que[j];
                j++;
        }
    }

    return 0;
}
