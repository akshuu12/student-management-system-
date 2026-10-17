#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int Id,Class;
    float Marks;
    char n[100];
};
struct Student add(struct Student);
void disp(struct Student);
int search(struct Student,int);
int main(){
    struct Student A[100];
    int ch,k=1,n=0,i,num,x=0;
    struct Student S;
    printf("==========Student Management System===========");
    while(k){
        printf("\n1.Add Student\n2.Display All Student\n3.Search\n4.Exit\nEnter Your Choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                if(n<100){
                    A[n]=add(A[n]);
                    n++;
                }
                else{
                    printf("Student Limit Reached!");
                }
                break;
                
            case 2:
                    if(n==0){
                         printf("No students found!\n");
                    } 
                    else{
                        for(i=0;i<n;i++){
                            disp(A[i]);
                         }
                    }
                     break;
            case 3:
                    printf("Enter roll number : ");
                    scanf("%d",&num);
                    for(i=0;i<n;i++){
                        x=search(A[i],num);
                        if(x==1){
                            S=A[i];
                            break;
                        }
                        else{
                        }
                    }
                    if(x==1){
                        printf("\nName : %s||Roll_number : %d||Class : %d||Marks : %.2f ",S.n,S.Id,S.Class,S.Marks);
                    }
                    else{
                        printf("Student not found!");
                    }
                    break;

                    
            case 4:
                k=0;
                break;
            default:
                printf("Wrong Choice");
        }
    }
    return 0;
}
struct Student add(struct Student Z){
    printf("Enter Name :  ");
    scanf(" %99[^\n]", Z.n);
    printf("Enter Roll_number : ");
    scanf("%d",&Z.Id);
    printf("Enter Class : ");
    scanf("%d",&Z.Class);
    printf("Enter Marks : ");
    scanf("%f",&Z.Marks);

    return(Z);
}
void disp(struct Student X){
    printf("\nName : %s||Roll_number : %d||Class : %d||Marks : %.2f ",X.n,X.Id,X.Class,X.Marks);
}
int search(struct Student Z,int n){
    if(n!=Z.Id){
        return(0);
    }
    else{
        return(1);
    }
}
