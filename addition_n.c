/*
steps
step1: understand the problem statement
step 2: write the algorithm
step 3: decide the programming lang
step 4: write the program
step 5: test the program
*/

//accept n numbers from user and perform addition
//input
//value of N = 5
// values : 10 20 30 40 50
//output
//Addition is : 150
//Algorithm
/*
START
      accept the numbers from user 
      allocate memory to store the numbers
      accept the numbers
      perform addition of all numbers
      display the addition

END
*/
#include<stdio.h>  //for printf and scanf
#include<stdlib.h> //for malloc and free
//////////////////////////////////////////
// application name : Addition of two numbers
// input :  n numbers
//output: addition
//author :  gaikwad prajakta ashok
// date : 18 september 2022
//////////////////////////////////////////
int main()
{
    int *Arr = NULL;
    int iSize = 0;
    register int i = 0;
    int iSum = 0;
    printf("please enter how many size you want ? \n");
    scanf("%d",&iSize);
     
     // allocate the memory
     Arr = (int *)malloc(iSize * sizeof(int));
     printf("please enter the elements\n");
     for(i=0; i<iSize; i++)
     {
        scanf("%d",&Arr[i]);
     }
     //perform addition
     for(i=0; i<iSize; i++)
     {
        iSum = iSum + Arr[i];
     }
     printf("Addition is : %d\n",iSum);
     free(Arr);
     printf("memory gets deallocated");
     return 0;
}