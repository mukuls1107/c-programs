#include <stdio.h>
int* twoSum();
void main()

{
    twoSum();
}

int* twoSum()
{
    int numsSize ;
    printf("Enter the size of array: \n");
    scanf("%d", &numsSize); 
    
    int nums[numsSize];


    printf("Enter the % d elements: \n", numsSize );
    for(int i = 0; i < numsSize; i++){
        printf("Elements %d: \n", i+1);
        scanf("%d", &nums[i]);
    }

    int target;
    printf("Enter the target value: \n");
    scanf("%d", &target);

    int count=1, a=0, ind1,ind2;

    for(int i=0; i < numsSize; i++)
    {
        if((nums[i] + nums[count]) != target){
            count++;

        }else if((nums[i] + nums[count]) == target){
            ind1 = i;
            ind2 = count;
        }
    }

    printf("Indice1: %d and Indice2: %d", ind1, ind2);
    return 0;

}
