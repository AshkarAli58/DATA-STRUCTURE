#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,n,j,k;
printf("Enter the size of first array");
scanf("%d",&n);
int arr1[n];
printf("Enter the elements of the first array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr1[i]);
}
printf("Enter the size of the second array");
scanf("%d",&k);
int arr2[k];
printf("Enter the elements of the second array:\n");
for(j=0;j<k;j++)
{
scanf ("%d",&arr2[j]);
}
int arr3[n+k];
i=j=0;
int m;
for(m=0;m<n+k;m++)
{
if(i<n && j<k)
{
if(arr1[i]<arr2[j])
{
arr3[m]=arr1 [i];
i++;
}
else
{
arr3[m]=arr2[j];
j++;
}}
else if(i<n)
{
arr3[m]=arr1[i];
i++;
}
else
{
arr3[m]=arr2[j];
j++;
}
}
printf("the merged array is:\n");
for(m=0;m<n+k;m++)
{
printf("%d",arr3[m]);
}
printf("\n");
}
