#define MAX 42
#define INF 999
#define max_metro 55

int visited[MAX];

/*structure of spot which contains the name of city,which type of area it is, population in that city*/

typedef struct spot
{
 char name[50];
 int type;
 int population;
}node;

node nodes[MAX];

/*structure of connectivity which contains source ,destination,distance,transporation type */

//(1=walking, 2=cycling, 3=car/bike, 4=publicTransport)

typedef struct connec
{
    int src;
    int dest;
    int dist;
    int t_type;
} edge;


/*structure of metro which has train name,train number,source ,destination,total seats in perticular train,available seats in
that train,ticket price of the train ,and priority(1-10)*/

typedef struct metro {
    char trainName[50];
    int trainNumber;
    char source[50];
    char destination[50];
    int totalSeats;
    int availableSeats;
    float ticketPrice;
    int priority;
} metro;

metro list[max_metro];

/*structure of metro list which is used for binary search tree*/

struct metro_list
{
    char name[30];
    struct metro_list *left;
    struct metro_list *right;
};

typedef struct metro_list metroo;

/*structure of payment details which is used in seat_booking functionality*/

typedef struct PaymentDetails {
    char cardNumber[20];
    char expirationDate[10];
    char cvv[5];
} pd;


struct station {
    char name[30];
    float kms;
};

struct tree
{
    struct spot key;
    struct tree *left;
    struct tree *right;
    int height;
};
typedef struct station S;
S search_list[200];


/*prototypes for all the functions*/

void dis();
int tolower();
void swap(metro* a, metro* b);
void  bfs_traverse(int a[42][42],int source);
void dfs_traverse();
void load_weights(int a[][42]);
void dis();
void welcome();
void display_spot();
void bubble_sort();
int search(char name[]);
void min();
void max();
void transitive_closure();
void reload();
void preorder(metroo *root);
void postorder(metroo *root);
void bst_traversal();
int brute(char t[],char p[],int n,int m);
void heapify(metro h[], int n, int i);
void heapsort(metro h[], int n);
void display(metro list[]);
int linearsearch(int trainNumber);
int bookSeat(int trainNumber, int numSeats);
void displayavailabletrains();
int payment_process(float amount, const pd *payment_details);
int partition(metro b[], int l, int h);
void quicksort(metro b[],int l,int r);
void swap(metro* a, metro* b);
void seat_booking_with_payment(int trainNumber, int numSeats);
void traverse();
void bfs_traverse(int a[42][42],int source);
void dfs(int a[][42], int size, int source, int visited[]);
void dfs_traverse();
void load_from_file(int route_number);
void displayRouteInfo();
int next_source(int dist[], int v[], int size);
int check_d(int m[], int size);
void shortest_path(int source, int dest, int size, int path[]);
void dijkstras();
int rk(char pattern[], char text[]);
void print_node(int index);
void print_metro(int index);
void selection_sort();
int find(int b[], int n, int u, int v);
void union_k(int b[], int n, int u, int v);
void traffic_signal();
int min_key(int key[], int mst_set[], int V);
void print_mst(int parent[], int a[MAX][MAX], int V);
void prims();
int ma(char str1[], char str2[]);
int height_tree(struct tree *t);
struct tree *newnode(node t);
int maximum(int a, int b);
struct tree *right_rotate(struct tree *t);
struct tree *left_rotate(struct tree *t);
int getbalance(struct tree *T);
struct tree *inserts(struct tree *t,node n);
void inorders(struct tree *head);
void avl();

int global_count = 0;


int main()
{
    int a[42][42];


   welcome();
   reload();
   //load_from_file( route_number);
  // load_weights(a);

   FILE *fp;
   fp=fopen("spotss.txt","r");
   char name[20];
   int s;
   char str[20];
   int k,b;

   if(fp==NULL)
   {
     printf("THERE IS SOME ISSUE IN OPENING THE FILE\n");
     exit(1);
   }
   for (int i = 0; i < MAX; i++)
   {
        fscanf(fp,"%s %d %d ", nodes[i].name, &nodes[i].type, &nodes[i].population);

        //printf("%s %d %d\n", nodes[i].name, nodes[i].type, nodes[i].population);
   }
    while(1)
    {
        printf("1.display the spots\n");
        printf("2.sorting the spots\n");
        printf("3.search the location \n");
        printf("4.display the city which has least no of population\n");
        printf("5.display the city which has highest no of population\n");
        printf("6.finding the transitive closure\n");
        printf("7.display metro lists\n");
        printf("8. search the train\n");
        printf("9.sort the train list\n");
        printf("10.seat booking\n");
        printf("11.traversing the city mysore\n");
        printf("12. Display Route Information\n");
        printf("13.print the shortest distance between 2 location\n");
        printf("14.find the string pattern\n");
        printf("15.traffic signal management\n");
        printf("16.prims implementation\n");
        printf("17.AVL tree implementation\n");
        printf("18.exit\n");

        int ch;
        int m;
        int index;
        char pattern[50];
        int trainNumber,numSeats;

        printf("enter the choice\n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
                printf("displays all the spots\n");
                display_spot();
                break;

        case 2:
                printf("sorting the spots based on type\n");
                bubble_sort();
                display_spot();
                break;

        case 3:
                printf("enter the location to search\n");
                scanf("%s",name);
                printf("searching the location\n");
                s=search(name);
                if(s==1)
                    printf("%s is found\n\n",name);
                else
                    printf("%s is not found\n\n",name);

                break;

        case 4:
                printf("city with least population is  :");
                min();
                break;

        case 5:
                printf("city with highest population is  :");
                max();
                break;

        case 6:
               transitive_closure();
               printf("transitive_closure is\n");
               break;

        case 7:
               printf("Creates BST using metro list and prints preorder,inorder and postorder traversals\n");
               bst_traversal();
               break;

        case 8:
                printf("enter string\n");
                scanf("%s",str);
                 for(k=0;k<global_count;k++)
                 {
                      b=brute(list[k].trainName,str,strlen(list[k].trainName),strlen(str));
                       if(b!=-1)
                       {
                           list[s].priority=list[k].priority;
                           strcpy(list[s].trainName,list[k].trainName);

                           printf("%d\t",list[s].priority);
                           printf("%s\n",list[s].trainName);
                                  s++;
                       }
                 }
                        if(s==0)
                        {
                            printf("NO  MATCHINGS\n");
                            exit(0);
                        }

                break;

        case 9:
                heapsort(list,max_metro);
                display(list);
                break;

        case 10:
                printf("Train numbers and available seats:\n");
                quicksort(list,0,max_metro-1);
                displayavailabletrains();
                printf("Enter train number to book seats: ");
                scanf("%d", &trainNumber);
                b=linearsearch(trainNumber);
                if(b!=-1)

                {
                    printf("Enter the number of seats to book: ");
                scanf("%d", &numSeats);

               seat_booking_with_payment(trainNumber, numSeats);
                }
                else
                {
                    printf("you have entered wrong train number!!!!\n\n\n");
                }
            break;

        case 11:
                printf(" traversal\n");
                traverse();
                break;

        case 12:
                displayRouteInfo();
                break;

       case 13:
                printf("Finds shortest path from single source to all other locations\n");
                dijkstras();
                break;

        case 14:
                   printf("enter pattern\n");

                   scanf("%s",pattern);
                   // Assuming nodes[i].name is the field you want to search in
                    for (int i = 0; i < MAX; i++) {
                        index = rk(pattern, nodes[i].name);
                        if (index != -1)
                        {
                            printf("Pattern found in nodes array at index %d\n", i);
                              print_node(i);
                            break; // Stop searching after the first match (or modify as needed)
                        }

                    }

                    // Assuming metro[i].trainName is the field you want to search in
                    for (int i = 0; i < MAX; i++) {
                        index = rk(pattern,list[i].trainName);
                        if (index != -1) {
                            printf("Pattern found in metro array at index %d\n", i);
                            print_metro(i);
                            break; // Stop searching after the first match (or modify as needed)
                        }
                    }
                    if(index==-1)
                        printf("such pattern not found\n");

            break;

        case 15:
               printf("Implements efficient traffic signal\n");
               traffic_signal();
                break;

        case 16:
                printf("Implements minimum spanning tree of connectivity\n");
                prims();
                break;

        case 17:printf("you can get the required place by selecting option\n");
                avl();
                break;

        case 18:exit(0);


        }
    }

    fclose(fp);
}
