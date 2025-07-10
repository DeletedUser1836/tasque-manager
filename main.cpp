#include <iostream>
#include <string>

struct task
{
    std::string taskName;
    std::string taskDescription;
    char EndDay;
    char EndMonth;
    unsigned short int EndYear;
    bool IsTime;
    char EndHour;
    char EndMinute;
};

task add_task(std::string TaskName)
{

}
void list_tasks()
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
        list_tasks();
        
        char opt = 0;
        std::cout<<"Choose one of the options above: ";
        std::cin>>opt;
                
        switch(opt)
        {
            case 0:
            {
                std::cout<<"Thanks for using my task manager!"<<std::endl;
                exit;
            }
            case 1:
            {
                std::string taskName= "";
                std::cin>>taskName;
                add_task(taskName);
            }
            case 2:
            {
                
            }            
            default:
            {
                std::cout<<"Invalid option/argument. Please choose once again from the listed ones."<<std::endl;
            }
        }
    }         
    return 0;
}