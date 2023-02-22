
#include<slowmokit/linear_model/linear_regression.hpp>

int main()
{
    slkt::LinearRegression<double> model;
    
    std::vector<std::vector<double>> x = {{1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}};
    std::vector<double> y = {2, 3, 4, 5, 6};

    model.fit(x, y);
    model.printCoefficients();

    std::vector<double> yPred = model.predict(x);
    for (int i = 0; i < y.size(); i++)
        std::cout << "Actual value: " << y[i] << ", Predicted value: " << yPred[i] << std::endl;

    return 0;
}