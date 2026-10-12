#include <stdio.h>
#include <string.h>
#define MAX 3

struct JobSeq {
    int jobID;
    char JobTitle[20];
};

int front = -1, rear = -1;
struct JobSeq arr[MAX];

int isEmpty() {
    return (front == -1 || front > rear);
}

int isFull() {
    return (rear == MAX - 1);
}

void Enqueue(struct JobSeq value) {
    if (isFull()) {
        printf("The queue is full\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear += 1;
    arr[rear] = value;
}

struct JobSeq Dequeue() {
    struct JobSeq value;
    if (isEmpty()) {
        printf("The queue is empty\n");
        value.jobID = -1;
        strcpy(value.JobTitle, "");
        return value;
    }

    value = arr[front];
    front += 1;
    return value;
}

void printQueue() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue contents:\n");
    for (int i = front; i <= rear; i++) {
        printf("JobID: %d, Title: %s\n", arr[i].jobID, arr[i].JobTitle);
    }
}

int main() {
    int choice;

    do {
        printf("\n=== Job Queue Menu ===\n");
        printf("1. Add Job\n");
        printf("2. Delete Job\n");
        printf("3. Display Queue\n");
        printf("4. End\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                struct JobSeq newJob;
                printf("Enter Job ID: ");
                scanf("%d", &newJob.jobID);
                printf("Enter Job Title: ");
                scanf(" %19[^\n]", newJob.JobTitle);
                Enqueue(newJob);
                break;
            }
            case 2: {
                struct JobSeq removed = Dequeue();
                if (removed.jobID != -1)
                    printf("Deleted Job: %d, %s\n", removed.jobID, removed.JobTitle);
                break;
            }
            case 3:
                printQueue();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}