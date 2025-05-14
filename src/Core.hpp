#ifndef CORE_HPP
#define CORE_HPP

class Function {
public:
    Variable* input;
    Variable* output;

    Variable* Function::operator(Variable* x)
};

class Variable {
public:
    double data;
    double grad;
    Function* creator;

    void Variable::init(double data);
    void Variable::set_creator(Function* func);
    void Variable::backward();
};

#endif