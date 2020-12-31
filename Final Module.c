#include<stdio.h>
struct Node                 //structure for C1 and L1; here C is the candidate list and L is the final list
{
    int element;
    int count;
    struct Node* next;     //next pointer
};
struct Node2                //structure for C2 and L2; here C is the candidate list and L is the final list
{
    int element1;           
    int element2;           // Node 2 uses 2 elements as items are grouped into a set of 2
    int count;
    struct Node2* next;    // next pointer
};
struct Node3                //structure for C3 and L3; here C is the candidate list and L is the final list
{
    int element1;
    int element2;
    int element3;           // Node 3 uses 3 elements as items are grouped into a set of 3
    int count;
    struct Node3* next;     // next pointer
};

struct Node* head1;         //declaration of head pointers
struct Node* head2;
struct Node2* head3;
struct Node2* head4;
struct Node3* head5;
struct Node3* head6;
void main()
{
    int a[5][4], b[5][4],r[5][4];   //Declaring 3 arrays for - summer, winter and rainy season
    int *p, *p_w;
    int s=3;                //support count is 3
    int count=0,c=0,co=0;          
    int i,j,k;
    int items[8]={0,1,2,3,4,5,6,7};            // defined an array for items in summer
    int items_w[8]={8,9,10,11,12,13,14,15};   // defined an array for items in winter
    int items_r[8]={16,17,18,19,20,21,22,23}; // defined an array for items in rain
    head1=NULL;             //head of C1
    head2=NULL;             //head of L1
    head3=NULL;             //head of C2
    head4=NULL;             //head of L2
    head5=NULL;             //head of C3
    head6=NULL;             //head of L3
    printf("Milk=0\n");     //printing the list of items in summer season
    printf("Bread=1\n");
    printf("Beer=2\n");
    printf("Diaper=3\n");
    printf("Cheese=4\n");
    printf("Softdrinks=5\n");
    printf("Denims=6\n");
    printf("Detergent=7\n");
    printf("\n");
    a[0][0]=0;             //assigning values to the array to create a dataset
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
    printf("\n\n");
    printf("Transactions for Summer season:\n");
    printf("DATA SET IS:\n");
    for(i=0;i<5;i++)                    //printing dataset
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
            if(j==3)
            {
                printf("\n");
            }
        }
    }
    printf("SUPPORT COUNT IS %d\n",s);     //printing the support count

    void Insert1(element,count)             //to insert data items in C1 (candidate list)
    {                                       //c1 consists of single items only
        struct Node* temp=(struct Node*)malloc(sizeof(struct Node));  //dynamic memory allocation using malloc
        temp->element=element;
        temp->count=count;
        temp->next=NULL;
        if(head1==NULL)                   //if head is null make the element the first item
        {
            head1=temp;
        }
        else
        {
            struct Node* last;          
            last=head1;
            while(last->next!=NULL)     //if head is not null then put the item after the present item
            {
                last=last->next;
            }
            last->next=temp;
        }
    }
    void Insert2(element,count)                 //to insert items in L1 (final list)
    {                                           //l1 consists of single items only
        struct Node* temp=(struct Node*)malloc(sizeof(struct Node));  //dynamic memory allocation using malloc
        temp->element=element;
        temp->count=count;
        temp->next=NULL;
        if(head2==NULL)                         //if head is null make the element the first item
        {
            head2=temp;
        }
        else
        {
            struct Node* last;
            last=head2;
            while(last->next!=NULL)              //if head is not null then put the item after the present item
            {
                last=last->next;
            }
            last->next=temp;
        }
    }

    void Insert3(int element1,int element2)                  //to insert items in C2 (candidate list)
    {                                                         //c2 consists of group of 2 itemsets
        struct Node2* temp=(struct Node2*)malloc(sizeof(struct Node2));  //dynamic memory allocation using malloc
        temp->element1=element1;
        temp->element2=element2;
        temp->count=0;
        temp->next=NULL;
        if(head3==NULL)                          //if head is null make the element the first itemset
        {
            head3=temp;
        }
        else
        {
            struct Node2* last;
            last=head3;
            while(last->next!=NULL)               //if head is not null then put the item after the present itemset
            {
                last=last->next;
            }
            last->next=temp;
        }
    }

    void Insert4(int element1,int element2,int count)         //to insert items in L2 (Final list)
    {                                                         //l2 consists of group of 2 itemsets
        struct Node2* temp=(struct Node2*)malloc(sizeof(struct Node2));    //dynamic memory allocation using malloc
        temp->element1=element1;
        temp->element2=element2;
        temp->count=count;
        temp->next=NULL;
        if(head4==NULL)                        //if head is null make the element the first itemset
        {
            head4=temp;
        }
        else
        {
            struct Node2* last;
            last=head4;
            while(last->next!=NULL)             //if head is not null then put the item after the present itemset
            {
                last=last->next;
            }
            last->next=temp;
        }
    }

    void Insert5(int element1,int element2,int element3)      //to insert items in C3
    {                                                         //c3 contains group of 3 itemsets
        struct Node3* temp=(struct Node3*)malloc(sizeof(struct Node3));     //dynamic memory allocation using malloc
        temp->element1=element1;
        temp->element2=element2;
        temp->element3=element3;
        temp->count=0;
        temp->next=NULL;
        if(head5==NULL)                         //if head is null make the element the first itemset
        {
        {
            head5=temp;
        }
        }
        else
        {
            struct Node3* last;
            last=head5;
            while(last->next!=NULL)             //if head is not null then put the item after the present itemset
            {
                last=last->next;
            }
            last->next=temp;
        }
    }


    void Insert6(int element1,int element2,int element3,int count)  //to insert items in L3
    {                                                               //l3 contains group of 3 itemsets
        struct Node3* temp=(struct Node3*)malloc(sizeof(struct Node3));       //dynamic memory allocation using malloc
        temp->element1=element1;
        temp->element2=element2;
        temp->element3=element3;
        temp->count=count;
        temp->next=NULL;
        if(head6==NULL)                       //if head is null make the element the first itemset
        {
            head6=temp;
        }
        else
        {
            struct Node3* last;
            last=head6;
            while(last->next!=NULL)           //if head is not null then put the item after the present itemset
            {
                last=last->next;
            }
            last->next=temp;
        }
                                                     //Final(element1,element2,element3);
    }

    void Print1(struct Node* head)                  //to print C1 and L1
    {
        struct Node* temp=head;
        printf("List is:\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->element);          //printing 1st element
            printf("%d ",temp->count);            //printing count
            printf("\n");
            temp=temp->next;                      //moving to the next element
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
            printf("%d ",temp->element1);          //printing the 1st element
            printf("%d ",temp->element2);          //prinitng the 2nd element
            printf("%d ",temp->count);             //printing the cummulative count of the itemset
            printf("\n");
            temp=temp->next;                       //moving on to the next itemset
        }
        printf("\n");
    }
    printf("\n");

    void Print5(struct Node3* head)                  //to print C3 and L3
    {
        printf("\n");
        struct Node3* temp;
        temp=head;
        printf("List is:\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->element1);           //printing the 1st element
            printf("%d ",temp->element2);           //printning the 2nd element
            printf("%d ",temp->element3);           //printing the 3rd element
            printf("%d ",temp->count);              //printing the cummulative count of the itemset
            printf("\n");
            temp=temp->next;                       //moving on to the next itemset
        }
        printf("\n");
    }
    printf("\n");


    void InsertCount(struct Node2* temp,int count)       //to insert count of sets in C2
    {
        struct Node2* temp2=temp;                        //created another pointer temp2 
        temp2->count=count;
    }

    int Search(int search1,int search2)       //to calculate count of each set for C2
    {
        int count=0;
        for(i=0;i<5;i++)                       
        {
            for(j=0;j<4;j++)
            {
                if(search1==a[i][j])           //First element to be searched
                {
                    for(j=0;j<4;j++)
                    {
                        if(search2==a[i][j])   //Second element to be searched
                        {
                            count++;           
                        }
                    }
                }
            }
        }
        return count;                         //return the count of number of times a set occurred
    }

    void C2(struct Node2* head)              //to calculate C2
    {
        int count;
        int i,j,search1,search2;
        if(head==NULL)                             //if no item is present
        {
            printf("List is empty\n");           
        }
        else
        {
            struct Node2* temp;
            temp=head;
            while(temp!=NULL)                     //until the last element
            {
                search1=temp->element1;
                search2=temp->element2; 
                count=Search(search1,search2);        //calling the search function
                InsertCount(temp,count);             //calling the InserCount function
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
                    int element1=arr[i];            //making sets
                    int element2=arr[k];
                    Insert3(element1,element2);    //calling the Insert3 function
                }
            }
        }
    }

    int L2(struct Node2* head)           //to calculate L2
    {
        struct Node2* p;
        p=head;
        while(p!=NULL)                  //until the last element
        {
            if(p->count>=s)                  //count more than the support count
            {
                Insert4(p->element1,p->element2,p->count);  //calling Insert4 function
                co++;
            }
            p=p->next;
        }
        printf("\nL2");
        return co;
    }



     void traverse(struct Node* head,int c)          //to traverse L1
    {
        static int arr[100];
        int i;
        struct Node* temp=head;
        if(head==NULL)                              //if the list is empty
        {
            printf("List is empty\n");
            return;
        }
        else
        {
            temp=head;
            while(temp!=NULL)                   //until the list is empty
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
        while(p!=NULL)
        {
            if(p->count>=s)
            {
                Insert2(p->element,p->count);   //inserting items in L1
                c++;
            }
            p=p->next;
        }

        return c;
    }
    printf("\n");
    printf("C1\n");
    Print1(head1);                     //to print C1
    printf("\n");
    printf("L1\n");
    c=L1(head1);                       //calling L1
    Print1(head2);                     //to print L1



    traverse(head2,c);                 //traversing L1 to calculate C2
    C2(head3);
    printf("\nC2");
    Print3(head3);
    co=L2(head3);                      //calling L2
    Print3(head4);                     //to print L2



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
            printf("List is empty\n");
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
        if(head==NULL)                            //if the list is empty
        {
            printf("List is empty\n");
            return;
        }
        else
        {
            temp=head;
            while(temp!=NULL)                    //until the list is empty
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
        }
        remove_redundant(arr,co*2);
    }
    void L3(struct Node3* head)                                        //to calcualate L3
    {
        struct Node3* p;
        p=head;
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

    traverse2(head4,co);                                   //calling the traverse2 function
    C3(head5);                                             //calling the C3 function
    printf("\nC3");
    Print5(head5);
    L3(head5);                                             //calling the L3 function

    void Final(int a, int b, int c)
    {
        printf("\nFrequently bought items are:\n");        //printing the frquently bought items
        switch(a)
        {
            case 0:                                        //cases for value a
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
                printf("Soft drinks  ");
                break;
            case 6:
                printf("Denims  ");
                break;
            case 7:
                printf("Detergent  ");
                break;
            default:
                printf("Error");
        }
        switch(b)                                       //cases for value b
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
                printf("Soft drink  ");
                break;
            case 6:
                printf("Denims  ");
                break;
            case 7:
                printf("Detergent  ");
                break;
            default:
                printf("Error");
        }
        switch(c)                                            //cases for value c
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
                printf("Soft drink  ");
                break;
            case 6:
                printf("Denims  ");
                break;
            case 7:
                printf("Detergent  ");
                break;
            default:
                printf("Error");
        }
    }

    void traverse3(struct Node3* head)                            //to calculate L3
    {
        struct Node3* temp;
        if(head==NULL)
        {
            printf("List is empty\n");                           //if the list is empty
            return;
        }
        else
        {
            temp=head;
            while(temp!=NULL)                                    //until the list is empty
            {
                Final(temp->element1,temp->element2,temp->element3);
                temp=temp->next;
            }
        }
    }
    traverse3(head6);
    
    
    //for winter season
	 printf("\n\n");
	 printf("Transactions for Winter season:\n");     //printing the list of items available in winter
	printf("Sweater = 8\n");
    printf("Muffler=9\n");
    printf("Caps=10\n");
    printf("Diaper=11\n");
    printf("Cheese=12\n");
    printf("Ghee=13\n");
    printf("Whisky=14\n");
    printf("Cold_cream=15\n");
    printf("\n");
    count=0,c=0,co=0;
    head1=NULL;             //head of C1
    head2=NULL;             //head of L1
    head3=NULL;             //head of C2
    head4=NULL;             //head of L2
    head5=NULL;             //head of C3
    head6=NULL;             //head of L3
    b[0][0]=8;              //defining the array b to create a dataset
    b[0][1]=9;
    b[0][2]=10;
    b[0][3]=11;
    b[1][0]=12;
    b[1][1]=8;
    b[1][2]=9;
    b[1][3]=13;
    b[2][0]=10;
    b[2][1]=14;
    b[2][2]=8;
    b[2][3]=9;
    b[3][0]=15;
    b[3][1]=13;
    b[3][2]=11;
    b[3][3]=12;
    b[4][0]=8;
    b[4][1]=12;
    b[4][2]=10;
    b[4][3]=9;
    printf("DATA SET IS:\n");
    for(i=0;i<5;i++)                    //printing the dataset
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",b[i][j]);
            if(j==3)
            {
                printf("\n");
            }
        }
    }
    printf("SUPPORT COUNT IS %d\n",s);        //printing the support count
	int l=8;
	 for(k=0;k<8;k++)                        //calculating C1
    {
    
        int search1=items_w[k];
        for(i=0;i<5;i++)
        {
            for(j=0;j<4;j++)
            {
                if(search1==b[i][j])
                {
                    count++;
                    
                }
            }
        }
        Insert1(l,count);                   //inserting items in C1
		l++,count=0; 
    }
    
    printf("\n");
    printf("C1\n");
    Print1(head1);                     //to print C1
    printf("\n");
    printf("L1\n");
    c=L1(head1);                       //calling L1
    Print1(head2);                     //to print L1

	
    int Search_w(int search1,int search2)       //to calculate count of each set for C2
    {
        int count=0;
        for(i=0;i<5;i++)
        {
            for(j=0;j<4;j++)
            {
                if(search1==b[i][j])
                {
                    for(j=0;j<4;j++)
                    {
                        if(search2==b[i][j])
                        {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }


   
	
    void C2_w(struct Node2* head)              //to calculate C2
    {
        int count;
        int i,j,search1,search2;
        if(head==NULL)
        {
            printf("List is empty\n");
        }
        else
        {
            struct Node2* temp;
            temp=head;
            while(temp!=NULL)
            {
                search1=temp->element1;
                search2=temp->element2;
                count=Search_w(search1,search2);
                InsertCount(temp,count);
                temp=temp->next;
            }
        }
    }
	
	traverse(head2,c);                 //traversing L1 to calculate C2
    C2_w(head3);
    printf("\nC2");
    Print3(head3);
    co=L2(head3);                      //calling L2
    Print3(head4);                     //to print L2


    int Search2_w(int search1,int search2,int search3)    //to get count of each set in C3
    {
        int count=0;
        for(i=0;i<5;i++)
        {
            for(j=0;j<4;j++)
            {
                if(search1==b[i][j])
                {
                    for(j=0;j<4;j++)
                    {
                        if(search2==b[i][j])
                        {
                            for(j=0;j<4;j++)
                            {
                                if(search3==b[i][j])
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

 void C3_w(struct Node3* head)      //to calculate C3
    {
        int count;
        int i,j,search1,search2,search3;
        if(head==NULL)
        {
            printf("List is empty\n");
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
                count=Search2_w(search1,search2,search3);
                InsertCount2(temp,count);
                temp=temp->next;
            }
        }
    }

    traverse2(head4,co);
    C3_w(head5);
    printf("\nC3");
    Print5(head5);
    L3(head5);

    void Finalw(int a, int b, int c)
    {
        printf("\nFrequently bought items are:\n");                    //printing the frquently bought items
        switch(a)                                                       
        {
            case 8:                                                   //cases for value a
                printf("Sweater  ");
                break;
            case 9:
                printf("muffler  ");
                break;
            case 10:
                printf("Caps  ");
                break;
            case 11:
                printf("Diaper  ");
                break;
            case 12:
                printf("Cheese  ");
                break;
            case 13:
                printf("ghee  ");
                break;
            case 14:
                printf("Whisky  ");
                break;
            case 15:
                printf("Cold cream  ");
                break;
            default:
                printf("Error");
        }
        switch(b)
        {
            case 8:                                                    //cases for value b
                printf("Sweater ");
                break;
            case 9:
                printf("Muffler  ");
                break;
            case 10:
                printf("Caps  ");
                break;
            case 11:
                printf("Diaper  ");
                break;
            case 12:
                printf("Cheese  ");
                break;
            case 13:
                printf("Ghee  ");
                break;
            case 14:
                printf("Whisky  ");
                break;
            case 15:
                printf("Cold cream  ");
                break;
            default:
                printf("Error");
        }
        switch(c)
        {
            case 8:                                                 //cases for value c
                printf("Sweater  ");
                break;
            case 9:
                printf("muffler  ");
                break;
            case 10:
                printf("Caps  ");
                break;
            case 11:
                printf("Diaper  ");
                break;
            case 12:
                printf("Cheese  ");
                break;
            case 13:
                printf("Ghee  ");
                break;
            case 14:
                printf("Whisky ");
                break;
            case 15:
                printf("Cold cream  ");
                break;
            default:
                printf("Error");
        }
    }

  void traverse3_w(struct Node3* head)
    {
        struct Node3* temp;
        if(head==NULL)
        {
            printf("List is empty\n");
            return;
        }
        else
        {
            temp=head;
            while(temp!=NULL)
            {
                Finalw(temp->element1,temp->element2,temp->element3);
                temp=temp->next;
            }
        }
    }

    traverse3_w(head6);
    
 
     //for Rainy season
	 printf("\n\n");
	printf("Transactions for Rainy season:\n");      //printing the list of items available in rainy season
	printf("Umbrella = 16\n");
    printf("shorts=17\n");
    printf("Caps=18\n");
    printf("pulse_dal=19\n");
    printf("Rasgolla=20\n");
    printf("Kitchen_masala=21\n");
    printf("Raincoat=22\n");
    printf("Deodrant=23\n");
    printf("\n");
    count=0,c=0,co=0;
    head1=NULL;             //head of C1
    head2=NULL;             //head of L1
    head3=NULL;             //head of C2
    head4=NULL;             //head of L2
    head5=NULL;             //head of C3
    head6=NULL;             //head of L3
    r[0][0]=16;             //defining the array r to create a dataset
    r[0][1]=17;
    r[0][2]=23;
    r[0][3]=19;
    r[1][0]=20;
    r[1][1]=16;
    r[1][2]=17;
    r[1][3]=21;
    r[2][0]=23;
    r[2][1]=22;
    r[2][2]=16;
    r[2][3]=17;
    r[3][0]=18;
    r[3][1]=21;
    r[3][2]=19;
    r[3][3]=20;
    r[4][0]=16;
    r[4][1]=20;
    r[4][2]=23;
    r[4][3]=17;
    printf("DATA SET IS:\n");
    for(i=0;i<5;i++)                    //printing dataset
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",r[i][j]);
            if(j==3)
            {
                printf("\n");
            }
        }
    }
    printf("SUPPORT COUNT IS %d\n",s);
	int m=16;
	 for(k=0;k<8;k++)                        //calculating C1
    {
    
        int search2=items_r[k];
        for(i=0;i<5;i++)
        {
            for(j=0;j<4;j++)
            {
                if(search2==r[i][j])
                {
                    count++;
                    
                }
            }
        }
        Insert1(m,count);                   //inserting items in C1
		m++,count=0; 
    }
    
    printf("\n");
    printf("C1\n");
    Print1(head1);                     //to print C1
    printf("\n");
    printf("L1\n");
    c=L1(head1);                       //calling L1
    Print1(head2);                     //to print L1

	
    int Search_r(int search1,int search2)       //to calculate count of each set for C2
    {
        int count=0;
        for(i=0;i<5;i++)
        {
            for(j=0;j<4;j++)
            {
                if(search1==r[i][j])
                {
                    for(j=0;j<4;j++)
                    {
                        if(search2==r[i][j])
                        {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }


   
	
    void C2_r(struct Node2* head)              //to calculate C2
    {
        int count;
        int i,j,search1,search2;
        if(head==NULL)
        {
            printf("List is empty\n");
        }
        else
        {
            struct Node2* temp;
            temp=head;
            while(temp!=NULL)
            {
                search1=temp->element1;
                search2=temp->element2;
                count=Search_r(search1,search2);
                InsertCount(temp,count);
                temp=temp->next;
            }
        }
    }
	
	traverse(head2,c);                 //traversing L1 to calculate C2
    C2_r(head3);
    printf("\nC2");
    Print3(head3);
    co=L2(head3);                      //calling L2
    Print3(head4);                     //to print L2


    int Search2_r(int search1,int search2,int search3)    //to get count of each set in C3
    {
        int count=0;
        for(i=0;i<5;i++)
        {
            for(j=0;j<4;j++)
            {
                if(search1==r[i][j])
                {
                    for(j=0;j<4;j++)
                    {
                        if(search2==r[i][j])
                        {
                            for(j=0;j<4;j++)
                            {
                                if(search3==r[i][j])
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

 void C3_r(struct Node3* head)      //to calculate C3
    {
        int count;
        int i,j,search1,search2,search3;
        if(head==NULL)
        {
            printf("List is empty\n");
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
                count=Search2_r(search1,search2,search3);
                InsertCount2(temp,count);
                temp=temp->next;
            }
        }
    }

    traverse2(head4,co);
    C3_r(head5);
    printf("\nC3");
    Print5(head5);
    L3(head5);

    void Finalr(int a, int b, int c)
    {
        printf("\nFrequently bought items are:\n");                      //printing the frquently bought items
        switch(a)
        {
            case 16:                                                     //cases for value a
                printf("Umbrella  ");
                break;
            case 17:
                printf("Shorts  ");
                break;
            case 18:
                printf("Caps  ");
                break;
            case 19:
                printf("Pulse_dal  ");
                break;
            case 20:
                printf("Rasgolla  ");
                break;
            case 21:
                printf("Kitchen_masala  ");
                break;
            case 22:
                printf("Raincoat  ");
                break;
            case 23:
                printf("Deodrant  ");
                break;
            default:
                printf("Error");
        }
        switch(b)                                                           //cases for value b
        {
            case 16:
                printf("Umbrella ");
                break;
            case 17:
                printf("Shorts  ");
                break;
            case 18:
                printf("Caps  ");
                break;
            case 19:
                printf("Pulse_dal  ");
                break;
            case 20:
                printf("Rasgolla  ");
                break;
            case 21:
                printf("Kitchen_masala  ");
                break;
            case 22:
                printf("Raincoat  ");
                break;
            case 23:
                printf("Deodrant  ");
                break;
            default:
                printf("Error");
        }
        switch(c)                                                        //cases for value c
        {
            case 16:
                printf("Umbrella  ");
                break;
            case 17:
                printf("Shorts  ");
                break;
            case 18:
                printf("caps  ");
                break;
            case 19:
                printf("Pulse_dal  ");
                break;
            case 20:
                printf("Rasgolla  ");
                break;
            case 21:
                printf("Kitchen_masala  ");
                break;
            case 22:
                printf("Raincoat ");
                break;
            case 23:
                printf("Deodrant  ");
                break;
            default:
                printf("Error");
        }
    }

  void traverse3_r(struct Node3* head)
    {
        struct Node3* temp;
        if(head==NULL)
        {
            printf("List is empty\n");
            return;
        }
        else
        {
            temp=head;
            while(temp!=NULL)
            {
                Finalr(temp->element1,temp->element2,temp->element3);
                temp=temp->next;
            }
        }
    }

    traverse3_r(head6);   
    
}
