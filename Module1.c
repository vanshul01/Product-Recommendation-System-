#include<stdio.h>
struct Node
{
    int element;
    int count;
    struct Node* next;
};
struct Node2
{
    int element1;
    int element2;
    int count;
    struct Node2* next;
};
//Linked list is created using 2 structures Node & Node2 each containing data element and next pointer
struct Node* head1;
struct Node* head2;
struct Node2* head3;
struct Node2* head4;
void main()
{
    int a[5][4];
    int *p;
    int s=3; //Support count is 3
    int count=0,c=0;
    int i,j,k;
    int items[8]={0,1,2,3,4,5,6,7};
    head1=NULL;
    head2=NULL;
    head3=NULL;
    head4=NULL;
    void Insert1(element,count)
    {
        struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
        temp->element=element;
        temp->count=count;
        temp->next=NULL;
        if(head1==NULL)
        {
            head1=temp;
        }
        else
        {
            struct Node* last;
            last=head1;
            while(last->next!=NULL)
            {
                last=last->next;
            }
            last->next=temp;
        }
    }
//Function to input head1 of structure node and it takes element and count as input parameter
    void Insert2(element,count)
    {
        struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
        temp->element=element;
        temp->count=count;
        temp->next=NULL;
        if(head2==NULL)
        {
            head2=temp;
        }
        else
        {
            struct Node* last;
            last=head2;
            while(last->next!=NULL)
            {
                last=last->next;
            }
            last->next=temp;
        }
    }
 //Function to input value for head2
    printf("Milk=0\n");
    printf("Bread=1\n");
    printf("Beer=2\n");
    printf("Diaper=3\n");
    printf("Cheese=4\n");
    printf("Water=5\n");
    printf("Umbrella=6\n");
    printf("Detergent=7\n");
    printf("\n");
    a[0][0]=0;
    a[0][1]=1;
    a[0][2]=2;
    a[0][3]=3;
    a[1][0]=4;
    a[1][1]=0;
    a[1][2]=1;
    a[1][3]=5;
    a[2][0]=2;
    a[2][1]=6;
    a[2][2]=0;
    a[2][3]=1;
    a[3][0]=7;
    a[3][1]=5;
    a[3][2]=3;
    a[3][3]=4;
    a[4][0]=0;
    a[4][1]=4;
    a[4][2]=2;
    a[4][3]=1;
    printf("Values inserted\n");                //print inserted values
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",a[i][j]);
            if(j==3)
            {
                printf("\n");
            }
        }
    }
    void Print1(int *head)                      //Print values of head pointer from Node
    {
        struct Node* temp=*head;
        printf("List is:\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->element);
            printf("%d ",temp->count);
            printf("\n");
            temp=temp->next;
        }
        printf("\n");
    }
    void Print3(int *head)                      //Print values of head pointer from Node2
    {
        printf("\n");
        struct Node2* temp=*head;
        printf("List is:\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->element1);
            printf("%d ",temp->element2);
            printf("%d ",temp->count);
            printf("\n");
            temp=temp->next;
        }
        printf("\n");
    }
    printf("\n");
    printf("SUPPORT COUNT IS %d\n",s);
    printf("\n");
    printf("C1\n");
    for(k=0;k<8;k++)
    {
        int search=items[k];
        for(i=0;i<5;i++)
        {
            for(j=0;j<4;j++)
            {
                if(search==a[i][j])
                {
                    count++;
                }
            }
        }
        Insert1(k,count);
        count=0;
    }
    Print1(&head1);
    printf("\n");
    printf("L1\n");
    int L1(int *head)                                      //To print items that are frequently bought(count greater than minimum support)
    {
        struct Node* p;
        p=*head;
        while(p!=NULL)
        {
            if(p->count>=s)
            {
                Insert2(p->element,p->count);
                c++;
            }
            p=p->next;
        }
        Print1(&head2);
        return c;
    }
    c=L1(&head1);
    void Insert3(int element1,int element2)                                    //To inseret value in head3 of Node2
    {
        struct Node2* temp=(struct Node2*)malloc(sizeof(struct Node2));
        temp->element1=element1;
        temp->element2=element2;
        temp->count=0;
        temp->next=NULL;
        if(head3==NULL)
        {
            head3=temp;
        }
        else
        {
            struct Node2* last;
            last=head3;
            while(last->next!=NULL)
            {
                last=last->next;
            }
            last->next=temp;
        }
    }
    void Insert4(int element1,int element2,int count)                        //To insert value in head4 of Node2
    {
        struct Node2* temp=(struct Node2*)malloc(sizeof(struct Node2));
        temp->element1=element1;
        temp->element2=element2;
        temp->count=count;
        temp->next=NULL;
        if(head4==NULL)
        {
            head4=temp;
        }
        else
        {
            struct Node2* last;
            last=head4;
            while(last->next!=NULL)
            {
                last=last->next;
            }
            last->next=temp;
        }
    }
    void L2(int *head)
    {
        struct Node2* p;
        p=*head;
        while(p!=NULL)
        {
            if(p->count>=s)
            {
                Insert4(p->element1,p->element2,p->count);
                c++;
            }
            p=p->next;
        }
        printf("\nL2");
        Print3(&head4);
    }
    void InsertCount(int *temp,int count)                                  //To insert value of count
    {
        struct Node2* temp2=*temp;
        temp2->count=count;
    }
    int Search(int search1,int search2)                                  //To search values in linked list using linear search algo
    {
        int count=0;
        for(i=0;i<5;i++)
        {
            for(j=0;j<4;j++)
            {
                if(search1==a[i][j])
                {
                    for(j=0;j<4;j++)
                    {
                        if(search2==a[i][j])
                        {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
    void fun(int *head)                                                //To take values to be searched in the linked list
    {
        int count;
        int i,j,search1,search2;
        if(*head==NULL)
        {
            printf("List is empty\n");
        }
        else
        {
            struct Node2* temp;
            temp=*head;
            while(temp!=NULL)
            {
                search1=temp->element1;
                search2=temp->element2;
                count=Search(search1,search2);
                InsertCount(&temp,count);
                temp=temp->next;
            }
        }
    }
    void sets(int *arr,int c)
    {
        int i,k;
        for(i=0 ; i < c-1 ; i++)
        {
            for( k=i+1; k < c; k++)
            {
                if(k != i)
                {
                    int element1=arr[i];
                    int element2=arr[k];
                    Insert3(element1,element2);
                }
            }
        }
        fun(&head3);
        printf("\nC2");
        Print3(&head3);
        L2(&head3);
    }
    int* traverse(int *head,int c)
    {
        static int arr[100];
        int i;
        struct Node* temp=*head;
        if(*head==NULL)
        {
            printf("List is empty\n");
            return;
        }
        else
        {
            temp=*head;
            while(temp!=NULL)
            {
                for(i=0;i<c;i++)
                {
                    arr[i]=temp->element;
                    temp=temp->next;
                }
            }
        }
        sets(arr,c);
    }
    traverse(&head2,c);
}
