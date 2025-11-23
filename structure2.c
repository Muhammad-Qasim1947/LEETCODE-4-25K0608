// You are transporting some boxes through a tunnel, where each box is a parallelepiped, 
// and is characterized by its length, width and height.

// The height of the tunnel  feet and the width can be assumed to be infinite. A box can be
//  carried through the tunnel only if its height is strictly less than the tunnel's height. 
//  Find the volume of each box that can be successfully transported to the other end of the tunnel.
//   Note: Boxes cannot be rotated.

// Input Format

// The first line contains a single integer , denoting the number of boxes.
//  lines follow with three integers on each separated by single spaces  ,  and  which are length, 
//  width and height in feet of the -th box.

#include <stdio.h>

struct box{
    int length ;
    int width ;
    int height ;
};

int main(){
    int tunnelheight = 41 ;
    int n ;
    printf("Enter The Number Of Boxes : ");
    scanf("%d",&n);

    struct box value[n] ;
    for (int i = 0; i < n; i++){
        printf("\nEnter the length For Box %d : ",i+1);
        scanf("%d",&value[i].length);
        printf("\nEnter the width For Box %d : ",i+1);
        scanf("%d",&value[i].width);
        printf("\nEnter the height For Box %d : ",i+1);
        scanf("%d",&value[i].height);
    }

    for (int i = 0; i < n ; i++){
        if (value[i].height < tunnelheight){
            int volume ;
            volume = value[i].height * value[i].width * value[i].length ;
            printf("%d\n", volume);
        }
    }
    
    return 0 ;
}