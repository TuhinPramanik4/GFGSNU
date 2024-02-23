struct Pair {
    int first;
    int second;
};

int findJudge(int n, int** trust, int trustSize, int* trustColSize) {
    struct Pair* arr = (struct Pair*)malloc((n + 1) * sizeof(struct Pair));

    for (int i = 0; i <= n; ++i) {
        arr[i].first = 0;
        arr[i].second = 0;
    }

    for (int i = 0; i < trustSize; ++i) {
        arr[trust[i][0]].first += 1;
        arr[trust[i][1]].second += 1;
    }

    for (int i = 1; i <= n; ++i) {
        if (arr[i].first == 0 && arr[i].second == n - 1) {
            free(arr);
            return i;
        }
    }

    free(arr);
    return -1;
}
