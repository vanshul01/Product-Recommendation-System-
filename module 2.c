#include<stdio.h>
struct Node                 //structure for C1 and L1
{
    int element;
    int count;
    struct Node* next;
};
struct Node2                //structure for C2 and L2
{
    int element1;
    int element2;
    int count;
    struct Node2* next;
};
struct Node3                //structure for C3 and L3
{
    int element1;
    int element2;
    int element3;
    int count;
    struct Node3* next;
};

struct Node* head1;
struct Node* head2;
struct Node2* head3;
struct Node2* head4;
struct Node3* head5;
struct Node3* head6;
void main()
{
    int a[5][4];
    int *p,s;
    int count=0,c=0,co=0;
    int i,j,k;
    int items[8]={0,1,2,3,4,5,6,7};
    head1=NULL;             //head of C1
    head2=NULL;             //head of L1
    head3=NULL;             //head of C2
    head4=NULL;             //head of L2
    head5=NULL;             //head of C3
    head6=NULL;             //head of L3
    printf("\t\t\t\t\t\tAPRIORI ALGORITHM IMPLEMENTATION\n\n");
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
    printf("DATA SET IS:\n\n");
    for(i=0;i<5;i++)                    //printing dataset
    {
        for(j=0;j<4;j++)
        {
            int data=a[i][j];
            switch(data)
            {
            case 0:
                printf("Milk  ");
                break;
            case 1:
                printf("Bread  ");
                break;
            case 2:
                printf("Beer  ");
                break;
            case 3:
                printf("Diaper  ");
                break;
            case 4:
                printf("Cheese  ");
                break;
            case 5:
                printf("Water  ");
                break;
            case 6:
                printf("Umbrella  ");
                break;
            case 7:
                printf("Detergent  ");
                break;
            default:
                printf("Error");
            }

            if(j==3)
            {
                printf("\n");
            }
        }
    }
    printf("\nEnter support count\n");
    scanf("%d",&s);
    printf("\n\nSUPPORT COUNT IS %d\n",s);

    void Insert1(element,count)             //to insert data items in C1
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
    void Insert2(element,count)                 //to insert items in L1
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

    void Insert3(int element1,int element2)                  //to insert items in C2
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

    void Insert4(int element1,int element2,int count)         //to insert items in L2
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

    void Insert5(int element1,int element2,int element3)      //to insert items in C3
    {
        struct Node3* temp=(struct Node3*)malloc(sizeof(struct Node3));
        temp->element1=element1;
        temp->element2=element2;
        temp->element3=element3;
        temp->count=0;
        temp->next=NULL;
        if(head5==NULL)
        {
            head5=temp;
        }
        else
        {
            struct Node3* last;
            last=head5;
            while(last->next!=NULL)
            {
                last=last->next;
            }
            last->next=temp;
        }
    }

    void Insert6(int element1,int element2,int element3,int count)  //to insert items in L3
    {
        struct Node3* temp=(struct Node3*)malloc(sizeof(struct Node3));
        temp->element1=element1;
        temp->element2=element2;
        temp->element3=element3;
        temp->count=count;
        temp->next=NULL;
        if(head6==NULL)
        {
            head6=temp;
        }
        else
        {
            struct Node3* last;
            last=head6;
            while(last->next!=NULL)
            {
                last=last->next;
            }
            last->next=temp;
        }
    }

    void Print1(struct Node* head)                  //to print C1 and L1
    {
        struct Node* temp=head;
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

    void Print3(struct Node2* head)                  //to print C2 and L2
    {
        printf("\n");
        struct Node2* temp=head;
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

    void Print5(struct Node3* head)                  //to print C3 and L3
    {
        printf("\n");
        struct Node3* temp;
        temp=head;
        printf("List is:\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->element1);
            printf("%d ",temp->element2);
            printf("%d ",temp->element3);
            printf("%d ",temp->count);
            printf("\n");
            temp=temp->next;
        }
        printf("\n");
    }

    void InsertCount(struct Node2* temp,int count)       //to insert count of sets in C2
    {
        struct Node2* temp2=temp;
        temp2->count=count;
    }

    int Search(int search1,int search2)       //to calculate count of each set for C2
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

    void C2(struct Node2* head)              //to calculate C2
    {
        int count;
        int i,j,search1,search2;
        if(head==NULL)
        {
            return;
        }
        else
        {
            struct Node2* temp;
            temp=head;
            while(temp!=NULL)
            {
                search1=temp->element1;
                search2=temp->element2;
                count=Search(search1,search2);
                InsertCount(temp,count);
                temp=temp->next;
            }
        }
    }

    void sets(int arr[],int c)            //to make sets to insert in C2
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
    }

    int L2(struct Node2* head)           //to calculate L2
    {
        struct Node2* p;
        p=head;
        if(p==NULL)
        {
            return;
        }
        else
        {
            while(p!=NULL)
            {
                if(p->count>=s)
                {
                    Insert4(p->element1,p->element2,p->count);
                    co++;
                }
                p=p->next;
            }
        printf("L2");
        Print3(head4);
        return co;
        }
    }


    void traverse(struct Node* head,int c)          //to traverse L1
    {
        static int arr[100];
        int i;
        struct Node* temp=head;
        if(head==NULL)
        {
            return;
        }
        else
        {
            temp=head;
            while(temp!=NULL)
            {
                for(i=0;i<c;i++)
                {
                    arr[i]=temp->element;
                    temp=temp->next;
                }
            }
            sets(arr,c);
            C2(head3);
            printf("\nC2");
            Print3(head3);
        }
    }

    for(k=0;k<8;k++)                        //calculating C1
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
        Insert1(k,count);                   //inserting items in C1
        count=0;
    }

    int L1(struct Node* head)                       //calculating L1
    {
        struct Node* p;
        p=head;
        if(p==NULL)
        {
            return;
        }
        else
        {
            while(p!=NULL)
            {
                if(p->count>=s)
                {
                    Insert2(p->element,p->count);   //inserting items in L1
                    c++;
                }
                p=p->next;
            }
        Print1(head2);
        return c;
        }
    }

    printf("\nC1\n");
    Print1(head1);                     //to print C1
    printf("\nL1\n");
    c=L1(head1);                       //calling L1
    if(s>4)
    {
        printf("\nNO FREQUENT ITEMS FOUND\n");
    }

    traverse(head2,c);                 //traversing L1 to calculate C2
    co=L2(head3);                      //calling L2


    void InsertCount2(struct Node3* temp,int count)      //to insert count of each set of C3
    {
        struct Node3* temp2=temp;
        temp2->count=count;
    }

    int Search2(int search1,int search2,int search3)    //to get count of each set in C3
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
                            for(j=0;j<4;j++)
                            {
                                if(search3==a[i][j])
                                {
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
        }
        return count;
    }

    void C3(struct Node3* head)      //to calculate C3
    {
        int count;
        int i,j,search1,search2,search3;
        if(head==NULL)
        {
            return;
        }
        else
        {
            struct Node3* temp;
            temp=head;
            while(temp!=NULL)
            {
                search1=temp->element1;
                search2=temp->element2;
                search3=temp->element3;
                count=Search2(search1,search2,search3);
                InsertCount2(temp,count);
                temp=temp->next;
            }
        }
    }

    void sets2(int arr[],int size)      //creating sets for C3
    {
        int i,k,l;
        for(i=0 ; i < size-1 ; i++)
        {
            for( k=i+1; k < size; k++)
            {
                for(l=i+2; l < size; l++)
                {
                    if(k != i && k!=l && l!=i)
                    {
                        int element1=arr[i];
                        int element2=arr[k];
                        int element3=arr[l];
                        Insert5(element1,element2,element3);
                    }
                }
            }
        }
    }
    void remove_redundant(int arr[],int l)   //removing redundant elements of array in order to make sets
    {
        int i,j,k;
        for(i=0;i<l;i++)
        {
            for(j=i+1;j<l;j++)
            {
                if(arr[j]==arr[i])
                {
                    for(k=j;k<l;k++)
                    {
                        arr[k]=arr[k+1];
                    }
                    l--;
                    j--;
                }
            }
        }
        sets2(arr,l);
    }
    void traverse2(struct Node2* head,int co)       //to traverse L2
    {
        static int arr[100];
        int *a;
        int i;
        struct Node2* temp;
        if(head==NULL)
        {
            return;
        }
        else
        {
            temp=head;
            while(temp!=NULL)
            {
                i=0;
                while(i<co*2)
                {
                    arr[i]=temp->element1;
                    arr[i+1]=temp->element2;
                    i+=2;
                    temp=temp->next;
                }
            }
            remove_redundant(arr,co*2);
            C3(head5);
            printf("\nC3");
            Print5(head5);
        }

    }
    void Final2(int a, int b)   //to print frequent itemsets of 2 pairs
    {
        printf("FREQUENTLY BOUGHT ITEMS ARE\n");
        switch(a)
        {
            case 0:
                printf("Milk  ");
                break;
            case 1:
                printf("Bread  ");
                break;
            case 2:
                printf("Beer  ");
                break;
            case 3:
                printf("Diaper  ");
                break;
            case 4:
                printf("Cheese  ");
                break;
            case 5:
                printf("Water  ");
                break;
            case 6:
                printf("Umbrella  ");
                break;
            case 7:
                printf("Detergent  ");
                break;
            default:
                printf("Error");
        }
        switch(b)
        {
            case 0:
                printf("Milk  \n");
                break;
            case 1:
                printf("Bread  \n");
                break;
            case 2:
                printf("Beer  \n");
                break;
            case 3:
                printf("Diaper  \n");
                break;
            case 4:
                printf("Cheese  \n");
                break;
            case 5:
                printf("Water  \n");
                break;
            case 6:
                printf("Umbrella  \n");
                break;
            case 7:
                printf("Detergent  \n");
                break;
            default:
                printf("Error");
        }
    }
    void traverse4(struct Node2* head,int co) //to traverse L2 to print final
    {
        struct Node2* temp;
        if(head==NULL)
        {
            return;
        }
        else
        {
            temp=head;
            while(temp!=NULL)
            {
                Final2(temp->element1,temp->element2);
                temp=temp->next;
            }
        }
    }

    void L3(struct Node3* head)     //to calculate L3
    {
        struct Node3* p;
        p=head;
        if(p==NULL)
        {
            traverse4(head4,co);
            return;
        }
        else
        {
            while(p!=NULL)
            {
                if(p->count>=s)
                {
                    Insert6(p->element1,p->element2,p->element3,p->count);
                }
                p=p->next;
            }
            printf("\nL3");
            Print5(head6);
        }
    }

    traverse2(head4,co);
    L3(head5);

    void Final(int a, int b, int c)  //to print frequent itemsets of 3 pairs
    {
        printf("FREQUENTLY BOUGHT ITEMS ARE\n");
        switch(a)
        {
            case 0:
                printf("Milk  ");
                break;
            case 1:
                printf("Bread  ");
                break;
            case 2:
                printf("Beer  ");
                break;
            case 3:
                printf("Diaper  ");
                break;
            case 4:
                printf("Cheese  ");
                break;
            case 5:
                printf("Water  ");
                break;
            case 6:
                printf("Umbrella  ");
                break;
            case 7:
                printf("Detergent  ");
                break;
            default:
                printf("Error");
        }
        switch(b)
        {
            case 0:
                printf("Milk  ");
                break;
            case 1:
                printf("Bread  ");
                break;
            case 2:
                printf("Beer  ");
                break;
            case 3:
                printf("Diaper  ");
                break;
            case 4:
                printf("Cheese  ");
                break;
            case 5:
                printf("Water  ");
                break;
            case 6:
                printf("Umbrella  ");
                break;
            case 7:
                printf("Detergent  ");
                break;
            default:
                printf("Error");
        }
        switch(c)
        {
            case 0:
                printf("Milk  \n");
                break;
            case 1:
                printf("Bread  \n");
                break;
            case 2:
                printf("Beer  \n");
                break;
            case 3:
                printf("Diaper  \n");
                break;
            case 4:
                printf("Cheese  \n");
                break;
            case 5:
                printf("Water  \n");
                break;
            case 6:
                printf("Umbrella  \n");
                break;
            case 7:
                printf("Detergent  \n");
                break;
            default:
                printf("Error");
        }
    }

    void traverse3(struct Node3* head)  //to traverse L3 to print final
    {
        struct Node3* temp;
        if(head==NULL)
        {
            return;
        }
        else
        {
            temp=head;
            while(temp!=NULL)
            {
                Final(temp->element1,temp->element2,temp->element3);
                temp=temp->next;
            }
        }
    }
    traverse3(head6);
}
