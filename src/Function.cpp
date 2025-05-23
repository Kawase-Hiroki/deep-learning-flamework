#include "Function"

#include <math.h>

// sum
class Sum : Function {
public:
    template <typename T, size_t N>
    double forward(T (&x)[N]) {
        double sum = 0;
        for (size_t i = 0; i < N; i++) {
            sum += x[i];
        }
        return sum;
    }
};

// activation function
// ReLu : Sigmoid
class ReLU : Function {
public:
    double forward(double x) {
        return max(x, 0);
    }

    double backward(double gy) {
        x = this.data;
        return (x > 0) ? gy : 0;
    }
};

class Sigmoid : Function {
public:
    double forward(double x) {
        return 1 / (1 + exp(-x));
    }
    double backward(double gy) {
        x = this.data;
        return forward(x) * (1 - forward(x));
    }
};

// loss function
// MeanSquaredError
class MeanSquaredError {
public:
    template <typename T, size_t N>
    double forward(const T (&y0)[N], const T (&y1)[N]) {
        double sum = 0;
        for (int i = 0; i < N; i++) {
            double diff = y0[i] - y1[i];
            sum += diff * diff;
        }
        return sum / N;
    }
};