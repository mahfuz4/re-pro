
// #include <stdio.h>


// int findOdd(int arr[], int n)
// {
//     int res = 0, i;
//     for (i = 0; i < n; i++)
//         res ^= arr[i];
//     return res;
// }

// int main()
// {
//     int arr[] = { 12, 12, 14, 90, 14, 14, 14 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("The odd occurring element is %d ",
//            findOdd(arr, n));
//     return 0;
// }

#include <stdio.h>

int main(){
    int arr[] = {4,2,8,12,4};
    int sum = 0, n = 0; 
    int lofarr= sizeof(arr)/sizeof(arr[n]);

    for(int i =0; i<lofarr; i++){
        sum+=arr[i];
    }
    printf("%d", sum);

    

    return 0;
}


// C Program to demonstrate use of bitwise operators
// #include <stdio.h>
// int main()
// {
//     // a = 5(00000101), b = 9(00001001)
//     unsigned char a = 5, b = 9;
  
//     // The result is 00001100
//     printf("a^b = %d\n", a ^ b);
//     // output: a^b = 12
  
//     return 0;
// }
