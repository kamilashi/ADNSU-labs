#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int merge(int array[],int l,int r,int mid)
{int i,j,swap,k;
	int temp[r-l];
	for (int n = 0; n <= r-l; n++) 
	{temp[n] = array[l+n]; }
i=0; j=mid-l+1; k=l;
	while(i<mid-l+1 && j<=r-l)
	{
		if (temp[i]<=temp[j])
		{array[k]=temp[i];
		 i++;} else
		{
		array[k]=temp[j]; j++;
		}
		k++;}
	
	while (i < mid-l+1) 
    { 
        array[k] = temp[i]; 
        i++; 
        k++; } 

    while (j <=r-l) 
    { 
        array[k] = temp[j]; 
        j++; k++; 
    } } 
int mergesort(int array[], int l, int r)
{
if (l<r){
int mid=(l+r-1)/2;
	mergesort(array,l,mid);
	mergesort(array,mid+1,r); 
merge(array,l,r,mid);
	}}
int main() {
	printf("This program sorts a randomly generated array using the merge-sort algorithm.\n");
	int n,i,l,r,k,mid,count=0;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("\n");
	srand(time(NULL));
	int array[n]; 
for (k = 0; k < n; k++) 
	{
    array[k] = rand()%1001;
    printf("%d\n",array[k]);
	}
mergesort(array,0,n-1);
    printf("\nsorted array\n");
    for (k = 0; k < n; k++) 
	{ printf("%d\n",array[k]); }
     return 0; }

