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
    double forward(double x);
    double backward(double gy);
};

class Sigmoid : Function {
public:
    double forward(double x);
    double backward(double gy);
};

// loss function
// MeanSquaredError
class MeanSquaredError {
public:
    double forward(y0, y1);
};

#endif