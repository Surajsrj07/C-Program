// Shop Management using Structure & Union

#include <stdio.h>

// Book ->Name , author ,price
// Cell ->Model ,price ,color

struct store
{
    double price; // 8
    char *name;   // 4
    char *author; // 4
    char *model;  // 4
    char *color;  // 4

} o;

struct store2
{
    double price; // 8
    union
    {
        struct
        {
            char *name;
            char *author;
        } book;

        struct
        {
            char *model;
            char *color;
        }cell;
    }product;

} o2;

int main()

{
    o.model = "Nokia";
    o.color = "Red";
    o.price = 3585.00;
    printf("\n Size  : %d", sizeof(struct store));  // 24 bytes
    printf("\n Size  : %d", sizeof(struct store2)); // 16 bytes

    o2.product.cell.model="Nokia";
    o2.product.cell.color="Red";
    o2.price =3585.00;
    

    printf("\nModel : %s",o2.product.cell.model);
    printf("\nColor : %s",o2.product.cell.color);
    printf("\nPrice : %0.2f",o2.price);


        return 0;
}