#include <math.h>

// sum
class Sum : Function {
public:
    double forward(double* x) {
        double sum = 0;
        while (x != NULL) {
            sum += *x;
            *x++;
        }
    }
};

// activation function
// ReLu : Sigmoid
class ReLU : Function {
public:
    double forward(x) {
        return max(x, 0);
    }

    double backward(gy) {
        x = this.data;
        return (x > 0) ? gy : 0;
    }
};

class Sigmoid : Function {
public:
    double forward(x) {
        return 1 / (1 + exp(-x));
    }
    double backward(gy) {
        x = this.data;
        return forward(x) * (1 - forward(x));
    }
};

// loss function
// MeanSquaredError
class MeanSquaredError {
public:
    double forward(y0, y1) {

    }
};