#include "Core.hpp"

Variable* Function::operator(Variable* x) {
    input = x;
    Variable* y = forward(x);
    y->set_creator(this);
    output = y;
    return y;
}

int Variable::init(double data) {
    data = data;
    grad = 0.0;
    creator = nullptr;
}

void Variable::set_creator(Function* func) {
    creator = func;
}

void Variable::backward() {
    if (grad == 0.0) {
        grad = 1.0;
    }
    if (creator != nullptr) {
        Variable* x = creator->input;
        Variable* y = creator->output;

        x->grad = creator->backward(y->grad);

        x->backward;
    }
}