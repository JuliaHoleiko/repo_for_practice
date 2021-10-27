#include <stdio.h>
#include <stdlib.h>

int search (int a[],int n) {
    
    int b=0;
    for (int i=0; i<n; i++) {
        b=b^a[i];    
    }
    return b;
}

int main() {
    int a[]= {1,2,3,2,1,};
    
    int n = sizeof(a)/sizeof(int);
    printf("%i", search(a,n));

   

}
