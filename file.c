//Opening a File

FILE *fptr; // File pointer
fptr = fopen("example.txt", "r"); // Open for reading
// OR
fptr = fopen("example.txt", "w"); // Open for writing
// OR
fptr = fopen("example.txt", "a"); // Open for appending

//2. Reading from a File
FILE *fptr;
int num;
fptr = fopen("example.txt", "r");
if (fptr == NULL) {
    printf("Error opening file!\n");
    exit(1);
}
fscanf(fptr, "%d", &num);
printf("Read from file: %d\n", num);
fclose(fptr);


//3. Writing to a File
FILE *fptr;
int num = 42;
fptr = fopen("example.txt", "w");
if (fptr == NULL) {
    printf("Error opening file!\n");
    exit(1);
}
fprintf(fptr, "%d", num);


//4. Appending to a File
FILE *fptr;
fptr = fopen("example.txt", "a");
if (fptr == NULL) {
    printf("Error opening file!\n");
    exit(1);
}
fprintf(fptr, "Appending to file\n");
fclose(fptr);


//5. Closing a File
FILE *fptr;
fptr = fopen("example.txt", "r");
fclose(fptr);

//6. Checking End-of-File (EOF)
FILE *fptr;
int num;
fptr = fopen("example.txt", "r");
while (fscanf(fptr, "%d", &num) != EOF) {
    printf("Read from file: %d\n", num);
}
fclose(fptr);

//7. Error Handling
FILE *fptr;
fptr = fopen("example.txt", "r");
if (fptr == NULL) {
    printf("Error opening file!\n");
    exit(1);
}
fclose(fptr);


//.........................................Complete Code:........................................

#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE *fptr;


    int num = 42;
    fptr = fopen("example.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }
    fprintf(fptr, "%d", num);
    fclose(fptr);


    int readNum;
    fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }
    fscanf(fptr, "%d", &readNum);
    printf("Read from file: %d\n", readNum);
    fclose(fptr);


    fptr = fopen("example.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file for appending!\n");
        exit(1);
    }
    fprintf(fptr, "\nAppending to file\n");
    fclose(fptr);


    char buffer[100];
    fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }
    printf("Content of the file:\n");
    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);
    }
    fclose(fptr);


    return 0;
}








  //                              C program to write odd and even numbers from a given range in different files:

#include<stdio.h>
#include<stdlib.h>
using namespace std;


bool isOdd(int n) {return n & 1;}


int main()
{
    FILE *Input, *Odd, *Even, *fptr;
    Input = fopen("Input.txt", "w");
    Odd = fopen("Odd.txt","w");
    Even = fopen("Even.txt","w");
    int n;


    scanf("%d",&n);


    for(int i = 1; i <= n; i++){
        fprintf(Input,"%d\n",i);
    }
    fclose(Input);


    int num;
    fptr = fopen("Input.txt", "r");
    while (fscanf(fptr, "%d", &num) != EOF) {
        printf("Read from file: %d\n", num);
        //Complete the remaining code to store odd and even numbers in different files


    }


    fclose(Input);
    fclose(Even);
    fclose(Odd);
    return 0;
}







