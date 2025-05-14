class Layer {
public:
    int X;
    int Y;
    double[] x;
    double[] u;
    double[] y;
    double[][] w;
    double[] b;
};

int Layer::init(int x_size, int y_size) {
    X = x_size;
    Y = y_size;

    x = new double[X];
    u = new double[Y];
    y = new double[Y];

    w = new double[Y][X];
    b = new double[Y];
}

void Layer::Forward() {
    for (int i = 0; i < x_size; i++) {
        for (int j = 0; j < y_size; j++) {
            u[i] += x[j] * w[i][j];
        }
        u[i] += b[i];
    }
}
