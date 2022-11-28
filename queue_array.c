#include <stdio.h>
#include<stdlib.h>
#define N 5
 int queue[5];
 int rear=-1;
 int front=-1;
 void enqueue(int x)  //insertion of element in queue
 {
    if (rear==N-1)
    {
        printf("\n Queue is overflow!");
    }
    else if (front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
 }
 void dequeue()
 {
    if (front==-1&&rear==-1)
    {
        printf("\n queue is underflow!\n");
    }
    else if (front==rear)
    {
        front=rear=-1;
    }
    else{
        front++;
    }
 }
 void display()
 {
    if (front==-1&&rear==-1)
    {
         printf("\n queue is underflow!\n");
    }
    else{
        for(int i=front;i<rear+1;i++)
        {
            printf("%d-",queue[i]);
        }
    }
 }
 void peek()
 {
    if (front==-1&&rear==-1)
    {
         printf("\n queue is underflow!\n");
    }
    else{
        printf("peek: %d",queue[front]);
    }
 }

int main(){
int a=0,b;
    while(a<N)
    {
        printf("\n\nWelcome to queue:\n1:enqueue\n2:dequeue\n3:peek\n4:EXIT\n");
        printf("Enter Input:");
        scanf("%d",&a);
        if (a==1)
        {
            printf("\nEnter number for insertion: ");
            scanf("%d",&b);
            enqueue(b);
            display();
        }
        else if(a==2)
        {
            
            dequeue();
            display();
        }
        else if(a==3)
        {
            peek();
        }
        else if (a==4){
            exit(0);
        }
        else
        {
            printf("Invalid input !");
            main();
        }
    }
    return 0;
}