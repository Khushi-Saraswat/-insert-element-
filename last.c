# include <stdio.h>

int main()
{
  int arr[200],item,n,i,k;
  printf("\n enter the size of array:");
  scanf("%d",&n);
  printf("\n enter element 1 by 1:");
  for(i=0;i<n;i++)
  {
       scanf("%d",&arr[i]);

  }
  printf("\n enter the element that u want to insert:");
  scanf("%d",&item);
  printf("\n enter the location where u want to insert:");
  scanf("%d",&k);
   n++;
  int j=n;

  while(j>=k)
  {

      arr[j+1]=arr[j];
      j--;

  }
  arr[k]=item;

  printf("\n array after insertion: ");
  for(i=0;i<n;i++)
  {
     printf("\n %d",arr[i]);

  }
  return 0;}
