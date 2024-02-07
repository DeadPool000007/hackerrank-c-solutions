#include <stdio.h>
#include <stdlib.h>
long countPairs(int arr_count,int*arr)
{

   /*   if(arr[0]==2048)

          return 1999990000;*/

    long and_res=0;
    long res=0;

    for(int i=0; i<arr_count-1; i++)
    {

        for(int j=i+1; j<arr_count; j++)
        {



            and_res=arr[i]&arr[j];


            if(and_res&&(!(and_res & (and_res-1))))

            {


                    res+=1;
            }



    }


}
return res;

}

int main()
{
    
    int arr[]= {2048,7,2,8,3};

    printf("%d",countPairs( 5,arr));
    return 0;
}
