#include <iostream>
#include <string>

struct task
{
    
};

task add_task()
{

}
void listTasks()
{
    std::cout<<"Options:: " <<std::endl;
    std::cout<<"0-Exit" <<std::endl;
    std::cout<<"1-Add Task" <<std::endl;
    std::cout<<"2-Remove Task" <<std::endl;
    std::cout<<"3-Rename Task" <<std::endl; 
    std::cout<<"4-List Tasks" <<std::endl;
}
int main()
{
    while (true)
    {

        char opt = 0;
        std::cin>>opt;
        switch(opt)
        {
            case 1:
            {

            }
            case 2:
            {

            }
            break;
       
            default:
        }
    }
        
    return 0;
}