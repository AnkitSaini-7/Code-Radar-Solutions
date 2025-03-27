#include <stdio.h>

 {
    int n, m;
    scanf("%d", &n);
    int ranked[200000];
    for (int i = 0; i < n; i++) scanf("%d", &ranked[i]);

    scanf("%d", &m);
    int player[200000];
    for (int i = 0; i < m; i++) scanf("%d", &player[i]);

    int result[200000];
    
    // Call trackPlayerRanks function (to be implemented by student)
    trackPlayerRanks(ranked, n, player, m, result);

    // Output rank after each game
    for (int i = 0; i < m; i++) printf("%d\n", result[i]);

    return 0;
}

// Implement the trackPlayerRanks function!
// Hint: Create dense ranks first, then compare player scores efficiently.