#include<stdio.h>
struct stores
{
    char name[20];
    float price;
    int quantity;
};
struct stores update(struct stores product,float p,int q)
{
    product.price=product.price+p;
    product.quantity=product.quantity+q;
    return(product);
}
void main()
{
  float increment, value;
  int quantity;
  printf("Enter value to be stored: ");
  scanf("%f",&value);
  printf("Enter price increment: ");
  scanf("%f",&increment);
  printf("Enter quantity increment:");
  scanf("%d",&quantity);

  struct stores item={"XYZ",25.75,12};
  item=update(item,increment,quantity);

  printf("New price = %f\n",item.price);
  printf("New quantity = %d",item.quantity);

}
