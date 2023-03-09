#include<stdio.h>
void read(int[],int);
void merge(int[],int[],int,int);
void display(int[],int );
int main()
{
     int n1,n2;
     int m1[100],m2[100];
     printf("Enter the size of 1st Array: ");
     scanf("%d",&n1);
     read(m1,n1);
     printf("Enter the size of 2nd Array: ");
     scanf("%d",&n2);
     read(m2,n2);
     merge(m1,m2,n1,n2);

}
void read(int m[100],int n)
{
      int i;
      for(i=0;i<n;i++)
      {
         scanf("%d",&m[i]);
      }
}
void display(int m[100],int n)
{
      int i;
      for(i=0;i<n+1;i++)
      {
         printf("%d ",m[i]);
      }
}
void merge(int m1[100],int m2[100],int n1,int n2)
{
      int n3,i,j;
      n3=n1+ n2;
      int c[n3];
      for(i=0;i<n1;i++)
      {
         c[i]=m1[i];
      }
      for(i=0,j=n1;j<n3&&i<n2;i++,j++)
      {
          c[j]=m2[i];
      }
      printf("\n ARR[%d]: Array Elements After Merging\n",n3);
      for(i=0;i<n3;i++)
      {
           printf(" %d \t",c[i]);
      }
}
