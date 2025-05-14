#ifndef LAYER_HPP
#define LAYER_HPP

class Layer {
private:
    int X;
    int Y;
    double[] x;
    double[] u;
    double[] y;
    double[][] w;
    double[] b;
};

int Layer::init(int x_size, int y_size);
void Layer::Forward();
#endif