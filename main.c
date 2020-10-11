#include <stdio.h>
#include <stdbool.h>

void binarySearch(int size,int arr[], int sk){


    int first,last,position,mid;
    bool found;
    first=0;
    last=size-1;
    position=-1;
    found=false;
    mid=(first+last)/2;
    
    double start=clock();
    
    
         if (arr[mid]==sk) {

            found=true;

            position=mid;

        }

        else if (arr[mid]>sk){

            last=mid-1;

            mid=(first+last)/2;

        }

        else{

            first=mid+1;

            mid=(first+last)/2;

        }

    }
    
    printf("Position is : %d \n",position);
    double end=clock();
    double timetakes=(double)(end-start);
    printf("Takes time is : %lf \n",timetakes);
}

int main(){
    
    int z,s,i;

    printf("Enter size : ");

    scanf("%d",&z);

    

    int a[z];

    for (i=0; i<z; i++) {​​​​​​​

        printf("Enter %d data : ",i);

        scanf("%d",&a[i]);

    }​​​​​​​

    printf("Enter Search Key : ");

    scanf("%d",&s);

    

    binarySearch(z,a,s);
    
}

