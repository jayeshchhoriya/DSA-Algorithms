#include<stdio.h>
void main()
{
int arr[10]={-1};
int i, j, n, flag = 1, gap_size, temp;
printf("\n Enter the number of elements in the array: ");
scanf("%d", &n);
printf("\n Enter %d numbers: ",n); // n was added
for(i=0;i<n;i++)
scanf("%d", &arr[i]);
gap_size = n;
while(flag == 1 || gap_size > 1)
{
flag = 0;
gap_size = (gap_size + 1) / 2;
for(i=0; i< (n - gap_size); i++)
{
if( arr[i+gap_size] < arr[i])
{
temp = arr[i+gap_size];
arr[i+gap_size] = arr[i];
arr[i] = temp;
flag = 0;
}
}
}
printf("\n The sorted array is: \n");
for(i=0;i<n;i++){
printf(" %d\t", arr[i]);
}
getch();
}