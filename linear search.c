#include<stdio.h>
int main()
{
   int n,key,c=0;
   scanf("%d%d",&n,&key);
   int a[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       if(a[i]==key)
       {
           printf("Found");
           c=1;
           break;
       }
       
   }
   if(c!=1)
   {
       printf("Not found");
   }
    
}