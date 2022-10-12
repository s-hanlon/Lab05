#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <numeric>
#include <chrono>
#include "stringdata.cpp"
using namespace std;

int linear_search(std::vector<std::string> container,std::string element);
int binary_search(std::vector<std::string> container,std::string element);

int main() {
    std::vector<std::string> &the_data = getStringData();

    auto startTime = std::chrono::system_clock::now();
    int nothere_linear_loc = linear_search(the_data, "not_here");
    auto endTime = std::chrono::system_clock::now();
    auto nothere_linear_time = endTime - startTime;

    startTime = std::chrono::system_clock::now();
    int nothere_binary_loc = linear_search(the_data, "not_here");
    endTime = std::chrono::system_clock::now();
    auto nothere_binary_time = endTime - startTime;

    std:: cout << "Search term: 'not_here'";
    std:: cout << "Found at location: "<< nothere_binary_loc << endl;
    printf("Linear search time: %d", nothere_linear_time);
    printf("Binary search time: %c", nothere_binary_time);



    startTime = std::chrono::system_clock::now();
    int mzzzz_linear_loc = linear_search(the_data, "mzzzz");
    endTime = std::chrono::system_clock::now();
    auto mzzzz_linear_time = endTime - startTime;

    startTime = std::chrono::system_clock::now();
    int mzzzz_binary_loc = linear_search(the_data, "mzzzz");
    endTime = std::chrono::system_clock::now();
    auto mzzzz_binary_time = endTime - startTime;

    std:: cout << "Search term: 'not_here'";
    std:: cout << "Found at location: "<< mzzzz_binary_loc << endl;
    printf("Linear search time: %d", mzzzz_linear_time);
    printf("Binary search time: %c", mzzzz_binary_time);



    startTime = std::chrono::system_clock::now();
    int aaaaa_linear_loc = linear_search(the_data, "aaaaa");
    endTime = std::chrono::system_clock::now();
    auto aaaaa_linear_time = endTime - startTime;

    startTime = std::chrono::system_clock::now();
    int aaaaa_binary_loc = linear_search(the_data, "aaaaa");
    endTime = std::chrono::system_clock::now();
    auto aaaaa_binary_time = endTime - startTime;

    std:: cout << "Search term: 'not_here'";
    std:: cout << "Found at location: "<< aaaaa_binary_loc << endl;
    printf("Linear search time: %d", aaaaa_linear_time);
    printf("Binary search time: %c", aaaaa_binary_time);


    return 0;
}

int linear_search(std::vector<std::string> container,std::string element)
{
    int cont_len = container.size();
    for (int i = 0; i <= cont_len; i++)
    {
        if (container.at(i) == element)
        {
            return i;
        }
    }
    return -1;
}


int binary_search(std::vector<std::string> container,std::string element)
{
    int maxIndex = container.size()-1;
    int minIndex = 0;
    int midIndex = 0;
    while(minIndex <= maxIndex)
    {
        midIndex = minIndex + (maxIndex-minIndex)/2;
        if(container.at(midIndex) < element)
        {
            minIndex = midIndex + 1;
        }
        else
        {
            if(container.at(midIndex) > element)
            {
                maxIndex = midIndex -1;
            }
            else
            {
                if(container.at(midIndex) == element)
                {
                    return midIndex;
                }
                else
                {
                    return -1;
                }
            }
        }
    }
}
