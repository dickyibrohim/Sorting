#include <stdio.h>
#include <stdlib.h>

int main()
{   int i, j, k, n,m, swap;
    int ar [7]={5,3,8,6,1,7,4};
    for (i=0;i<7;i++)
    {

        printf ("%d ",ar[i]);
    }

    for (j=0;j<7;j++)
    {
       for (k=0;k<7;k++)
       {
         if (ar[k+1]<ar[k])
            {
                swap= ar[k];
                ar[k]=ar[k+1];
                ar[k+1]= swap;

            }
       }
    }
    printf ("\n Ascending Order By DICKY IBROHIM: \n");
    for (i=0; i<7;i++)
    {
        printf (" %d ",ar[i]);
    }

    // DESCENDING

       for (n=0;n<7;n++)
    {
       for (m=0;m<7;m++)
       {
          if (ar[m+1]>ar[m])
            {
                swap= ar[m];
                ar[m]=ar[m+1];
                ar[m+1]= swap;

            }
       }
    }

printf ("\n Descending Order By DICKY IBROHIM: \n");
    for (i=0; i<7;i++)
    {
        printf (" %d ",ar[i]);
    }
 /*
    printf ("\n Order By DICKY IBROHIM: \n");
    for (k=7; k>0;k--)
    {
        printf (" %d ",ar[k-1]);
    }
     printf ("\nEVEN Order By DICKY IBROHIM: \n");
    for (k=7; k>0;k--)
    {
        if (ar[k-1]%2==0)
        {
            printf (" %d ",ar[k-1]);
        }

    }
    */
    return 0;
}
