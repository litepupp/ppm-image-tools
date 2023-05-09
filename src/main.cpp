#include <iostream>
#include <math.h>

int main(int argc, char **argv) {
    int rows = 6;
    int cols = 4;

    float phi = 45.0f * ((float)M_PI / 180.0f);
    float cos_phi = cosf(phi);
    float sin_phi = sinf(phi);

    float x_start = -((float)cols / 2);
    float x_step = ((float)cols / ((float)cols - 1));

    float y_start = -((float)rows / 2);
    float y_step = ((float)rows / ((float)rows - 1));

    float N = sqrtf((float)((cols * cols) + (rows * rows)));
    float N_start = -(N / 2);
    float N_step = N / (N - 1);

    float x_0;
    float y_0;

    float x_1;
    float y_1;

    int x_N;
    int y_N;

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            // Convert row, col into x, y position
            x_0 = x_start + ((float)col * x_step);
            y_0 = y_start + ((float)row * y_step);

            // Rotate point
            x_1 = (x_0 * cos_phi) - (y_0 * sin_phi);
            y_1 = (x_0 * sin_phi) + (y_0 * cos_phi);

            // Get row, col of output image
            x_N = (int)((x_1 - N_start) / N_step);
            y_N = (int)((y_1 - N_start) / N_step);

            std::cout << x_N << " " << y_N << "\n";
        }
    }

    return 0;
}