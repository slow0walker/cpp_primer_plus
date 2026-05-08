#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>

class Customer
{
public:
    int arrivalTime; // 客户到达时间
    int serviceTime; // 服务时间
    int waitTime;    // 等待时间

    Customer(int arrival) : arrivalTime(arrival), waitTime(0)
    {
        serviceTime = rand() % 3 + 1; // 服务时间为1至3分钟
    }
};

class ATM
{
public:
    std::queue<Customer> queue;
    int totalWaitTime;  // 总等待时间
    int totalCustomers; // 总客户数

    ATM() : totalWaitTime(0), totalCustomers(0) {}

    // 模拟处理一个小时的客户请求
    void processHour(int customerCount)
    {
        for (int i = 0; i < customerCount; ++i)
        {
            int arrivalTime = rand() % 60; // 每小时的到达时间（0到59分钟之间）
            Customer newCustomer(arrivalTime);

            // 计算当前客户的等待时间
            if (!queue.empty())
            {
                newCustomer.waitTime = queue.back().waitTime + queue.back().serviceTime;
            }
            queue.push(newCustomer);
            totalWaitTime += newCustomer.waitTime;
            totalCustomers++;
        }
    }

    // 计算平均等待时间
    double getAverageWaitTime()
    {
        return (totalCustomers > 0) ? static_cast<double>(totalWaitTime) / totalCustomers : 0;
    }
};

int main()
{
    srand(time(0)); // 用于生成随机数

    ATM atm1, atm2; // 两台ATM
    int customerCount = 0;

    // 从最小客户数开始模拟
    for (int i = 0; i < 100; ++i)
    {
        // 选择人少的队列加入客户
        if (atm1.getAverageWaitTime() <= atm2.getAverageWaitTime())
        {
            atm1.processHour(customerCount);
        }
        else
        {
            atm2.processHour(customerCount);
        }

        customerCount++;

        // 检查平均等待时间
        if (atm1.getAverageWaitTime() <= 1 && atm2.getAverageWaitTime() <= 1)
        {
            std::cout << "Found customer count: " << customerCount << " with average wait time of 1 minute or less.\n";
            break;
        }
    }

    return 0;
}