#include <stdio.h>
#include <string.h>

int menu(); // Function prototype
void input(int n); 
void display(int n); 
void highestmark(int n); 
void search(int n, int key);

struct student {
    int sid;
    char fname[30], lname[30];
    float physics, chemistry, maths, nepali, english, computer, total;
} s[100];

int main() { 
    int n, ch, key;

    do {
        ch = menu();
        switch(ch) { 
            case 1: 
                printf("Enter how many records: ");
                scanf("%d", &n);
                input(n);
                break;
            case 2: 
                display(n);
                break;
            case 3: 
                highestmark(n);
                break;
            case 4: 
                printf("Enter student id for searching: ");
                scanf("%d", &key);
                search(n, key);
                break;
            case 5: 
                printf("Thanks for using this program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(ch != 5);

    return 0;
} 

// Function to display menu
int menu() {
    int ch;
    printf("\n1 --> Input Records\n");
    printf("2 --> Display Records\n");
    printf("3 --> Highest Record\n");
    printf("4 --> Search Records\n");
    printf("5 --> Exit\n");
    printf("Please select your choice: ");
    scanf("%d", &ch);
    return ch;
}

// Function to input student records
void input(int n) { 
    int i;
    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Student ID: ");
        scanf("%d", &s[i].sid);
        printf("First Name: ");
        scanf("%s", s[i].fname);
        printf("Last Name: ");
        scanf("%s", s[i].lname);
        printf("Physics Marks: ");
        scanf("%f", &s[i].physics);
        printf("Chemistry Marks: ");
        scanf("%f", &s[i].chemistry);
        printf("Maths Marks: ");
        scanf("%f", &s[i].maths);
        printf("Nepali Marks: ");
        scanf("%f", &s[i].nepali);
        printf("English Marks: ");
        scanf("%f", &s[i].english);
        printf("Computer Marks: ");
        scanf("%f", &s[i].computer);
        s[i].total = s[i].physics + s[i].chemistry + s[i].maths + s[i].nepali + s[i].english + s[i].computer;
    }
}

// Function to display student records sorted by total marks
void display(int n) { 
    int i, j;
    struct student temp;
    
    // Sorting based on total marks
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(s[i].total > s[j].total) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudent Records Sorted by Total Marks:\n");
    for(i = 0; i < n; i++) {
        printf("SID: %d, Name: %s %s, Total Marks: %.2f\n", s[i].sid, s[i].fname, s[i].lname, s[i].total);
    }
}

// Function to find the student with the highest total marks
void highestmark(int n) {
    int i;
    float max = s[0].total;
    int index = 0;

    for(i = 1; i < n; i++) {
        if(s[i].total > max) {
            max = s[i].total;
            index = i;
        }
    }

    printf("\nStudent with Highest Marks:\n");
    printf("SID: %d, Name: %s %s, Total Marks: %.2f\n", s[index].sid, s[index].fname, s[index].lname, s[index].total);
}

// Function to search student record by SID
void search(int n, int key) {
    int i, flag = 0;
    
    for(i = 0; i < n; i++) {
        if(s[i].sid == key) {
            printf("\nRecord found for SID: %d\n", key);
            printf("Full Name: %s %s\n", s[i].fname, s[i].lname);
            printf("Physics: %.2f, Chemistry: %.2f, Maths: %.2f, Nepali: %.2f, English: %.2f, Computer: %.2f\n", 
                   s[i].physics, s[i].chemistry, s[i].maths, s[i].nepali, s[i].english, s[i].computer);
            printf("Total Marks: %.2f\n", s[i].total);
            flag = 1;
            break;
        }
    }
    
    if(flag == 0) {
        printf("\nNo record found for SID: %d\n", key);
    }
}
