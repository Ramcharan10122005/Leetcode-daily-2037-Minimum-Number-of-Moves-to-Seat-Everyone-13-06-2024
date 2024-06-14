#define max 101
int minMovesToSeat(int* seats, int s1, int* students, int s2) {
    int seatloc[max] = {0};
    int studloc[max] = {0};
    for (int i = 0; i < s1; i++) {
        seatloc[seats[i]]++;
    }
    for (int i = 0; i < s2; i++) {
        studloc[students[i]]++;
    }
    int j = 0, ans = 0;
    for (int i = 0; i < 101; i++) {
        if (seatloc[i] == 0)
            continue;
        while (studloc[j] == 0)
            j++;
        ans += abs(i - j);
        seatloc[i]--;
        studloc[j]--;
        if (seatloc[i] != 0)
            i--;
    }
    return ans;
}
