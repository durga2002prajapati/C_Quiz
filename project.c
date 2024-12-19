#include <stdio.h>

void askQuestion(char *question, char *options[], char correctOption, int *score) {
    char answer;
    int i;

    printf("%s\n", question);
    for (i = 0; i < 4; i++) {
        printf("%c. %s\n", 'A' + i, options[i]);
    }
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &answer); 
    answer = (answer >= 'a' && answer <= 'z') ? answer - 32 : answer;

    if (answer == correctOption) {
        printf("Correct!\n");
        (*score)++;
    } else {
        printf("Wrong! The correct answer was %c.\n", correctOption);
    }
    printf("\n");
}

int main() {
    int score = 0;
    char *options1[] = {"C", "Java", "JavaScript", "Python"};
    char *options2[] = {"Berlin", "Madrid", "Paris", "Rome"};
    char *options3[] = {"2", "4", "6", "8"};
    char *options4[] = {"Amazon", "Google", "Apple", "Facebook"};
    char *options5[] = {"Hindi", "Telugu", "Tamil", "Kannada"};
    char *options6[] = {"HTML","SQL","JavaScript","XML"};
    char *options7[] = {"int *ptr;","pointer int* ptr;","ptr int*;","int ptr*;"};
    char *options8[] = {"1 byte","2 bytes","4 bytes","8 bytes"};
    char *options9[] = {"Silicon Valley of India","Garden City of India","City of Lights","The Blue City"};
    char *options10[] = {"Tamil Nadu","Maharashtra","Karnataka","Andhra Pradesh"};
    char *options11[] = {"Nikola Tesla","Thomas Edison","Albert Einstein","Alexander Graham Bell"};
    char *options12[] = {"Pacific Ocean","Indian Ocean","Southern Ocean","Atlantic Ocean"};
    char *options13[] = {"Gold","Iron","Diamond","Quartz"};
    char *options14[] = {"Oxygen","Osmium","Ozone","Oganesson"};
    char *options15[] = {"K2","Kangchenjunga","Mount Kilimanjaro","Mount Everest"};

    askQuestion("Which programming language is used for this quiz ?", options1, 'A', &score);

    askQuestion("What is the capital of France ?", options2, 'C', &score);

    askQuestion("What is 2+2 ?", options3, 'B', &score);

    askQuestion("Which company created the iPhone ?", options4, 'C', &score);
    
    askQuestion("What is the primary language spoken in Bangalore ?", options5, 'D', &score);
    
    askQuestion("Which of the following is a programming language ?", options6, 'C', &score);
    
    askQuestion("Which of the following is the correct syntax for declaring a pointer to an integer in C ?", options7, 'A', &score);
    
    askQuestion("What is the siz of double in C ?", options8, 'D', &score);
    
    askQuestion("What is the nickname of Bangalore ?", options9, 'B', &score);
    
    askQuestion("Bangalore is located in which state of India ?", options10, 'C', &score);
    
    askQuestion("Who invented the telephone ?", options11, 'D', &score);
    
    askQuestion("What is the largest ocean on Earth ?", options12, 'A', &score);
    
    askQuestion("What is the hardest natural substance found on Earth ?", options13, 'C', &score);
    
    askQuestion("What element does O represent on the periodic table ?", options14, 'A', &score);
     
    askQuestion("What is the tallest mountain in the world ?", options15, 'D', &score);
    
    
     
    printf("Thank You Dear for Attempting this Quiz !!! \nYour total score is: %d/15\n", score);

    return 0;
}

