#include <future>
#include <iostream>

int find_the_answer_to_ltuae() {
    // 假设这是一个计算密集型的操作
    return 42;
}

void do_other_stuff() {
    // 执行其他任务
}

int main() {
    // 启动异步任务
    std::future<int> the_answer = std::async(find_the_answer_to_ltuae);

    // 在等待异步任务结果时做其他事情
    do_other_stuff();

    // 获取异步操作的结果
    std::cout << "The answer is " << the_answer.get() << std::endl;

    return 0;
}
