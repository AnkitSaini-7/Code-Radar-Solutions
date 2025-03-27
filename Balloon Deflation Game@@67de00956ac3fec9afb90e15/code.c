void deflateBalloons(int air[], int n) {
    while (1) {
        int minAir = 1001;
        int count = 0;

        // Count non-zero balloons and find the minimum air level
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                count++;
                if (air[i] < minAir) {
                    minAir = air[i];
                }
            }
        }

        // If no more balloons to deflate, break
        if (count == 0) {
            break;
        }

        // Print number of remaining balloons
        printf("%d\n", count);

        // Deflate balloons by minimum air level
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= minAir;
            }
        }
    }
}
