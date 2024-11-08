// adamas university marking system

#include <stdio.h>

typedef struct
{
    char subject[50]; // subject name
    int credit;       // subject credit
    int marks;        // overall marks out of 100
} adamas_marking_system;

void inputDetails(adamas_marking_system *subjects, int numSubjects)
{
    for (int i = 0; i < numSubjects; i++)
    {
        printf("Enter details for subject %d:\n", i + 1);
        printf("Subject name: ");
        scanf("%s", subjects[i].subject);
        printf("Credit: ");
        scanf("%d", &subjects[i].credit);
        printf("Marks: ");
        scanf("%d", &subjects[i].marks);
    }
}

void calculateResults(adamas_marking_system *subjects, int numSubjects, int *totalMarks, float *averageMarks)
{
    *totalMarks = 0;
    for (int i = 0; i < numSubjects; i++)
    {
        *totalMarks += subjects[i].marks;
    }
    *averageMarks = (float)(*totalMarks) / numSubjects;
}

void displayResults(adamas_marking_system *subjects, int numSubjects, int totalMarks, float averageMarks)
{
    printf("\nSubject Details and Marks:\n");
    for (int i = 0; i < numSubjects; i++)
    {
        printf("Subject: %s\n", subjects[i].subject);
        printf("Credit: %d\n", subjects[i].credit);
        printf("Marks: %d\n", subjects[i].marks);
        printf("\n");
    }

    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);
}

int main(int argc, char const *argv[])
{
    int numSubjects;

    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    adamas_marking_system subjects[numSubjects];
    int totalMarks;
    float averageMarks;

    inputDetails(subjects, numSubjects);
    calculateResults(subjects, numSubjects, &totalMarks, &averageMarks);
    displayResults(subjects, numSubjects, totalMarks, averageMarks);

    return 0;
}