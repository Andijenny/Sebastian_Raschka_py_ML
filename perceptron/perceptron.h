#ifndef PERCEPTRON_H_
#define PERCEPTRON_H_

#include <vector>

namespace cls
{
    class Perceptron {
    public:
        Perceptron(double eta, double niter):
            eta_(eta), nIter_(niter)
        {
        }
        void fit(const std::vector<double>& x, const std::vector<double>& y);
    private:
        double                      eta_;
        double                      nIter_;
        std::vector<double>         w_;
        std::vector<double>         error_;
    };

}


#endif
