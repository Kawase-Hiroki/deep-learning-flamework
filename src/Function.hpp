#ifndef FUNCTION_HPP
#define FUNCTION_HPP

// sum
class Sum : Function {
public:
    double forward(double* x);
};

// activation function
// ReLu : Sigmoid
class ReLU : Function {
public:
    double forward(x);
    double backward(gy);
};

class Sigmoid : Function {
public:
    double forward(x);
    double backward(gy);
};

// loss function
// MeanSquaredError
class MeanSquaredError {
public:
    double forward(y0, y1);
};

#endif