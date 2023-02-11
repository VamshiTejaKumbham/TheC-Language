#include<stdio.h>
void main(){
    int o,i,j,k;
    printf("Enter the order of Matrix: ");
    scanf("%d",&o);
    int a[o][o],b[o][o],c[o][o];
    for(i=0;i<o;i++){
        for(j=0;j<o;j++){
            printf("Enter Value in %d row and %d column of A matrix: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<o;i++){
        for(j=0;j<o;j++){
            printf("Enter Value in %d row and %d column of B matrix: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf(" Matrix A:\n");
    for(i=0;i<o;i++){
        for(j=0;j<o;j++){
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf(" Matrix B:\n");
    for(i=0;i<o;i++){
        for(j=0;j<o;j++){
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
for(i=0;i<o;i++){
    for(j=0;j<o;j++){
        c[i][j]=0;
        for(k=0;k<o;k++){
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }
}
printf("Product of Matrix A and Matrix B is: \n");
for(i=0;i<o;i++){
        for(j=0;j<o;j++){
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }

}