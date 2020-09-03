#include<iostream>
#include<string.h>
using namespace std;
int main(){
char str[]="Attention reader! Don’t stop learning now. Get hold of all the important DSA concepts with the DSA Self Paced Course at a student-friendly price and become industry ready.";
char *token = strtok(str, " ");
 while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
}
