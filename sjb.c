
#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int burst_time[n], arrival_time[n], waiting_time[n], turnaround_time[n];

    printf("Enter burst time and arrival time for each process:\n");
    for (i = 0; i < n; i++) {
        printf("Burst time for process %d: ", i + 1);
        scanf("%d", &burst_time[i]);
        printf("Arrival time for process %d: ", i + 1);
        scanf("%d", &arrival_time[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arrival_time[i] > arrival_time[j]) {
                temp = arrival_time[i];
                arrival_time[i] = arrival_time[j];
                arrival_time[j] = temp;

                temp = burst_time[i];
                burst_time[i] = burst_time[j];
                burst_time[j] = temp;
            }
        }
    }

    int current_time = 0;
    printf("\nProcess\tBurst Time\tArrival Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        if (current_time < arrival_time[i])
            current_time = arrival_time[i];
        waiting_time[i] = current_time - arrival_time[i];
        if (waiting_time[i] < 0)
            waiting_time[i] = 0;
        turnaround_time[i] = waiting_time[i] + burst_time[i];
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, burst_time[i], arrival_time[i], waiting_time[i], turnaround_time[i]);
        current_time += burst_time[i];
    }

    return 0;
}