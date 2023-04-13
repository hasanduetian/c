#include<stdio.h>

// for call by value
void func1(int arr[]){
    for (int i = 0; i < 5; i++)
    {
        printf("the value of %d is %d \n",i,arr[i]);
    }
    arr[2]=564;//remember if you change the value of array in function , it gets
    // reflected the main function becouse array pointer pass kore
}

    // for call by refarence
    void fun(int* ptr){
           for (int i = 0; i < 5; i++){
        printf("the value of %d is %d \n",i,*(ptr+i/*or ptr[i]*/));
    }
    *(ptr+2)=125;// change the value of array[2]
    }

    // for 2D array
    void fun3(int a[2][2]){
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                 printf("the value of %d %d is %d \n",i,j,a[i][j]);
            }
            
        }
        
    }

int main(){
    int arr[]={1,2,3,4,5};
    // for call by value
     printf("the value of 3 is %d \n",arr[2]);
    func1(arr);
    printf("the value of 3 is %d \n\n\n",arr[2]);

    // for call by referance
    fun(arr);
    printf("\n\n");
  
    // for 2D array
    int a[][2]={{10,15},{20,30}};
    fun3(a);
 
    
}