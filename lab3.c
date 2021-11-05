#include <stdio.h>
#include <stdlib.h>

int search (int input_array[],int size_of_array) {
    
    int extra_number = 0;
    for (int i = 0; i < n; i++) {
        extra_number = extra_number ^ input_array[i];    
    }
    return extra_number;
}

int main() {
    int input_array[] = {1,2,3,2,1,};
    
    int size_of_array = sizeof(input_array)/sizeof(int);
    printf("%i", search(input_array,size_of_array));

   

}
