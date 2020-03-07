#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

 

 

 

int main()

{

    //defining the array size

    int arraySize;

    printf("insert the array size: \n");

    scanf("%d",&arraySize);

    //defining the array

    int array[arraySize];

    //filling the array elements

    for(int i=0;i<arraySize;i++){

        printf("insert the item number %d in the array: \n", i+1);

        scanf("%d",&array[i]);

    }

    //defining the item to be deleted

    printf("insert the element to be deleted: \n");

    int pickedItem;

    scanf("%d",&pickedItem);

    //searching for the item

    for (int i=0; i<arraySize; i++) {

        if(array[i]==pickedItem){

            array[i] = array[arraySize-1];

            break;

        }

    }

    //printing the new array

    printf("the array after removal is: \n");

    for (int i=0; i<arraySize-1; i++){

        printf("%d ",array[i]);

    }

    return 0;

}
