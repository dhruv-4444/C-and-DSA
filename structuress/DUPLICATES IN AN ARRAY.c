// #include<stdio.h>
// int main()
// {
//     int arr[5];int arr1[5];
//     int j=0;
//     for(int i=0;i<5;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int n;
//     scanf("%d",&n);
//     for(int i=n+1;i<5;i++)
//     {
//         arr1[j]=arr[i];
//         j++;

//     }
    
//      for(int i=0;i<=n;i++)
//     {
//         arr1[j]=arr[i];
//         j++;
//     }

//     for(int i=0;i<5;i++)
//     {
//         printf("%d",arr1[i]);
//     }

//     }


// #include<stdio.h>
// #include<string.h>
// #define MAX 100
// int main()
// {
//     char str[MAX];
//     int count=0;
//     scanf("%[^\n]s",str);
//     printf("%d\n",strlen(str));
//     int n=strlen(str);
//     for(int i=0;i<=str[i];i++)
//     {
//         if(str[i]==' ')
//         {
//             count++;
//         }
//     }
//     printf("%d\n",count);
//     int word=count+1;
//     printf("%d",word);
// }

// #include<stdio.h>
// #include<string.h>
// typedef struct address{
//     int house;
//     int street;
//     char city[50];
//     char state[50];
//     int pin;
// }add;

// typedef struct student{
//     int id;
//     int roll;
//     char name[50];
//     add normal;
// }s;
// int main()
// {
//     s s1;
//     scanf("%d",&s1.id);
//     scanf("%d",&s1.roll);
//     fgets(s1.name,50,stdin);
//     scanf("%d",&s1.normal.house);
//     scanf("%d",&s1.normal.street);
//     scanf("%[^\n]s",s1.normal.city);
//     scanf("%[^\n]s",s1.normal.state);
//     scanf("%d",&s1.normal.pin);

//     printf("id %d",s1.id);
//     printf("roll %d",s1.roll);
//     printf("name %s",s1.name);
//     printf("house %d",s1.normal.house);
//     printf("street %d",s1.normal.street);
//     printf("city %s",s1.normal.city);
//     printf("state %s",s1.normal.state);
//     printf("pin %d",s1.normal.pin);


// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char name[50];
//     scanf("%[^\n]s",name);
//     int n=strlen(name);
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     printf("%d",fact);
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int t;
//     scanf("%d",&t);
//     int flag=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==t)
//         {
//            flag=1;
//            break;
//         }
       
//     }
//     if(flag==1)
//     {
//         printf("present");
//     }
//     else 
//     {
//         printf("np");
//     }
// }

// #include<stdio.h>
// #include<string.h>
// #define MAX 100
// int main()
// {
//     char str[MAX];
//     int count=0;
//     scanf("%[^\n]s",str);
    
//     int n=strlen(str);
//     for(int i=0;i<=str[i];i++)
//     {
//         if(str[i]==' ')
//         {
//             count++;
//         }
//     }
//     int word=count+1;
//     printf("%d",word);
