/*1. Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.*/


#include<stdio.h>

struct Box {
    int length;
    int width;
    int height;
};

void volume(struct Box b1)
{
    printf("Volume of the box: %d\n", b1.length * b1.width * b1.height); 
}

void tsa(struct Box b1)
{
    float result=2*(b1.length*b1.width + b1.width*b1.height + b1.length*b1.height);
    printf("Total surface area of the box: %f",result);
}

int main() {
    struct Box b;
    printf("Enter length, width, and height of the box:\n");
    scanf("%d %d %d", &(b.length), &(b.width), &(b.height));
    volume(b);

    tsa(b);
    
    return 0;
}
