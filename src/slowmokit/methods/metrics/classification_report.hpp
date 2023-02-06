/**
 * @file methods/metrics/classification_report.hpp
 *
 * Easy include to show the classification report of data
 */

#ifndef SLOWMOKIT_CLASSIFICATION_REPORT_HPP
#define SLOWMOKIT_CLASSIFICATION_REPORT_HPP
#include "../../core.hpp"

/**
 * Takes predicted and actual values of classes
 * @param predictedValue -> predicted values 
 * @param trueValue -> true values
 * @returns the classification report
 * @throws domain_error exception when size of the two vectors is not equal
 */

template <class T>
class ClassificationReport
{
private:
    std::vector<T> trueValue;
    std::vector<T> predictedValue;
    std::map<T, T> classes, truePositive, falsePositive, trueNegative, falseNegative;

public:
    ClassificationReport(std::vector<T> &x, std::vector<T> &y);

    /**
     * @throws domain_error exception when size of the two vectors is not equal
     */
    void confusionMatrix(std::vector<T> &, std::vector<T> &);


    /**
     * @finding precision values for all the classes 
     * @returns the map with all the precision values
     */
    std::map<T, double> precision();


    /**
     * @finding recall values for all the classes 
     * @returns the map with all the recall values
     */
    std::map<T, double> recall();


    /**
     * @finding f1scores value for all the classes 
     * @returns the map with all the f1scores values
     */
    std::map<T, double> f1Score();


    /**
     * @finding accuracy  for all the classes 
     * @returns the map with all the accuracy values
     */
    std::map<T, double> accuracy();


    /**
     * @printing all the report paramenters in the form of table 
     * @returns nothing except happiness 
     */
    void printReport();
};

#endif // SLOWMOKIT_CLASSIFICATION_REPORT_HPP
